Vim�UnDo� ��5+?��C�$�"�"br��+�r'���9ڇ[y   A   ;        rep(i, 1, n) if (i != nw && a[i][j]) a[i] ^= a[nw];   0         +       +   +   +    `�0    _�                            ����                                                                                                                                                                                                                                                                                                                                                             `�Q     �         A          int h, w;5��                        �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�z     �         A      2    rep(i, 1, h) rep(j, 1, w - 1) idh[i][j] = ++m;5��                        �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A      2    rep(i, 1, h - 1) rep(j, 1, w) ids[i][j] = ++m;5��                         �                     �                         �                     �                        �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A      2    rep(i, 1, n) rep(j, 1, w - 1) idh[i][j] = ++m;5��                        �                    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A      2    rep(i, 1, n - 1) rep(j, 1, w) ids[i][j] = ++m;5��                                            5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A          rep(i, 1, h) rep(j, 1, w) {5��                        6                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A          rep(i, 1, n) rep(j, 1, w) {5��                        C                    5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A      '        if (i < h) a[n][ids[i][j]] = 1;5��                        �                    �                        �                    5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A      '        if (j < w) a[n][idh[i][j]] = 1;5��                        �                    5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A          rep(i, 1, h - 1) {5��                                            5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             `��     �          A      +        rep(j, 1, w - 1) if (s[j] != '.') {5��                        S                    5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A          int n = 0, m = 0;5��       	                  �                     �                        �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A          int x = 0, m = 0;5��                        �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A          scanf("%d%d", &h, &w);5��                        �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A          scanf("%d%d", &n, &w);5��                        �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �         A              a[++n].reset();5��                        T                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       `��     �         A      +        if (i > 1) a[n][ids[i - 1][j]] = 1;5��                        u                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       `��     �         A      +        if (j > 1) a[n][idh[i][j - 1]] = 1;5��                        �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       `��     �         A      '        if (i < n) a[n][ids[i][j]] = 1;5��                        �                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                       `��     �         A      '        if (j < m) a[n][idh[i][j]] = 1;5��                        �                    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                       `��     �      !   A                  a[++n].reset();5��                         ~                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                       `��     �      !   A                  a[++nx].reset();5��                         }                     5�_�                   !       ����                                                                                                                                                                                                                                                                                                                                                       `��     �       "   A      E            a[n][idh[i][j]] = a[n][idh[i + 1][j]] = a[n][ids[i][j]] =5��                         �                    5�_�                    #       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   "   $   A      !            a[n][m] = s[j] - '0';5��    "                                          �    "                                          5�_�                    #       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   "   $   A      !            a[n][m] = s[j] - '0';5��    "                                        5�_�                    !   !    ����                                                                                                                                                                                                                                                                                                                                                       `��     �       "   A      E            a[x][idh[i][j]] = a[n][idh[i + 1][j]] = a[n][ids[i][j]] =5��                          �                    5�_�                    !   7    ����                                                                                                                                                                                                                                                                                                                                                       `��     �       "   A      E            a[x][idh[i][j]] = a[x][idh[i + 1][j]] = a[n][ids[i][j]] =5��        6                 �                    5�_�                    "       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   !   #   A      (                a[n][ids[i][j + 1]] = 1;5��    !                    �                    5�_�                    #       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   "   $   A      !            a[x][m] = s[j] - '0';5��    "                    	                    5�_�                     (       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   '   )   A          rep(j, 1, m - 1) {5��    '                    I                    5�_�      !               +       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   *   ,   A                  x = i;5��    *                    �                    5�_�       "           !   )       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   (   *   A              int x = 0;5��    (                     _                     �    (                    _                    5�_�   !   #           "   )       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   (   *   A              int xp = 0;5��    (                    ^                    5�_�   "   $           #   /       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   .   0   A      '        if (x != nw) swap(a[nw], a[x]);5��    .                     �                     5�_�   #   %           $   /       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   .   0   A      &        if (x!= nw) swap(a[nw], a[x]);5��    .                    �                    5�_�   $   &           %   .       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   -   /   A              if (!x) continue;5��    -                    �                    5�_�   %   '           &   /   $    ����                                                                                                                                                                                                                                                                                                                                                       `��     �   .   0   A      '        if (tp!= nw) swap(a[nw], a[x]);5��    .   #                 �                    5�_�   &   (           '   8       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   7   9   A      )    rep(i, nw, m - 1) ans = ans * 2 % mo;5��    7                     �                     �    7                     �                     5�_�   '   )           (   8       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   7   9   A      )    rep(i, nw, m - 1) ans = ans * 2 % mo;5��    7                    �                    5�_�   (   *           )   8       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   7   9   A      )    rep(i, nw,ym - 1) ans = ans * 2 % mo;5��    7                     �                     5�_�   )   +           *   3       ����                                                                                                                                                                                                                                                                                                                                                       `�    �   @   B          }�   ?   A              rep(i, 1, t) sol();�   >   @              scanf("%d", &t);�   =   ?          %    // freopen("ans.txt","w",stdout);�   <   >          #    // freopen("in.txt","r",stdin);�   ;   =          
    int t;�   :   <          int main() {�   9   ;          }�   8   :              printf("%d\n", ans);�   7   9          (    rep(i, nw,y - 1) ans = ans * 2 % mo;�   6   8              int ans = 1;�   5   7              }�   4   6                  return;�   3   5                  printf("0\n");�   2   4          #    rep(i, nw, y) if (a[i].any()) {�   1   3              }�   0   2                  ++nw;�   /   1          ;        rep(i, 1, n) if (i != nw && a[i][j]) a[i] ^= a[nw];�   .   0          (        if (tp!= nw) swap(a[nw], a[tp]);�   -   /                  if (!tp) continue;�   ,   .          	        }�   +   -                      break;�   *   ,                      tp = i;�   )   +          $        rep(i, nw, n) if (a[i][j]) {�   (   *                  int tp = 0;�   '   )              rep(j, 1, y - 1) {�   &   (              int nw = 1;�   %   '           �   $   &              }�   #   %          	        }�   "   $          !            a[x][y] = s[j] - '0';�   !   #          (                a[x][ids[i][j + 1]] = 1;�       "          E            a[x][idh[i][j]] = a[x][idh[i + 1][j]] = a[x][ids[i][j]] =�      !                      a[++x].reset();�                 +        rep(j, 1, m - 1) if (s[j] != '.') {�                        scanf("%s", s + 1);�                    rep(i, 1, n - 1) {�                    }�                '        if (j < m) a[x][idh[i][j]] = 1;�                '        if (i < n) a[x][ids[i][j]] = 1;�                +        if (j > 1) a[x][idh[i][j - 1]] = 1;�                +        if (i > 1) a[x][ids[i - 1][j]] = 1;�                        a[++x].reset();�                    rep(i, 1, n) rep(j, 1, m) {�                    ++m;�                2    rep(i, 1, n - 1) rep(j, 1, m) ids[i][j] = ++m;�                2    rep(i, 1, n) rep(j, 1, m - 1) idh[i][j] = ++m;�                    int x = 0, y = 0;�                    scanf("%d%d", &n, &m);�                    int n, m;�                void sol() {�                bitset<1000> a[1000];�                int idh[N][N], ids[N][N];�                
