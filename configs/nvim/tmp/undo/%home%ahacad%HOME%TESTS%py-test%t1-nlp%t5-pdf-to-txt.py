Vim�UnDo�  ��m����щ������<JD!u޲Q��   "   pdf_to_txt('2.pdf', '2.txt')   "                          a��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             a�b     �              5��                          �                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             a�b     �         !    5��                          �                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             a�c     �         "       5��                          �                      �                         �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                        �                     �                                            �                                            �                                            �                                            �                                            �                                            �                                            5�_�                       "    ����                                                                                                                                                                                                                                                                                                                                                             a�o     �         "      "def pdf_to_txt(pdf_file, txt_file)5��       "                                       5�_�                            ����                                                                                                                                                                                                                                                                                                                                       "                   a�r     �                 >interpreter = PDFPageInterpreter(PDFResourceManager(), device)       document = PDFDocument()       (parser = PDFParser(open(pdf_file, 'rb'))   parser.set_document(document)   document.set_parser(parser)   document.initialize()       0with open(txt_file, 'w', encoding='utf-8') as f:   *    page_list = list(document.get_pages())   %    page_list_length = len(page_list)   1    print("number of pdf is: ", page_list_length)       %    for page in document.get_pages():   &        interpreter.process_page(page)       $        layout = device.get_result()           for x in layout:   2            if isinstance(x, LTTextBoxHorizontal):   &                results = x.get_text()                    f.write(results)�         "      Edevice = PDFPageAggregator(PDFResourceManager(), laparams=LAParams())5��                          5                     �                                               �                          �                     �                          �                     �                          �                     �                          �                     �                                               �                          8                     �                          X                     �                          r                     �                          w                     �                          �                     �                          �                     �                                               �                          ;                     �                          @                     �                          j                     �                          �                     �                          �                     �                          �                     �                          �                     �                                                �    !                      B                     5�_�                            ����                                                                                                                                                                                                                                                                                                                            
                      V        a�t     �                    pdf_file = '1.pdf'   txt_file = '1.txt'5��                                '               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        a�u    �                 5��                                               5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                  V        a��     �               5��                          ?                     �                          ?                     5�_�      
           	           ����                                                                                                                                                                                                                                                                                                                                                  V        a��     �               5��                          @                     5�_�   	              
            ����                                                                                                                                                                                                                                                                                                                                                  V        a��     �                  5��                          @                     �                         @                    �                         @                    �                         @                    �                         @                    5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                  V        a��     �                 pdf_to_txt()5��                         K                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        a��     �                 pdf_to_txt('2.pdf')5��                         R                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        a��     �                 pdf_to_txt('2.pdf', )5��                         T                     �                        W                    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        a��    �      !          #def pdf_to_txt(pdf_file, txt_file):   I    device = PDFPageAggregator(PDFResourceManager(), laparams=LAParams())   B    interpreter = PDFPageInterpreter(PDFResourceManager(), device)              document = PDFDocument()          ,    parser = PDFParser(open(pdf_file, 'rb'))   !    parser.set_document(document)       document.set_parser(parser)       document.initialize()          4    with open(txt_file, 'w', encoding='utf-8') as f:   .        page_list = list(document.get_pages())   )        page_list_length = len(page_list)   5        print("number of pdf is: ", page_list_length)          )        for page in document.get_pages():   *            interpreter.process_page(page)          (            layout = device.get_result()               for x in layout:   6                if isinstance(x, LTTextBoxHorizontal):   *                    results = x.get_text()   $                    f.write(results)5��                         �       V      D      5�_�                    "       ����                                                                                                                                                                                                                                                                                                                                                             a��    �   !              pdf_to_txt('2.pdf', '2.txt')5��    !                     :                     �    !                    :                    5�_�                    "       ����                                                                                                                                                                                                                                                                                                                                                             a��     �   !              pdf_to_txt('./2.pdf', '2.txt')5��    !                    <                    5�_�                    "       ����                                                                                                                                                                                                                                                                                                                                                             a��    �   !              pdf_to_txt('./1.pdf', '2.txt')5��    !                    E                    5�_�                    "        ����                                                                                                                                                                                                                                                                                                                                                             a�   
 �   !              pdf_to_txt('./1.pdf', '3.txt')5��    !                    <                    5�_�                     "        ����                                                                                                                                                                                                                                                                                                                                                             a��    �   !              pdf_to_txt('./2.pdf', '3.txt')5��    !                    <                    5��