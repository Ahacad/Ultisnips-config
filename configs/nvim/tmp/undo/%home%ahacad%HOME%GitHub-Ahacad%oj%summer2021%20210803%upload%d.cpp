Vim�UnDo� (ǯ:2`\]�a���2Ԓ�%*��������9   #       Me(Sum, 0);                             a��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             a�    �               �                 �                }�                #	scanf("%d",&T);while(T--) Solve();�                	freopen("1.in","r",stdin);�                int main(){�                }�                ^	for(i=1;i<=n;i++) Sum[i]+=Sum[i-1];for(i=1;i<n;i++) Sum[i]+=Sum[i-1],printf("%lld\n",Sum[i]);�   
             	}�   	             		} �      
          8			else Sum[j]++,Sum[r]--,Sum[j+i]-=r-j,Sum[j+i+1]+=r-j;�      	          :			if(r>j+i)Sum[j]++,Sum[j+i]--,Sum[j+i]-=i,Sum[j+i+1]+=i;�                m			if(j^1)cnt-=(S[j-1]!=S[j+i-1]);while(r+i<=n&&cnt<=k) r++,cnt+=(S[r]!=S[r+i]);//printf("%d %d %d\n",j,r,i);�                		for(cnt=r=0,j=1;j<=n-i;j++){�                	for(i=1;i<n;i++){�                B	re int i,j;scanf("%d%d",&n,&k);scanf("%s",S+1);Me(Q,0);Me(Sum,0);�                I void Solve(){�                9int T,n,k,len,r,cnt;char S[N+5];ll Q[N+5<<1],Sum[N+5<<1];�                 using namespace std;�                   �               5��                                           m      �                                                �               9                 9              �                         /                     �               B       "   >       B       "       �                         a                     �                         r                     �               m          �       m              �               :          �       :              �               8          �       8              �    	                     �                     �    
                     �                     �               ^       3   �       ^       3       �                      9   &             9       �                      *   `             *       �                      O   �             O       �               #          �      #              �                      M   �             M       �                          D                     �                          U              V      5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             a�     �             5��                                                5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             a�     �                 5��                                                5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             a�     �              5��                                                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             a�     �                  5��                                                  5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             a�     �                 #I5��                                              �                      	                 	       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             a�    �                 #include <bits/stdc++.H.5��                                              5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             a�    �       "           �      !          }�                     while (T--) Solve();�                    scanf("%d", &T);�                     freopen("1.in", "r", stdin);�                int main() {�                }�                K    for (i = 1; i < n; i++) Sum[i] += Sum[i - 1], printf("%lld\n", Sum[i]);�                2    for (i = 1; i <= n; i++) Sum[i] += Sum[i - 1];�                    }�                	        }�                ,                    Sum[j + i + 1] += r - j;�                8                Sum[j]++, Sum[r]--, Sum[j + i] -= r - j,�                            else�                M                Sum[j]++, Sum[j + i]--, Sum[j + i] -= i, Sum[j + i + 1] += i;�                            if (r > j + i)�                O                r++, cnt += (S[r] != S[r + i]);  // printf("%d %d %d\n",j,r,i);�                *            while (r + i <= n && cnt <= k)�                9            if (j ^ 1) cnt -= (S[j - 1] != S[j + i - 1]);�                3        for (cnt = r = 0, j = 1; j <= n - i; j++) {�                    for (i = 1; i < n; i++) {�                    Me(Sum, 0);�   
                 Me(Q, 0);�   	                 scanf("%s", S + 1);�      
              scanf("%d%d", &n, &k);�      	              re int i, j;�                I void Solve() {�                "ll Q[N + 5 << 1], Sum[N + 5 << 1];�                char S[N + 5];�                int T, n, k, len, r, cnt;�                using namespace std;�                 �                 #include <bits/stdc++.h>�              5��                                                �                                                �                                                  �                                              �                         /                     �                         I                     �               "       "   X       "       "       �                         {                     �                         �                     �                         �                     �    	                     �                     �    
                     �                     �                         �                     �                         �                     �               3       3         3       3       �               9       9   @      9       9       �               *       *   z      *       *       �               O       O   �      O       O       �                         �                    �               M       M         M       M       �                         ^                    �               8       8   o      8       8       �               ,       ,   �      ,       ,       �               	       	   �      	       	       �                         �                    �               2       2   �      2       2       �               K       K         K       K       �                         d                    �                         f                    �                           s                      �                         �                    �                         �                    �                         �                    �                            �                      5�_�      
           	           ����                                                                                                                                                                                                                                                                                                                                                             a�     �         !      I void Solve() {5��                          {                      5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             a�     �         "       �         !    5��                                                �                                                �                        !                     5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                                             a�     �         #       �         "    5��                          0                      �                          0                      �                        >                     5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             a�     �   	      #          re int i, j;5��    	                     �                      5�_�                    
       ����                                                                                                                                                                                                                                                                                                                                                             a�    �   "   $           �   !   #          }�       "              while (T--) Solve();�      !              scanf("%d", &T);�                      freopen("1.in", "r", stdin);�                int main() {�                }�                K    for (i = 1; i < n; i++) Sum[i] += Sum[i - 1], printf("%lld\n", Sum[i]);�                2    for (i = 1; i <= n; i++) Sum[i] += Sum[i - 1];�                    }�                	        }�                ,                    Sum[j + i + 1] += r - j;�                8                Sum[j]++, Sum[r]--, Sum[j + i] -= r - j,�                            else�                M                Sum[j]++, Sum[j + i]--, Sum[j + i] -= i, Sum[j + i + 1] += i;�                            if (r > j + i)�                O                r++, cnt += (S[r] != S[r + i]);  // printf("%d %d %d\n",j,r,i);�                *            while (r + i <= n && cnt <= k)�                9            if (j ^ 1) cnt -= (S[j - 1] != S[j + i - 1]);�                3        for (cnt = r = 0, j = 1; j <= n - i; j++) {�                    for (i = 1; i < n; i++) {�                    Me(Sum, 0);�                    Me(Q, 0);�                    scanf("%s", S + 1);�   
                 scanf("%d%d", &n, &k);�   	      #           int i, j;�      
           void Solve() {�      	          "ll Q[N + 5 << 1], Sum[N + 5 << 1];�                char S[N + 5];�                int T, n, k, len, r, cnt;�                using namespace std;�                const int N = 5000;�                 �                typedef long long ll;�                 #include <bits/stdc++.h>5��    	                     �                      �                                                �                                              �                           /                       �                         0                     �                         D                     �                         Y                     �                         s                     �               "       "   �       "       "       �                         �                     �    	                     �                     �    
                     �                     �                         �                     �                         �                     �                                             �                                             �               3       3   1      3       3       �               9       9   e      9       9       �               *       *   �      *       *       �               O       O   �      O       O       �                                             �               M       M   5      M       M       �                         �                    �               8       8   �      8       8       �               ,       ,   �      ,       ,       �               	       	   �      	       	       �                                             �               2       2   
      2       2       �               K       K   =      K       K       �                         �                    �                         �                    �                           �                      �                         �                    �                          �                    �    !                     �                    �    "                       �                      5�_�                      O    ����                                                                                                                                                                                                                                                                                                                                                             a��    �         #      O                r++, cnt += (S[r] != S[r + i]);  // printf("%d %d %d\n",j,r,i);5��       1                  �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             a��     �         #          Me(Q, 0);5��                        �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             a��     �         #          memset(Q, 0);5��                      
                 
       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             a��     �         #          memset(Q, 0, sizeof());5��                                              �                                            5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             a��     �         #          Me(Sum, 0);5��                                            5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             a��     �         #          memset(Sum, 0);5��                         #                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             a��    �         #          memset(Sum, 0, sizeof(S));5��                         -                     5�_�                       O    ����                                                                                                                                                                                                                                                                                                                                                             a��     �         #      ,                r++, cnt += (S[r] != S[r + i5��       ,       #           �      #               5��