char s[N];�   
             const int mo = 998244353;�   	             const int N = 19;�      
          const int inf = 1e9;�      	          typedef pair<int, int> pii;�                typedef long long ll;�                using namespace std;�                #define sc second�                #define fr first�                6#define dep(i, x, y) for (auto i = (x); i >= (y); --i)�                6#define rep(i, x, y) for (auto i = (x); i <= (y); ++i)�                 #include <bits/stdc++.h>�   2   4   A      #    rep(i, nw, n) if (a[i].any()) {5��    2                    _                    �                                                �               6       6          6       6       �               6       6   P       6       6       �                         �                     �                         �                     �                         �                     �                         �                     �                         �                     �                         �                     �    	                                         �    
                                         �               
       
   2      
       
       �                         =                    �                         W                    �                         m                    �                         z                    �                         �                    �                         �                    �               2       2   �      2       2       �               2       2   �      2       2       �                                             �                         (                    �                         H                    �               +       +   `      +       +       �               +       +   �      +       +       �               '       '   �      '       '       �               '       '   �      '       '       �                                             �                                             �                         %                    �               +       +   A      +       +       �                         m                    �                E       E   �      E       E       �    !           (       (   �      (       (       �    "           !       !   �      !       !       �    #           	       	         	       	       �    $                     $                    �    %                       *                      �    &                     +                    �    '                     ;                    �    (                     R                    �    )           $       $   f      $       $       �    *                     �                    �    +                     �                    �    ,           	       	   �      	       	       �    -                     �                    �    .           (       )   �      (       )       �    /           ;       ;         ;       ;       �    0                     =                    �    1                     K                    �    2           #       #   Q      #       #       �    3                     u                    �    4                     �                    �    5                     �                    �    6                     �                    �    7           (       )   �      (       )       �    8                     �                    �    9                     �                    �    :                     �                    �    ;           
       
         
       
       �    <           #       #         #       #       �    =           %       %   4      %       %       �    >                     Z                    �    ?                     o                    �    @                     �                    5�_�   *               +   0       ����                                                                                                                                                                                                                                                                                                                                                       `�/    �   @   B          }�   ?   A              rep(i, 1, t) sol();�   >   @              scanf("%d", &t);�   =   ?          %    // freopen("ans.txt","w",stdout);�   <   >          #    // freopen("in.txt","r",stdin);�   ;   =          
    int t;�   :   <          int main() {�   9   ;          }�   8   :              printf("%d\n", ans);�   7   9          )    rep(i, nw, y - 1) ans = ans * 2 % mo;�   6   8              int ans = 1;�   5   7              }�   4   6                  return;�   3   5                  printf("0\n");�   2   4          #    rep(i, nw, y) if (a[i].any()) {�   1   3              }�   0   2                  ++nw;�   /   1          ;        rep(i, 1, y) if (i != nw && a[i][j]) a[i] ^= a[nw];�   .   0          )        if (tp != nw) swap(a[nw], a[tp]);�   -   /                  if (!tp) continue;�   ,   .          	        }�   +   -                      break;�   *   ,                      tp = i;�   )   +          $        rep(i, nw, n) if (a[i][j]) {�   (   *                  int tp = 0;�   '   )              rep(j, 1, y - 1) {�   &   (              int nw = 1;�   %   '           �   $   &              }�   #   %          	        }�   "   $          !            a[x][y] = s[j] - '0';�   !   #          (                a[x][ids[i][j + 1]] = 1;�       "          E            a[x][idh[i][j]] = a[x][idh[i + 1][j]] = a[x][ids[i][j]] =�      !                      a[++x].reset();�                 +        rep(j, 1, m - 1) if (s[j] != '.') {�                        scanf("%s", s + 1);�                    rep(i, 1, n - 1) {�                    }�                '        if (j < m) a[x][idh[i][j]] = 1;�                '        if (i < n) a[x][ids[i][j]] = 1;�                +        if (j > 1) a[x][idh[i][j - 1]] = 1;�                +        if (i > 1) a[x][ids[i - 1][j]] = 1;�                        a[++x].reset();�                    rep(i, 1, n) rep(j, 1, m) {�                    ++m;�                2    rep(i, 1, n - 1) rep(j, 1, m) ids[i][j] = ++m;�                2    rep(i, 1, n) rep(j, 1, m - 1) idh[i][j] = ++m;�                    int x = 0, y = 0;�                    scanf("%d%d", &n, &m);�                    int n, m;�                void sol() {�                bitset<1000> a[1000];�                int idh[N][N], ids[N][N];�                
