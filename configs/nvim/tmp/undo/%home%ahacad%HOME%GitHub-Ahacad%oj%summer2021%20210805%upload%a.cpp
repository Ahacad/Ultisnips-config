Vim�UnDo� �S���
oFk�BJUz�K9j3�����8߭A�=��   ^                                  a�    _�                              ����                                                                                                                                                                                                                                                                                                                                                             a�    �   ]   _           �   \   ^          }�   [   ]              }�   Z   \                  solve();�   Y   [              while (t--) {�   X   Z              scanf("%d", &t);�   W   Y              init();�   V   X          
    int t;�   U   W          #    // freopen("1.in", "r", stdin);�   T   V          int main() {�   S   U           �   R   T          }�   Q   S              }�   P   R          	        }�   O   Q                      }�   N   P                          }�   M   O                              return;�   L   N          .                    printf("%d\n", 2 * i + 1);�   K   M          .                } else if (twosumisprime[i]) {�   J   L                              return;�   I   K          *                    printf("%d\n", 2 * i);�   H   J          !                if (isprime[i]) {�   G   I          '            rep(i, x + 1, (int)(2e7)) {�   F   H                  } else {�   E   G                      return;�   D   F                      printf("2\n");�   C   E          >        } else if (isprime[x + x - 1] || isprime[x + x + 1]) {�   B   D                      return;�   A   C                      printf("1\n");�   @   B                  if (isprime[x]) {�   ?   A              } else if (x > 0) {�   >   @          	        }�   =   ?                      }�   <   >                          }�   ;   =                              return;�   :   <          .                    printf("%d\n", 2 * i + 1);�   9   ;          .                } else if (twosumisprime[i]) {�   8   :                              return;�   7   9          *                    printf("%d\n", 2 * i);�   6   8          !                if (isprime[i]) {�   5   7          *            rep(i, abso + 2, (int)(2e7)) {�   4   6                  } else {�   3   5                      return;�   2   4          /            printf("%d\n", 2 * (abso + 1) + 1);�   1   3          -        } else if (twosumisprime[abso + 1]) {�   0   2                      return;�   /   1          +            printf("%d\n", 2 * (abso + 1));�   .   0                   if (isprime[abso + 1]) {�   -   /                  int abso = -1 * x;�   ,   .              } else if (x < 0) {�   +   -                  printf("4\n");�   *   ,              } else if (x == -1) {�   )   +                  printf("2\n");�   (   *              } else if (x == 1) {�   '   )                  printf("%d\n", 3);�   &   (              if (x == 0) {�   %   '              scanf("%d", &x);�   $   &          
    int x;�   #   %          void solve() {�   "   $           �   !   #          }�       "              }�      !          	        }�                 (            twosumisprime[i - 1] = true;�                !        if (isprime[i + i - 1]) {�                -    for (int i = (int)2e7 + 1; i >= 2; i--) {�                 �                    }�                	        }�                            isprime[j] = false;�                -        for (int j = 2 * i; j <= N; j += i) {�                "        if (!isprime[i]) continue;�                !    rep(i, 2, (int)sqrt(N) + 1) {�                    isprime[1] = false;�                D    rep(i, 1, N - 1) twosumisprime[i] = false;  // self and self + 1�                '    rep(i, 1, N - 1) isprime[i] = true;�                void init() {�                bool twosumisprime[N];�                bool isprime[N];�                const int N = 5e7 + 10;�                 �                }�                    return true;�   
                 }�   	             %        if (x % i == 0) return false;�      
              rep(i, 2, sqrt(x) + 1) {�      	          bool checkprime(ll x) {�                 �                typedef long long ll;�                6#define rep(i, x, y) for (auto i = (x); i <= (y); i++)�                 �                using namespace std;�                 �                 #include <bits/stdc++.h>�                   �               5��                    ]                       �      �                                                �                                                  �                                              �                           /                       �               6       6   0       6       6       �                         g                     �                           }                       �                         ~                     �                         �                     �    	           %       %   �       %       %       �    
                     �                     �                         �                     �                         �                     �                           �                       �                         �                     �                                             �                                             �                         3                    �               '       '   A      '       '       �               D       D   i      D       D       �                         �                    �               !       !   �      !       !       �               "       "   �      "       "       �               -       -         -       -       �                         9                    �               	       	   Y      	       	       �                         c                    �                           i                      �               -       -   j      -       -       �               !       !   �      !       !       �               (       (   �      (       (       �               	       	   �      	       	       �                          �                    �    !                     �                    �    "                       �                      �    #                     �                    �    $           
       
         
       
       �    %                                         �    &                     %                    �    '                     7                    �    (                     R                    �    )                     k                    �    *                     �                    �    +                     �                    �    ,                     �                    �    -                     �                    �    .                       �                      �    /           +       +         +       +       �    0                     3                    �    1           -       -   G      -       -       �    2           /       /   u      /       /       �    3                     �                    �    4                     �                    �    5           *       *   �      *       *       �    6           !       !   �      !       !       �    7           *       *         *       *       �    8                     B                    �    9           .       .   ^      .       .       �    :           .       .   �      .       .       �    ;                     �                    �    <                     �                    �    =                     �                    �    >           	       	   �      	       	       �    ?                                         �    @                                         �    A                     4                    �    B                     O                    �    C           >       >   c      >       >       �    D                     �                    �    E                     �                    �    F                     �                    �    G           '       '   �      '       '       �    H           !       !   
      !       !       �    I           *       *   ,      *       *       �    J                     W                    �    K           .       .   s      .       .       �    L           .       .   �      .       .       �    M                     �                    �    N                     �                    �    O                     �                    �    P           	       	         	       	       �    Q                                         �    R                                         �    S                                             �    T                                          �    U           #       #   -      #       #       �    V           
       
   Q      
       
       �    W                     \                    �    X                     h                    �    Y                     }                    �    Z                     �                    �    [                     �                    �    \                     �                    �    ]                       �                      5��