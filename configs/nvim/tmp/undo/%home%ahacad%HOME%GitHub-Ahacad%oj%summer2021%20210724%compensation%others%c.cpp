Vim�UnDo� ����zv�^�����ѐ���y���>(�0n����   9                                  aBb    _�                              ����                                                                                                                                                                                                                                                                                                                                                             aBa    �   6            �   5   7           �   4   6          }�   3   5              return 0;�   2   4              cout<<ans<<endl;�   1   3              }�   0   2                  ans = ans + maxm * now;�   /   1          =        ll maxm = G1[now].size() + G2[now].size() - maxpipei;�   .   0                  ll maxpipei = cal()/2;�   -   /                          // 建图�   ,   .          E                if(mp[i][j-n]) G[i].push_back(j), G[j].push_back(i); �   +   -          !            for(auto j : G2[now])�   *   ,                  for(auto i : G1[now])�   )   +          5        for(int i = 1; i <= n + n; i++) G[i].clear();�   (   *          @        if(G1[now].size() == 0 && G2[now].size() == 0) continue;�   '   )          &    for(int now = k; now >= 1; now--){�   &   (              ll ans = 0;�   %   '              }�   $   &                  mp[x][y] = 1;�   #   %                  int x, y; cin>>x>>y;�   "   $               for(int i = 1; i <= m; i++){�   !   #          =    for(int i = 1; i <= n; i++) cin>>x, G2[x].push_back(i+n);�       "          ;    for(int i = 1; i <= n; i++) cin>>x, G1[x].push_back(i);�      !              cin>>n>>m>>k;�                 5    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);�                int main(){�                }�                    return res;�                    }�                        if(dfs(i)) res++;�                "        memset(st, 0, sizeof(st));�                $    for(int i = 1; i <= n + n; i++){�                    int res = 0;�                %    memset(match, -1, sizeof(match));�                int cal(){ �                }�                    return 0;�                    }�                	        }�                            return 1;�                            match[j] = u;�                ,        if(match[j] == -1 || dfs(match[j])){�                        st[j] = 1;�                        if(st[j]) continue;�   
                 for(auto j : G[u]){�   	             bool dfs(int u){�      
          int st[N], match[N];�      	          vector<int> G[N];�                vector<int> G1[M], G2[M];�                int mp[N][N];�                int n, m, k, x;�                .const int N = 1e4+10, M = 1e6 + 10, inf = 1e8;�                typedef long long ll;�                using namespace std;�                 #include <bits/stdc++.h>�                   �               5��                    5                       �      �                                                �                                              �                         .                     �               .       0   D       .       0       �                         u                     �                         �                     �                         �                     �                         �                     �                         �                     �    	                     �                     �    
                     �                     �                                              �                                             �               ,       .   0      ,       .       �                         _                    �                         y                    �               	       	   �      	       	       �                         �                    �                         �                    �                         �                    �                         �                    �               %       %   �      %       %       �                         �                    �               $       &   �      $       &       �               "       "         "       "       �                         <                    �                         W                    �                         ]                    �                         m                    �                         o                    �               5          |      5              �                         �                    �                ;          �      ;              �    !           =          �      =              �    "                   >   �              >       �    #                  B                B       �    $                  "   T             "       �    %                     w                    �    &                     �                    �    '           &          �      &              �    (           @          �      @              �    )           5          �      5              �    *                  (   �             (       �    +           !       A   �      !       A       �    ,           E       6   7      E       6       �    -                     n                    �    .                  "   �             "       �    /           =       G   �      =       G       �    0                     �                    �    1                      
                     �    2                  =   +             =       �    3                     i                    �    4                     �                    �    5                      �                     �    6                      �                     5��