char s[N];�   
             const int mo = 998244353;�   	             const int N = 19;�      
          const int inf = 1e9;�      	          typedef pair<int, int> pii;�                typedef long long ll;�                using namespace std;�                #define sc second�                #define fr first�                6#define dep(i, x, y) for (auto i = (x); i >= (y); --i)�                6#define rep(i, x, y) for (auto i = (x); i <= (y); ++i)�                 #include <bits/stdc++.h>�   /   1   A      ;        rep(i, 1, n) if (i != nw && a[i][j]) a[i] ^= a[nw];5��    /                                        �                                                �               6       6          6       6       �               6       6   P       6       6       �                         �                     �                         �                     �                         �                     �                         �                     �                         �                     �                         �                     �    	                                         �    
                                         �               
       
   2      
       
       �                         =                    �                         W                    �                         m                    �                         z                    �                         �                    �                         �                    �               2       2   �      2       2       �               2       2   �      2       2       �                                             �                         (                    �                         H                    �               +       +   `      +       +       �               +       +   �      +       +       �               '       '   �      '       '       �               '       '   �      '       '       �                                             �                                             �                         %                    �               +       +   A      +       +       �                         m                    �                E       E   �      E       E       �    !           (       (   �      (       (       �    "           !       !   �      !       !       �    #           	       	         	       	       �    $                     $                    �    %                       *                      �    &                     +                    �    '                     ;                    �    (                     R                    �    )           $       $   f      $       $       �    *                     �                    �    +                     �                    �    ,           	       	   �      	       	       �    -                     �                    �    .           )       )   �      )       )       �    /           ;       ;         ;       ;       �    0                     =                    �    1                     K                    �    2           #       #   Q      #       #       �    3                     u                    �    4                     �                    �    5                     �                    �    6                     �                    �    7           )       )   �      )       )       �    8                     �                    �    9                     �                    �    :                     �                    �    ;           
       
         
       
       �    <           #       #         #       #       �    =           %       %   4      %       %       �    >                     Z                    �    ?                     o                    �    @                     �                    5�_�                    !       ����                                                                                                                                                                                                                                                                                                                                                       `��     �   !   "   A                      �   !   #   B                      5��    !                      �                     �    !                     �                    �    !                     �                     5��