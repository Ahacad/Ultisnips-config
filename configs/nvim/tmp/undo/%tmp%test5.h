Vim�UnDo� U/�ÏG�}Ǽ�_̕�-[qz�^x�1t7�      #include <signal.h>      
      &       &   &   &    `�<�   	 _�                             ����                                                                                                                                                                                                                                                                                                                                                             `�<>     �                   5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<C     �                  #include <stdio_ext.h>5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<D     �               �               5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                v       `�<E     �                 #include <stdio.h>5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<I     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v       `�<I     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v       `�<J     �                  5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                v       `�<L     �                   �             �                 int main() {}5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                v       `�<O     �                   int *p = NULL-5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                v       `�<O     �                   int *p = NULL-    �                   ;5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                v       `�<Q     �                   int *p = NULL;5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<T     �                   signal()5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<V     �                   signal(SIGBUS, )5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<W     �                   signal(SIGBUS, handler)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<X     �             �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<Y     �      	       �             5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<Z     �         	          signal(SIGBUS, handler);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<^     �      	   	          signal(SIGBUS, handler);5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<a     �      
   
          �      
   	    5�_�                    	   
    ����                                                                                                                                                                                                                                                                                                                                                v       `�<d     �      
   
      
    *p = 05�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                v       `�<e     �         
    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v       `�<e     �             5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v       `�<h     �                5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<m     �               void handler(int s)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<m     �                   �             �               void handler(int s) {}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<u     �                   if (s == SIGSEGV)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<u     �                       �             �                   if (s == SIGSEGV) {}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                v       `�<w     �                       printf()5�_�                       ,    ����                                                                                                                                                                                                                                                                                                                                                v       `�<~     �               -        printf("got a segmentation fault \n")5�_�                       -    ����                                                                                                                                                                                                                                                                                                                                                v       `�<    �                }�                    *p = 0;�                    signal(SIGILL, handler);�                    signal(SIGSEGV, handler);�                    signal(SIGBUS, handler);�   
                 int *p = NULL;�   	             int main() {�      
           �      	          }�                    }�               -        printf("got a segmentation fault \n")�                    if (s == SIGSEGV) {�                void handler(int s) {�                 �                #include <signal.h>�                 #include <stdio.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                                                v       `�<�     �      	             �      	       5�_�      !                      ����                                                                                                                                                                                                                                                                                                                                                v       `�<�    �                }�                    *p = 0;�                    signal(SIGILL, handler);�                    signal(SIGSEGV, handler);�                    signal(SIGBUS, handler);�                    int *p = NULL;�   
             int main() {�   	              �      
          }�      	              exit(1);�                    }�                .        printf("got a segmentation fault \n");�                    if (s == SIGSEGV) {�                void handler(int s) {�                 �                #include <stdio.h>�                 #include <signal.h>�                }�                    *p = 0;�                    signal(SIGILL, handler);�                    signal(SIGSEGV, handler);�                    signal(SIGBUS, handler);�                    int *p = NULL;�   
             int main() {�   	              �      
          }�      	              exit(1);�                    }�                .        printf("got a segmentation fault \n");�                    if (s == SIGSEGV) {�                void handler(int s) {�                 �                #include <stdio.h>�                 #include <signal.h>�                }�                    *p = 0;�                    signal(SIGILL, handler);�                    signal(SIGSEGV, handler);�                    signal(SIGBUS, handler);�                    int *p = NULL;�   
             int main() {�   	              �      
          }�      	             exit(1)�                    }�                .        printf("got a segmentation fault \n");�                    if (s == SIGSEGV) {�                void handler(int s) {�                 �                #include <stdio.h>�                 #include <signal.h>5�_�       "           !          ����                                                                                                                                                                                                                                                                                                                                                v       `�<�     �                    exit(1);5�_�   !   #           "           ����                                                                                                                                                                                                                                                                                                                                                v       `�<�    �                }�                    exit(1);�                    *p = 0;�                    signal(SIGILL, handler);�                    signal(SIGSEGV, handler);�                    signal(SIGBUS, handler);�   
                 int *p = NULL;�   	             int main() {�      
           �      	          }�                    }�                .        printf("got a segmentation fault \n");�                    if (s == SIGSEGV) {�                void handler(int s) {�                 �                #include <stdio.h>�                 #include <signal.h>�             �             5�_�   "   $           #          ����                                                                                                                                                                                                                                                                                                                                                v       `�<�     �                    exit(1);5�_�   #   %           $           ����                                                                                                                                                                                                                                                                                                                                                v       `�<�    �                }�                    *p = 0;�                    signal(SIGILL, handler);�                    signal(SIGSEGV, handler);�                    signal(SIGBUS, handler);�                    int *p = NULL;�   
             int main() {�   	              �      
          }�      	              exit(1);�                    }�                .        printf("got a segmentation fault \n");�                    if (s == SIGSEGV) {�                void handler(int s) {�                 �                #include <stdio.h>�                 #include <signal.h>�      	       �             5�_�   $   &           %           ����                                                                                                                                                                                                                                                                                                                                                v       `�<�     �             �             5�_�   %               &      
    ����                                                                                                                                                                                                                                                                                                                                                v       `�<�   	 �                }�                    *p = 0;�                    signal(SIGILL, handler);�                    signal(SIGSEGV, handler);�                    signal(SIGBUS, handler);�                    int *p = NULL;�                int main() {�   
              �   	             }�      
              exit(1);�      	              }�                .        printf("got a segmentation fault \n");�                    if (s == SIGSEGV) {�                void handler(int s) {�                 �                #include <stdlib.h>�                #include <stdio.h>�                 #include <signal.h>�                }�                    *p = 0;�                    signal(SIGILL, handler);�                    signal(SIGSEGV, handler);�                    signal(SIGBUS, handler);�                    int *p = NULL;�                int main() {�   
              �   	             }�      
              exit(1);�      	              }�                .        printf("got a segmentation fault \n");�                    if (s == SIGSEGV) {�                void handler(int s) {�                 �                #include <stdlib.h>�                #include <stdio.h>�                 #include <signal.h>�                }�                    *p = 0;�                    signal(SIGILL, handler);�                    signal(SIGSEGV, handler);�                    signal(SIGBUS, handler);�                    int *p = NULL;�                int main() {�   
              �   	             }�      
              exit(1);�      	              }�                .        printf("got a segmentation fault \n");�                    if (s == SIGSEGV) {�                void handler(int s) {�                 �                #include <stdio.h>�               #include <signal.h>�                 #include <signal.h>5��