Vim�UnDo� ��J,y]P�>�>VS�B�oHKN?���+]i�P�   =                  &       &   &   &    `�s�    _�                            ����                                                                                                                                                                                                                                                                                                                                                             `�ӌ     �               const { Pool } = require("pg");5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�ӎ     �               "const { Pool } = require("myslq");5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�Ӑ     �               "const { Pool } = require("mysql");5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       `�ӝ     �                });�                  port: 5432,�                  database: "api",�                  host: process.env.DB_HOST,�                  password: "root",�                  user: "ahacad",�                const poolread = new Pool({�                });�                  port: 5432,�                  database: "api",�   
               host: process.env.DB_HOST,�   	               password: "root",�      
            user: "ahacad",�      	          const poolwrite = new Pool({5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       `�ӟ     �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       `�ӟ     �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       `�Ӣ     �                5�_�      	                 #    ����                                                                                                                                                                                                                                                                                                                                                V       `�ө     �               $const poolwrite = mysql.createPool()5�_�      
           	      $    ����                                                                                                                                                                                                                                                                                                                                                V       `�ө     �                   �             �               &const poolwrite = mysql.createPool({})5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                V       `�ӯ     �                   connectionLimit: 10,5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                V       `�Ӷ     �                   host: process.env.DB_HOST5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       `�ӷ     �                   host: process.env.DB_HOST,5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       `�Ӽ     �                    user: "ahacad"5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       `�Ӽ     �                    user: "ahacad",5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       `���     �         !          password: "root"5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       `���     �         !          password: "root"<5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       `���     �         !          password: "root",5�_�                           ����                                                                                                                                                                                                                                                                                                                                                V       `���    �      "   "      const mysql = require('mysql');       require('dotenv').config();       // const poolwrite = new Pool({   // user: "ahacad",   // password: "root",   // host: process.env.DB_HOST,   // database: "api",   // port: 5432,   //});   // const poolread = new Pool({   // user: "ahacad",   // password: "root",   // host: process.env.DB_HOST,   // database: "api",   // port: 5432,   //});       $const poolwrite = mysql.createPool({       connectionLimit: 10,       host: process.env.DB_HOST,       user: 'ahacad',       password: 'root',       database: 'api',   })       module.exports = {       poolwrite,       poolread,�   !   #          };�       "            poolread,�      !            poolwrite,�                 module.exports = {�                 �                })�                    database: "api",�                    password: "root",�                    user: "ahacad",�                    host: process.env.DB_HOST,�                    connectionLimit: 10,�                $const poolwrite = mysql.createPool({�                 �                //});�                  //port: 5432,�                  //database: "api",�                  //host: process.env.DB_HOST,�                  //password: "root",�                  //user: "ahacad",�                //const poolread = new Pool({�                //});�                  //port: 5432,�                  //database: "api",�   
               //host: process.env.DB_HOST,�   	               //password: "root",�      
            //user: "ahacad",�      	          //const poolwrite = new Pool({�                 �                require("dotenv").config();�                 �                const mysql = require("mysql");�                 */�                 *postgresql pooling�                 /*�         "          database: "api"5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        `���     �      %   "    �         "    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  V        `���    �      )   )   %   const mysql = require('mysql');       require('dotenv').config();       // const poolwrite = new Pool({   // user: "ahacad",   // password: "root",   // host: process.env.DB_HOST,   // database: "api",   // port: 5432,   //});   // const poolread = new Pool({   // user: "ahacad",   // password: "root",   // host: process.env.DB_HOST,   // database: "api",   // port: 5432,   //});       $const poolwrite = mysql.createPool({       connectionLimit: 10,       host: process.env.DB_HOST,       user: 'ahacad',       password: 'root',       database: 'api',   });   #const poolread = mysql.createPool({       connectionLimit: 10,       host: process.env.DB_HOST,       user: 'ahacad',       password: 'root',       database: 'api',   });       module.exports = {       poolwrite,       poolread,�   (   *          };�   '   )            poolread,�   &   (            poolwrite,�   %   '          module.exports = {�   $   &           �   #   %          });�   "   $            database: "api",�   !   #            password: "root",�       "            user: "ahacad",�      !            host: process.env.DB_HOST,�                   connectionLimit: 10,�                #const poolread = mysql.createPool({�                });�                  database: "api",�                  password: "root",�                  user: "ahacad",�                  host: process.env.DB_HOST,�                  connectionLimit: 10,�                $const poolwrite = mysql.createPool({�                 �                //});�                // port: 5432,�                // database: "api",�                // host: process.env.DB_HOST,�                // password: "root",�                // user: "ahacad",�                // const poolread = new Pool({�                //});�                // port: 5432,�                // database: "api",�   
             // host: process.env.DB_HOST,�   	             // password: "root",�      
          // user: "ahacad",�      	          // const poolwrite = new Pool({�                 �                require("dotenv").config();�                 �                const mysql = require("mysql");�                 */�                 *postgresql pooling�                 /*�         )      $const poolwrite = mysql.createPool({5�_�                    $        ����                                                                                                                                                                                                                                                                                                                                                             `��     �      )   *   &   const mysql = require('mysql');       require('dotenv').config();       // const poolwrite = new Pool({   // user: "ahacad",   // password: "root",   // host: process.env.DB_HOST,   // database: "api",   // port: 5432,   //});   // const poolread = new Pool({   // user: "ahacad",   // password: "root",   // host: process.env.DB_HOST,   // database: "api",   // port: 5432,   //});       $const poolwrite = mysql.createPool({       connectionLimit: 10,       host: process.env.DB_HOST,       user: 'ahacad',       password: 'root',       database: 'api',   });   #const poolread = mysql.createPool({       connectionLimit: 10,       host: process.env.DB_HOST,       user: 'ahacad',       password: 'root',       database: 'api',   });           module.exports = {       poolwrite,       poolread,�   )   +          };�   (   *            poolread,�   '   )            poolwrite,�   &   (          module.exports = {�   %   '           �   $   &              �   #   %          });�   "   $            database: "api",�   !   #            password: "root",�       "            user: "ahacad",�      !            host: process.env.DB_HOST,�                   connectionLimit: 10,�                #const poolread = mysql.createPool({�                });�                  database: "api",�                  password: "root",�                  user: "ahacad",�                  host: process.env.DB_HOST,�                  connectionLimit: 10,�                $const poolwrite = mysql.createPool({�                 �                //});�                // port: 5432,�                // database: "api",�                // host: process.env.DB_HOST,�                // password: "root",�                // user: "ahacad",�                // const poolread = new Pool({�                //});�                // port: 5432,�                // database: "api",�   
             // host: process.env.DB_HOST,�   	             // password: "root",�      
          // user: "ahacad",�      	          // const poolwrite = new Pool({�                 �                require("dotenv").config();�                 �                const mysql = require("mysql");�                 */�                 *postgresql pooling�                 /*�   $   &   *       �   $   &   )    5�_�                    $        ����                                                                                                                                                                                                                                                                                                                                                             `�sF     �   $   &   )    5�_�                    %        ����                                                                                                                                                                                                                                                                                                                                                             `�sG     �   %   '   *    5�_�                    &        ����                                                                                                                                                                                                                                                                                                                                                             `�sH     �   %   0   +       �   &   '   +    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�sJ     �         4      const mysql = require("mysql");5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�sM     �         4      const knex = require("mysql");5�_�                            ����                                                                                                                                                                                                                                                                                                                                      $          V       `�sR     �   #   %          });�   "   $            database: "api",�   !   #            password: "root",�       "            user: "ahacad",�      !            host: process.env.DB_HOST,�                   connectionLimit: 10,�                #const poolread = mysql.createPool({�                });�                  database: "api",�                  password: "root",�                  user: "ahacad",�                  host: process.env.DB_HOST,�                  connectionLimit: 10,�                $const poolwrite = mysql.createPool({5�_�                    &       ����                                                                                                                                                                                                                                                                                                                                      $          V       `�sv     �   %   '   4      const knex = require("knex")({5�_�                    .        ����                                                                                                                                                                                                                                                                                                                            /           &           V        `�s}     �   .   9   4    �   .   /   4    5�_�                    /       ����                                                                                                                                                                                                                                                                                                                            9           &           V        `�s�     �   .   0   >      "const poolread = require("knex")({5�_�                     /       ����                                                                                                                                                                                                                                                                                                                            9           &           V        `�s�     �   .   0   >      const write = require("knex")({5�_�      !               %        ����                                                                                                                                                                                                                                                                                                                            9           &           V        `�s�     �   %   '   >    5�_�       "           !   &        ����                                                                                                                                                                                                                                                                                                                            :           '           V        `�s�     �   %   '   ?       5�_�   !   $           "   &       ����                                                                                                                                                                                                                                                                                                                            :           '           V        `�s�    �      =   ?   ;   const knex = require('knex');       require('dotenv').config();       // const poolwrite = new Pool({   // user: "ahacad",   // password: "root",   // host: process.env.DB_HOST,   // database: "api",   // port: 5432,   //});   // const poolread = new Pool({   // user: "ahacad",   // password: "root",   // host: process.env.DB_HOST,   // database: "api",   // port: 5432,   //});       '// const poolwrite = mysql.createPool({   // connectionLimit: 10,   // host: process.env.DB_HOST,   // user: "ahacad",   // password: "root",   // database: "api",   //});   &// const poolread = mysql.createPool({   // connectionLimit: 10,   // host: process.env.DB_HOST,   // user: "ahacad",   // password: "root",   // database: "api",   //});       !// FIXME: change database configs   "const poolread = require('knex')({       client: 'mysql',       connection: {           host: '127.0.0.1',           user: 'ahacad',           password: 'mysql',           database: 'foo',       },   });   #const poolwrite = require('knex')({       client: 'mysql',       connection: {           host: '127.0.0.1',           user: 'ahacad',           password: 'mysql',           database: 'foo',       },   });               module.exports = {       poolwrite,       poolread,�   >   @          };�   =   ?            poolread,�   <   >            poolwrite,�   ;   =          module.exports = {�   :   <           �   9   ;           �   8   :           �   7   9          });�   6   8            },�   5   7              database: "foo",�   4   6              password: "mysql",�   3   5              user: "ahacad",�   2   4              host: "127.0.0.1",�   1   3            connection: {�   0   2            client: "mysql",�   /   1          #const poolwrite = require("knex")({�   .   0          });�   -   /            },�   ,   .              database: "foo",�   +   -              password: "mysql",�   *   ,              user: "ahacad",�   )   +              host: "127.0.0.1",�   (   *            connection: {�   '   )            client: "mysql",�   &   (          "const poolread = require("knex")({�   %   '          !// FIXME: change database configs�   $   &           �   #   %          //});�   "   $            //database: "api",�   !   #            //password: "root",�       "            //user: "ahacad",�      !            //host: process.env.DB_HOST,�                   //connectionLimit: 10,�                %//const poolread = mysql.createPool({�                //});�                  //database: "api",�                  //password: "root",�                  //user: "ahacad",�                  //host: process.env.DB_HOST,�                  //connectionLimit: 10,�                &//const poolwrite = mysql.createPool({�                 �                //});�                // port: 5432,�                // database: "api",�                // host: process.env.DB_HOST,�                // password: "root",�                // user: "ahacad",�                // const poolread = new Pool({�                //});�                // port: 5432,�                // database: "api",�   
             // host: process.env.DB_HOST,�   	             // password: "root",�      
          // user: "ahacad",�      	          // const poolwrite = new Pool({�                 �                require("dotenv").config();�                 �                const knex = require("knex");�                 */�                 *postgresql pooling�                 /*�   %   '   ?      // FIXME: change5�_�   "   %   #       $   %        ����                                                                                                                                                                                                                                                                                                                                                  V        `�s�     �   %   '   =    5�_�   $   &           %   &        ����                                                                                                                                                                                                                                                                                                                                                  V        `�s�     �   %   '   >       5�_�   %               &   &        ����                                                                                                                                                                                                                                                                                                                                                  V        `�s�    �      =   =   9   const knex = require('knex');       require('dotenv').config();       // const poolwrite = new Pool({   // user: "ahacad",   // password: "root",   // host: process.env.DB_HOST,   // database: "api",   // port: 5432,   //});   // const poolread = new Pool({   // user: "ahacad",   // password: "root",   // host: process.env.DB_HOST,   // database: "api",   // port: 5432,   //});       '// const poolwrite = mysql.createPool({   // connectionLimit: 10,   // host: process.env.DB_HOST,   // user: "ahacad",   // password: "root",   // database: "api",   //});   &// const poolread = mysql.createPool({   // connectionLimit: 10,   // host: process.env.DB_HOST,   // user: "ahacad",   // password: "root",   // database: "api",   //});       !// FIXME: change database configs   "const poolread = require('knex')({       client: 'mysql',       connection: {           host: '127.0.0.1',           user: 'ahacad',           password: 'mysql',           database: 'foo',       },   });   #const poolwrite = require('knex')({       client: 'mysql',       connection: {           host: '127.0.0.1',           user: 'ahacad',           password: 'mysql',           database: 'foo',       },   });       module.exports = {       poolwrite,       poolread,�   <   >          };�   ;   =            poolread,�   :   <            poolwrite,�   9   ;          module.exports = {�   8   :           �   7   9          });�   6   8            },�   5   7              database: "foo",�   4   6              password: "mysql",�   3   5              user: "ahacad",�   2   4              host: "127.0.0.1",�   1   3            connection: {�   0   2            client: "mysql",�   /   1          #const poolwrite = require("knex")({�   .   0          });�   -   /            },�   ,   .              database: "foo",�   +   -              password: "mysql",�   *   ,              user: "ahacad",�   )   +              host: "127.0.0.1",�   (   *            connection: {�   '   )            client: "mysql",�   &   (          "const poolread = require("knex")({�   %   '          !// FIXME: change database configs�   $   &           �   #   %          //});�   "   $          // database: "api",�   !   #          // password: "root",�       "          // user: "ahacad",�      !          // host: process.env.DB_HOST,�                 // connectionLimit: 10,�                &// const poolread = mysql.createPool({�                //});�                // database: "api",�                // password: "root",�                // user: "ahacad",�                // host: process.env.DB_HOST,�                // connectionLimit: 10,�                '// const poolwrite = mysql.createPool({�                 �                //});�                // port: 5432,�                // database: "api",�                // host: process.env.DB_HOST,�                // password: "root",�                // user: "ahacad",�                // const poolread = new Pool({�                //});�                // port: 5432,�                // database: "api",�   
             // host: process.env.DB_HOST,�   	             // password: "root",�      
          // user: "ahacad",�      	          // const poolwrite = new Pool({�                 �                require("dotenv").config();�                 �                const knex = require("knex");�                 */�                 *postgresql pooling�                 /*�   %   &           5�_�   "           $   #          ����                                                                                                                                                                                                                                                                                                                                                  V        `�s�     �         =      const knex = require("knex");    5��