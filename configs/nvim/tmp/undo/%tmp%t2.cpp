Vim�UnDo� �QC6�K����Gi3�g�/U7d����e�)��]   @                                   `��s    _�                              ����                                                                                                                                                                                                                                                                                                                                                             `��r    �   ?   A          }�   >   @              }�   =   ?          A        printf("%lld\n", (2 + n) * (n - 1) / 2 + a.solve(n) - 4);�   <   >                  a.Init();�   ;   =                  cin >> n;�   :   <                  long long n;�   9   ;              while (t--) {�   8   :              cin >> t;�   7   9          
    int t;�   6   8          signed main() {�   5   7          } a;�   4   6           �   3   5              }�   2   4          '        return n = x, init(), g[ID(n)];�   1   3                  if (x <= 1) return x;�   0   2              inline ll solve(ll x) {�   /   1           �   .   0              }�   -   /          P                    g[j] - (ll)prime[i] * (g[ID(a[j] / prime[i])] - sum[i - 1]);�   ,   .                          g[j] =�   +   -          K            for (int j = 1; j <= m && (ll)prime[i] * prime[i] <= a[j]; j++)�   *   ,          '        for (int i = 1; i <= ncnt; i++)�   )   +          	        }�   (   *                      g[m] = calc(a[m]);�   '   )          "                id2[n / a[m]] = m;�   &   (                      else�   %   '                          id1[a[m]] = m;�   $   &                      if (a[m] <= T)�   #   %                      a[++m] = n / l;�   "   $          5        for (ll l = 1; l <= n; l = n / (n / l) + 1) {�   !   #          	        }�       "                      }�      !          -                if (i % prime[j] == 0) break;�                 '                flag[i * prime[j]] = 1;�                B            for (int j = 1; j <= ncnt && i * prime[j] <= T; j++) {�                K            if (!flag[i]) prime[++ncnt] = i, sum[ncnt] = sum[ncnt - 1] + i;�                &        for (int i = 2; i <= T; i++) {�                        T = sqrt(n + 0.5);�                    inline void init() {�                    }�                        ncnt = m = T = n = 0;�                         memset(a, 0, sizeof(a));�                $        memset(sum, 0, sizeof(sum));�                         memset(g, 0, sizeof(g));�                &        memset(flag, 0, sizeof(flag));�                $        memset(id2, 0, sizeof(id2));�                $        memset(id1, 0, sizeof(id1));�                (        memset(prime, 0, sizeof(prime));�                    inline void Init() {�                #    inline ll f(ll x) { return x; }�                 �                8    inline ll calc(ll x) { return x * (x + 1) / 2 - 1; }�                 �   
             @    inline int ID(ll x) { return x <= T ? id1[x] : id2[n / x]; }�   	              �      
               ll g[N], sum[N], a[N], T, n;�      	           �                2    ll prime[N], id1[N], id2[N], flag[N], ncnt, m;�                struct Min25 {�                const int N = 1000010;�                typedef long long ll;�                using namespace std;�                #define int long long�                 #include <bits/stdc++.h>�   ?            �   >   @          		cin >> n;�   =   ?          		long long n;�   <   >          	while(t--) {�   ;   =          
	cin >> t;�   :   <          	int t;�   9   ;          signed main() {�   8   :          }a;�   7   9           �   6   8              }�   5   7          '        return n = x, init(), g[ID(n)];�   4   6                  if (x <= 1) return x;�   3   5              inline ll solve(ll x) {�   2   4           �   1   3              }�   0   2          S                g[j] = g[j] - (ll)prime[i] * (g[ID(a[j] / prime[i])] - sum[i - 1]);�   /   1          K            for (int j = 1; j <= m && (ll)prime[i] * prime[i] <= a[j]; j++)�   .   0          '        for (int i = 1; i <= ncnt; i++)�   -   /          	        }�   ,   .                      g[m] = calc(a[m]);�   +   -          A            if (a[m] <= T) id1[a[m]] = m; else id2[n / a[m]] = m;�   *   ,                      a[++m] = n / l;�   )   +          5        for (ll l = 1; l <= n; l = n / (n / l) + 1) {�   (   *          	        }�   '   )                      }�   &   (          -                if (i % prime[j] == 0) break;�   %   '          '                flag[i * prime[j]] = 1;�   $   &          B            for (int j = 1; j <= ncnt && i * prime[j] <= T; j++) {�   #   %          K            if (!flag[i]) prime[++ncnt] = i, sum[ncnt] = sum[ncnt - 1] + i;�   "   $          &        for (int i = 2; i <= T; i++) {�   !   #                  T = sqrt(n + 0.5);�       "              inline void init() {�      !              }�                         ncnt = m = T = n = 0;�                         memset(a, 0, sizeof(a));�                $        memset(sum, 0, sizeof(sum));�                         memset(g, 0, sizeof(g));�                &        memset(flag, 0, sizeof(flag));�                $        memset(id2, 0, sizeof(id2));�                $        memset(id1, 0, sizeof(id1));�                (        memset(prime, 0, sizeof(prime));�                    inline void Init() {�                    }�                        return x;�                    inline ll f(ll x) {�                 �                    }�                #        return x * (x + 1) / 2 - 1;�                    inline ll calc(ll x) {�                 �                    }�                ,        return x <= T ? id1[x] : id2[n / x];�                    inline int ID(ll x) {�   
              �   	                  ll g[N], sum[N], a[N], T, n;�      
           �      	          2    ll prime[N], id1[N], id2[N], flag[N], ncnt, m;�                 �                struct Min25 {�                const int N = 1000010;�                typedef long long ll;�                using namespace std;�                #define int long long�                 #include <bits/stdc++.h>�   ?   @          		a.Init();   :		printf("%lld\n", (2 + n) * (n - 1) / 2 +a.solve(n) - 4);   	}   }�                   �               5��                    B                      �      �    ?                      v      L               �                                                �                                              �                         /                     �                         D                     �                         Z                     �                         q                     �                       2   �               2       �               2           �       2               �                           �                       �    	                       �                       �    
                   @   �               @       �                                               �               ,       8         ,       8       �                          Q                     �                       #   R              #       �                         v                    �               #       (   �      #       (       �                      $   �             $       �                       $   �              $       �                      &                &       �                          )                     �                      $   J             $       �                          o                     �               (          �      (              �               $          �      $              �               $          �      $              �               &          �      &              �                       &   �              &       �               $       K         $       K       �                       B   [              B       �                      '   �             '       �                      -   �             -       �                          �                    �    !                  	                	       �    "           &       5         &       5       �    #           K          B      K              �    $           B          ^      B              �    %           '          y      '              �    &           -          �      -              �    '                  "   �             "       �    (           	          �      	              �    )           5       	   �      5       	       �    *                  '   �             '       �    +           A       K         A       K       �    ,                     i                    �    -           	       P   �      	       P       �    .           '          �      '              �    /           K           �      K               �    0           S          �      S              �    1                     �                    �    2                   '                 '       �    3                     :                    �    4                      @                     �    5           '          A      '              �    6                     F                    �    7                   
   V              
       �    8                     a                    �    9                     o                    �    :                     �                    �    ;           
          �      
              �    <                     �                    �    =                  A   �             A       �    >                     �                    �    ?                                           �                                                �                                              �                         /                     �                         D                     �                         Z                     �                         q                     �               2       2   �       2       2       �                           �                       �                           �                       �    	                       �                       �    
           @       @   �       @       @       �                                                 �               8       8         8       8       �                           Q                      �               #       #   R      #       #       �                         v                    �               (       (   �      (       (       �               $       $   �      $       $       �               $       $   �      $       $       �               &       &         &       &       �                           )                      �               $       $   J      $       $       �                           o                      �                         �                    �                         �                    �                         �                    �                         �                    �               &       &   �      &       &       �               K       K         K       K       �               B       B   [      B       B       �               '       '   �      '       '       �               -       -   �      -       -       �                          �                    �    !           	       	         	       	       �    "           5       5         5       5       �    #                     B                    �    $                     ^                    �    %                     y                    �    &                     �                    �    '           "       "   �      "       "       �    (                     �                    �    )           	       	   �      	       	       �    *           '       '   �      '       '       �    +           K       K         K       K       �    ,                     i                    �    -           P       P   �      P       P       �    .                     �                    �    /                       �                      �    0                     �                    �    1                     �                    �    2           '       '         '       '       �    3                     :                    �    4                       @                      �    5                     A                    �    6                     F                    �    7           
       
   V      
       
       �    8                     a                    �    9                     o                    �    :                     �                    �    ;                     �                    �    <                     �                    �    =           A       A   �      A       A       �    >                     �                    �    ?                                         5��