Vim�UnDo� �e���8��{̌D�d��z	�r��ڒ(�ޯP   ;   K                my_printf("(info) \"%s\" passed.\n", testcase.name.data());   3                          a���    _�                     '       ����                                                                                                                                                                                                                                                                                                                                                             a���     �   &   (   ;      f            fmy_printf(stderr, "(error) \"%s\" [%d] exited abnormally.\n", testcase.name.data(), pid);5��    &                     �                     5�_�                    '       ����                                                                                                                                                                                                                                                                                                                                                             a���     �   &   (   ;      e            fy_printf(stderr, "(error) \"%s\" [%d] exited abnormally.\n", testcase.name.data(), pid);5��    &                     �                     5�_�                    '       ����                                                                                                                                                                                                                                                                                                                                                             a���     �   &   (   ;      d            f_printf(stderr, "(error) \"%s\" [%d] exited abnormally.\n", testcase.name.data(), pid);5��    &                     �                     5�_�                    ,       ����                                                                                                                                                                                                                                                                                                                                                             a���     �   +   -   ;      "                fmy_printf(stderr,5��    +                     �                     5�_�                    ,       ����                                                                                                                                                                                                                                                                                                                                                             a���     �   +   -   ;      !                fy_printf(stderr,5��    +                     �                     5�_�                    ,       ����                                                                                                                                                                                                                                                                                                                                                             a���    �   :   <          };�   9   ;          $    std::vector<Testcase> testcases;�   8   :          private:�   7   9           �   6   8              }�   5   7                  return true;�   4   6           �   3   5          	        }�   2   4          K                my_printf("(info) \"%s\" passed.\n", testcase.name.data());�   1   3                      } else�   0   2                          return false;�   /   1                                   status);�   .   0                                  pid,�   -   /          -                        testcase.name.data(),�   ,   .          G                        "(error) \"%s\" [%d] exited with status %d.\n",�   +   -                          fprintf(stderr,�   *   ,                      if (status != 0) {�   )   +          )            int status = WEXITSTATUS(ws);�   (   *                  } else {�   '   )                      return false;�   &   (          c            fprintf(stderr, "(error) \"%s\" [%d] exited abnormally.\n", testcase.name.data(), pid);�   %   '                  if (!WIFEXITED(ws)) {�   $   &           �   #   %                  waitpid(pid, &ws, 0);�   "   $                  int ws;�   !   #           �       "          "            exit(testcase.func());�      !                   if ((pid = fork()) == 0)�                         int pid;�                /    static bool run(const Testcase &testcase) {�                 �                    }�                	        }�                                exit(0);�                0            if (!run(testcase) && stop_on_error)�                0        for (const auto &testcase : testcases) {�                )    void run(bool stop_on_error = true) {�                 �                N    Runner(const std::vector<Testcase> &_testcases) : testcases(_testcases) {}�                public:�                class Runner {�                 �                };�                    TestFunc func;�                    std::string name;�                struct Testcase {�                 �                &using TestFunc = std::function<int()>;�   
              �   	             #include <unistd.h>�      
          #include <sys/wait.h>�      	           �                #include <vector>�                #include <string>�                #include <functional>�                 �                #include <cstdio>�                 �                 #pragma once�   +   -   ;                       f_printf(stderr,5��    +                     �                     �                                                �                                                  �                                              �                                                   �                         !                     �                         7                     �                         I                     �                           [                       �                         \                     �    	                     r                     �    
                       �                       �               &       &   �       &       &       �                           �                       �                         �                     �                         �                     �                         �                     �                         �                     �                           �                       �                         �                     �                         �                     �               N       N         N       N       �                           T                      �               )       )   U      )       )       �               0       0         0       0       �               0       0   �      0       0       �                         �                    �               	       	   �      	       	       �                                             �                           
                      �               /       /         /       /       �                         ;                    �                           L                      �                "       "   m      "       "       �    !                       �                      �    "                     �                    �    #                     �                    �    $                       �                      �    %                     �                    �    &           c       c   �      c       c       �    '                     B                    �    (                     \                    �    )           )       )   m      )       )       �    *                     �                    �    +                     �                    �    ,           G       G   �      G       G       �    -           -       -         -       -       �    .                     L                    �    /                       i                      �    0                     �                    �    1                     �                    �    2           K       K   �      K       K       �    3           	       	         	       	       �    4                                             �    5                                         �    6                     '                    �    7                       -                      �    8                     .                    �    9           $       $   7      $       $       �    :                     \                    5�_�                    3       ����                                                                                                                                                                                                                                                                                                                                                             a���     �   2   4   ;      K                my_printf("(info) \"%s\" passed.\n", testcase.name.data());5��    2                     �                     5�_�      	              3       ����                                                                                                                                                                                                                                                                                                                                                             a���     �   2   4   ;      J                y_printf("(info) \"%s\" passed.\n", testcase.name.data());5��    2                     �                     5�_�      
           	   3       ����                                                                                                                                                                                                                                                                                                                                                             a���     �   2   4   ;      I                _printf("(info) \"%s\" passed.\n", testcase.name.data());5��    2                     �                     5�_�   	              
   3       ����                                                                                                                                                                                                                                                                                                                                                             a���     �   2   4   ;      H                printf("(info) \"%s\" passed.\n", testcase.name.data());5��    2                     �                     5�_�   
                 3       ����                                                                                                                                                                                                                                                                                                                                                             a���     �   2   4   ;      I                fprintf("(info) \"%s\" passed.\n", testcase.name.data());5��    2                     �                     �    2                    �                    �    2                    �                    �    2                    �                    5�_�                     3       ����                                                                                                                                                                                                                                                                                                                                                             a���    �   :   <          };�   9   ;          $    std::vector<Testcase> testcases;�   8   :          private:�   7   9           �   6   8              }�   5   7                  return true;�   4   6           �   3   5          	        }�   2   4          Q                fprintf(stdout, "(info) \"%s\" passed.\n", testcase.name.data());�   1   3                      } else�   0   2                          return false;�   /   1                                   status);�   .   0                                  pid,�   -   /          -                        testcase.name.data(),�   ,   .          G                        "(error) \"%s\" [%d] exited with status %d.\n",�   +   -                          fprintf(stderr,�   *   ,                      if (status != 0) {�   )   +          )            int status = WEXITSTATUS(ws);�   (   *                  } else {�   '   )                      return false;�   &   (          c            fprintf(stderr, "(error) \"%s\" [%d] exited abnormally.\n", testcase.name.data(), pid);�   %   '                  if (!WIFEXITED(ws)) {�   $   &           �   #   %                  waitpid(pid, &ws, 0);�   "   $                  int ws;�   !   #           �       "          "            exit(testcase.func());�      !                   if ((pid = fork()) == 0)�                         int pid;�                /    static bool run(const Testcase &testcase) {�                 �                    }�                	        }�                                exit(0);�                0            if (!run(testcase) && stop_on_error)�                0        for (const auto &testcase : testcases) {�                )    void run(bool stop_on_error = true) {�                 �                N    Runner(const std::vector<Testcase> &_testcases) : testcases(_testcases) {}�                public:�                class Runner {�                 �                };�                    TestFunc func;�                    std::string name;�                struct Testcase {�                 �                &using TestFunc = std::function<int()>;�   
              �   	             #include <unistd.h>�      
          #include <sys/wait.h>�      	           �                #include <vector>�                #include <string>�                #include <functional>�                 �                #include <cstdio>�                 �                 #pragma once�   2   4   ;      P                fprintf(stdout,"(info) \"%s\" passed.\n", testcase.name.data());5��    2                     �                     �                                                �                                                  �                                              �                                                   �                         !                     �                         7                     �                         I                     �                           [                       �                         \                     �    	                     r                     �    
                       �                       �               &       &   �       &       &       �                           �                       �                         �                     �                         �                     �                         �                     �                         �                     �                           �                       �                         �                     �                         �                     �               N       N         N       N       �                           T                      �               )       )   U      )       )       �               0       0         0       0       �               0       0   �      0       0       �                         �                    �               	       	   �      	       	       �                                             �                           
                      �               /       /         /       /       �                         ;                    �                           L                      �                "       "   m      "       "       �    !                       �                      �    "                     �                    �    #                     �                    �    $                       �                      �    %                     �                    �    &           c       c   �      c       c       �    '                     B                    �    (                     \                    �    )           )       )   m      )       )       �    *                     �                    �    +                     �                    �    ,           G       G   �      G       G       �    -           -       -         -       -       �    .                     L                    �    /                       i                      �    0                     �                    �    1                     �                    �    2           Q       Q   �      Q       Q       �    3           	       	         	       	       �    4                                             �    5                                         �    6                     -                    �    7                       3                      �    8                     4                    �    9           $       $   =      $       $       �    :                     b                    5��