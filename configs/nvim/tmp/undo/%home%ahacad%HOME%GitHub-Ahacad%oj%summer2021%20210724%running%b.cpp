Vim�UnDo� ph\�$�K~ZR�i�'+F)�Y@�Ʀ�-&bn   	                                  `��;    _�                             ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   �               5��                   (                      �      5�_�                            ����                                                                                                                                                                                                                                                                                                                                       )           V        `��     �             &   namespace GenHelper {   unsigned z1, z2, z3, z4, b, u;   unsigned get() {       b = ((z1 << 6) ^ z1) >> 13;   (    z1 = ((z1 & 4294967294U) << 18) ^ b;       b = ((z2 << 2) ^ z2) >> 27;   '    z2 = ((z2 & 4294967288U) << 2) ^ b;        b = ((z3 << 13) ^ z3) >> 21;   '    z3 = ((z3 & 4294967280U) << 7) ^ b;       b = ((z4 << 3) ^ z4) >> 12;   (    z4 = ((z4 & 4294967168U) << 13) ^ b;       return (z1 ^ z2 ^ z3 ^ z4);   }   bool read() {       while (!u) u = get();       bool res = u & 1;       u >>= 1;       return res;   }   void srand(int x) {       z1 = x;       z2 = (~x) ^ 0x233333333U;       z3 = x ^ 0x1234598766U;       z4 = (~x) + 51;   
    u = 0;   }   }  // namespace GenHelper   using namespace GenHelper;   bool edge[8005][8005];   int main() {       int n, seed;       std::cin >> n >> seed;       srand(seed);       for (int i = 0; i < n; i++)   I        for (int j = i + 1; j < n; j++) edge[j][i] = edge[i][j] = read();       return 0;   }    5��           &                      t              5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        `��     �               �               5��                                         �       5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        `��     �                #include <bits/stdc++.h>5��                                                5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        `��     �                  5��                                                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        `��    �                }�   
                 rep(i, 1, m) {}�   	             "    scanf("%d %d %d", &n, &m, &k);�      
          int main() {�      	           �                int n, m, k;�                 �                typedef long long ll;�                2#define rep(i, x, y) for (auto i = x; i <= y; i++)�                using namespace std;�                 �                 #include <bits/stdc++.h>�                  5��                                                  �                                                �                                                  �                                              �               2       2   /       2       2       �                         b                     �                           x                       �                         y                     �                           �                       �                         �                     �    	           "       "   �       "       "       �    
                     �                     �                         �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  V        `��"     �               int n, m, k;5��                         �                      �       
              
   �              
       5�_�      	              
        ����                                                                                                                                                                                                                                                                                                                                                  V        `��%     �   	            "    scanf("%d %d %d", &n, &m, &k);5��    	                      �                      �    	                      �                      �    	                    �                     5�_�      
           	   
   !    ����                                                                                                                                                                                                                                                                                                                                                  V        `��&     �   	            #    scanf("%d %d %d", &n, &m, &a,);5��    	   !                  �                      5�_�   	              
   
   $    ����                                                                                                                                                                                                                                                                                                                                                  V        `��'     �   	            &    scanf("%d %d %d", &n, &m, &a, &,);5��    	   $                  �                      �    	   $                  �                      �    	   #                  �                      �    	   "                 �                     5�_�   
                 
   &    ����                                                                                                                                                                                                                                                                                                                                                  V        `��)     �   	            (    scanf("%d %d %d", &n, &m, &a, &b, );5��    	   &                  �                      5�_�                    
   *    ����                                                                                                                                                                                                                                                                                                                                                  V        `��*     �   	            ,    scanf("%d %d %d", &n, &m, &a, &b, &c ,);5��    	   )                 �                     5�_�                    
   +    ����                                                                                                                                                                                                                                                                                                                                                  V        `��*     �   	            -    scanf("%d %d %d", &n, &m, &a, &b, &c , );5��    	   +                  �                      �    	   .                  �                      �    	   -                 �                     5�_�                    
   /    ����                                                                                                                                                                                                                                                                                                                                                  V        `��,     �   	            1    scanf("%d %d %d", &n, &m, &a, &b, &c , &d, );5��    	   /                  �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  V        `��-     �   
                 rep(i, 1, m) {}5��    
                      �                      5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                  V        `��/     �   	            3    scanf("%d %d %d", &n, &m, &a, &b, &c , &d, &p);5��    	                     �                      5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                  V        `��8     �   
                �   
          5��    
                      �                      �    
                     �                      �    
                    �                     �    
                     �                      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        `��:    �               �      	           �                int n, m, a,b,c,d,p;�                 �                typedef long long ll;�                2#define rep(i, x, y) for (auto i = x; i <= y; i++)�                using namespace std;�                 �                 #include <bits/stdc++.h>�      	          int main() {   ?    scanf("%d %d %d %d %d %d %d", &n, &m, &a, &b, &c , &d, &p);          }�   
                f5��    
                     �                      �                          �       T               �                                                �                                                  �                                              �               2       2   /       2       2       �                         b                     �                           x                       �                         y                     �                           �                       �                          �               J       5��