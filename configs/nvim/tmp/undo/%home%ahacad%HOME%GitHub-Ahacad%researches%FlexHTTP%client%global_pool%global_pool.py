Vim�UnDo� Ӂd�:Ij�&	?�"������q,��cF��   �                                  a��    _�                            ����                                                                                                                                                                                                                                                                                                                                                             a��     �               sys.path.append('..')5��                        �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             a�      �               sys.path.append(os.en)5��                         �                      �                         �                      �                         �                      �                         �                      �                        �                     �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                        �                     �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                     	   �              	       �                        �                     �                         �                      �                        �                     �                         �                      �                         �                      �                        �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             a�     �               !sys.path.append(os.environ.get())5��                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �       
                  �                      �       	                  �                      �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                         �                      �                      %   �              %       �       $                 �                     5�_�                       *    ����                                                                                                                                                                                                                                                                                                                                                             a�    �               +sys.path.append(os.environ.get("FLEXHTTP"))5��       *                  �                      �       .                                     �       /                                     �       /                                     �       /                                     �       2                                     5�_�                       /    ����                                                                                                                                                                                                                                                                                                                                                             a�    �               7sys.path.append(os.environ.get("FLEXHTTP") + "/server")5��       /                                     �       /                                     �       5                 
                    �       6                                     5�_�                       *    ����                                                                                                                                                                                                                                                                                                                                                             a�     �               =sys.path.append(os.environ.get("FLEXHTTP") + "/client/cache")5��       *                  �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             a�     �               >sys.path.append(os.environ.get("FLEXHTTP")) + "/client/cache")5��                         �                      �                        �                     5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             a�    �               Csys.path.append(str()os.environ.get("FLEXHTTP")) + "/client/cache")5��                         �                      5�_�      
           	      ;    ����                                                                                                                                                                                                                                                                                                                                                             a�     �               Bsys.path.append(str(os.environ.get("FLEXHTTP")) + "/client/cache")5��       :                                       5�_�   	              
      9    ����                                                                                                                                                                                                                                                                                                                                                             a��    �                  	import os   
import sys   import conf   import json   from pprint import pprint   import pandas as pd   from typing import List       Ifrom flask import Flask, request, jsonify, send_file, send_from_directory   app = Flask(__name__)       <sys.path.append(str(os.environ.get("FLEXHTTP")) + "/client")   &from cache import RedisTable, RedisRow           3@app.route("/download/<filename>", methods=['GET'])   def download_model(filename):   j    # 需要知道2个参数, 第1个参数是本地目录的path, 第2个参数是文件名(带扩展名)   4    directory = os.getcwd()  # 假设在当前目录   G    return send_from_directory(directory, filename, as_attachment=True)           ,@app.route('/pooltrans', methods = ["POST"])   def pooltrans():       # 获取 JSON 数据       data = request.get_json()   (    client_trace_records = data['trace']   0    raw_client_trace_records = data['raw_trace']   '    client_trace_primekey = data['key']   2    # 查询PLT，返回两种potocol的平均PLT,   4    res = fetch_global_labels(client_trace_primekey)       # 先插入原始表   4    insert_local_raw_trace(raw_client_trace_records)       # 更新label表    .    update_global_labels(client_trace_records)           # 返回数据       res = str(res)              return res       &@app.route('/test', methods = ['GET'])   def test():       return "hello world"       +def fetch_global_labels(primekeys) -> dict:       """       :rtype: dict   U        key: tuple of link and the network features (link, bandwidth, loss_rate, rtt)   <        val: dict{'plt_http2': <float>, 'plt_quic': <float>}       """       global_labels_dict = {}       for primekey in primekeys:   \        global_trace_with_labels_row = RedisRow(conf.redis_pool, "label_{}_{}_{}_{}".format(   [            primekey['link'], primekey['bandwidth'], primekey['loss_rate'], primekey['rtt']   
        ))   '        primekey_network_conditions = {   &            'link': primekey['link'],    /            'bandwidth': primekey['bandwidth'],   /            'loss_rate': primekey['loss_rate'],   "            'rtt': primekey['rtt']   	        }   S        global_trace_with_labels_dict = global_trace_with_labels_row.get_val_dict()   J        global_labels_dict[tuple(primekey_network_conditions.items())] = {   �            "plt_http2": float(global_trace_with_labels_dict['plt_http2']) if ('plt_http2' in global_trace_with_labels_dict) else None,   �            "plt_quic": float(global_trace_with_labels_dict['plt_quic']) if ('plt_quic' in global_trace_with_labels_dict) else None   	        }       return global_labels_dict           5def insert_local_raw_trace(raw_client_trace_records):   P    global_trace_table = RedisTable(conf.redis_pool, conf.table_global_trace)      +    for record in raw_client_trace_records:   L        row_prime_key = 'trace_{}_{}'.format(record['link'], record['time'])   1        global_trace_table.add_row(row_prime_key)   6        row = RedisRow(conf.redis_pool, row_prime_key)           row.update_val({   $            "link":  record["link"],   $            "time":  record["time"],   ,            "protocol":  record["protocol"],   "            "PLT":  record["PLT"],   .            "bandwidth":  record["bandwidth"],   .            "loss_rate":  record["loss_rate"],   "            "rtt":  record["rtt"],   )            "all_cnt": record['all_cnt'],   +            "all_size": record['all_size'],   +            "text_cnt": record['text_cnt'],   -            "text_size": record['text_size'],   )            "css_cnt": record['css_cnt'],   +            "css_size": record['css_size'],   '            "js_cnt": record['js_cnt'],   )            "js_size": record['js_size'],   )            "img_cnt": record['img_cnt'],   *            "img_size": record['img_size']   
        })           /def update_global_labels(client_trace_records):   e    global_trace_with_labels_table = RedisTable(conf.redis_pool, conf.table_global_trace_with_labels)   '    for record in client_trace_records:           primekey = {   #            "link": record["link"],   -            "bandwidth": record["bandwidth"],   -            "loss_rate": record["loss_rate"],                "rtt": record["rtt"]   	        }   J        global_trace_with_labels_table.add_row("label_{}_{}_{}_{}".format(   [            primekey['link'], primekey['bandwidth'], primekey['loss_rate'], primekey['rtt']   
        ))   C        row = RedisRow(conf.redis_pool, "label_{}_{}_{}_{}".format(   [            primekey['link'], primekey['bandwidth'], primekey['loss_rate'], primekey['rtt']   
        ))       N        previous_plt = row.get_val_of_key("plt_{}".format(record["protocol"]))            if previous_plt is None:   *            new_plt = float(record["PLT"])           else:   F            new_plt = (float(previous_plt) + float(record["PLT"])) / 2               row.update_val({   8            "plt_{}".format(record["protocol"]): new_plt   
        })           if __name__ == "__main__":   &    app.run(host='0.0.0.0',port=12345)       5��                   �               M      F      5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                             a��     �                 &from cache import RedisTable, RedisRow5��                                   '               5�_�                             ����                                                                                                                                                                                                                                                                                                                                                             a��    �         �    �         �    5��                                        '       5��