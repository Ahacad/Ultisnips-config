Vim�UnDo� �`����9���;���(4���q+�s�����.   j       head[next] = size;            	       	   	   	    a,�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             a,�    �                   �               5��                    q                       K      5�_�                    r        ����                                                                                                                                                                                                                                                                                                                                                             a,�     �   r               �   r            5��    r                      L                     �    r                      L                     5�_�                    s       ����                                                                                                                                                                                                                                                                                                                                                             a,�     �   r   s          dd5��    r                      L                     5�_�                    r        ����                                                                                                                                                                                                                                                                                                                                                             a,�    �   i            �   h   j          	getzx(1,0);�   g   i          	tot=n;�   f   h          	maxp[rt=0]=n;�   e   g          	for(i=1;i<=m;i++) cin>>que[i];�   d   f          	}�   c   e          		addedge(t2,t1,t3);�   b   d          		addedge(t1,t2,t3);�   a   c          		cin>>t1>>t2>>t3;�   `   b          	{�   _   a          	for(i=1;i<n;i++)�   ^   `          	cin>>n>>m;�   ]   _          	int t1,t2,t3;�   \   ^          	register int i,h;�   [   ]          	ios::sync_with_stdio(false);�   Z   \          {�   Y   [          
int main()�   X   Z           �   W   Y          }�   V   X          	}�   U   W          		solve(rt);�   T   V          		getzx(j,0);�   S   U          		maxp[rt=0]=bign;�   R   T          		tot=sz[j];�   Q   S          		if(vis[j]) continue;�   P   R          		j=e[i].to;�   O   Q          	{�   N   P          	for(i=head[t];i;i=e[i].next)�   M   O          	vis[t]=judge[0]=1; calc(t);�   L   N          		int i,j;�   K   M          {�   J   L          inline void solve(int t)�   I   K           �   H   J          }�   G   I          	for(i=p;i;i--) judge[q[i]]=0; �   F   H          	}�   E   G          6		for(k=tmp[0];k;k--) q[++p]=tmp[k],judge[tmp[k]]=1;  �   D   F          F		for(l=1;l<=m;l++) if(que[l]>=tmp[k]) ynn[l]|=judge[que[l]-tmp[k]];  �   C   E          		for(k=tmp[0];k;k--)�   B   D          		getdis(j,t);�   A   C          		dis[j]=k;�   @   B          		tmp[0]=0;�   ?   A          		if(vis[j]) continue;�   >   @          		k=e[i].dis;�   =   ?          		j=e[i].to;�   <   >          	{�   ;   =          	for(i=head[t];i;i=e[i].next)�   :   <          	int p=0,i,j,k,l;�   9   ;          {�   8   :          inline void calc(int t)�   7   9           �   6   8          }�   5   7          	}�   4   6          		getdis(j,t);�   3   5          		dis[j]=dis[t]+k;�   2   4          U		if(vis[j]||j==fat) continue;  //vis和fat限制了这个子树只能向下遍历。�   1   3          		k=e[i].dis;�   0   2          		j=e[i].to;�   /   1          	{�   .   0          	for(i=head[t];i;i=e[i].next)�   -   /          	int i,j,k;�   ,   .          	tmp[++tmp[0]]=dis[t];�   +   -          {�   *   ,          !inline void getdis(int t,int fat)�   )   +           �   (   *          }�   '   )          	if(maxp[t]<maxp[rt]) rt=t;�   &   (           	maxp[t]=max(maxp[t],tot-sz[t]);�   %   '          	}�   $   &          		maxp[t]=max(sz[j],maxp[t]);�   #   %          		sz[t]+=sz[j];�   "   $          		getzx(j,t);�   !   #          		if(j==fat||vis[j]) continue;�       "          		j=e[i].to;�      !          	{�                 	for(i=head[t];i;i=e[i].next)�                	maxp[t]=0;�                		sz[t]=1;�                		int i,j;�                {�                 inline void getzx(int t,int fat)�                 �                }�                	head[next]=size;�                	e[size].next=head[next];�                	e[size].dis=dis;�                	e[++size].to=to;�                {�                ,inline void addedge(int next,int to,int dis)�                 �                }e[maxn*2];�                	int next,to,dis;�                struct edge{�                 �                int q[bign],ynn[maxn];�   
             int tot,rt,dis[maxn];�   	             int size,maxp[maxn];�      
          int head[maxn],que[maxn];�      	          int sz[maxn],vis[maxn];�                int n,m,tmp[bign],judge[bign];�                 �                #const int maxn=10010,bign=10001000;�                 �                using namespace std;�                 �                 #include<bits/stdc++.h> �   i   j          (	solve(rt);// 每次solve从重心开始   	for(i=1;i<=m;i++)    	{   		if(ynn[i]) cout<<"AYE"<<endl;   		else cout<<"NAY"<<endl;   	}   
	return 0;   }�   q   r           5��    q                      K                     �    i                      �      �               �                                                �                                                  �                                              �                           /                       �               #       (   0       #       (       �                           Y                       �                      !   Z              !       �                         |                     �                         �                     �    	                     �                     �    
                     �                     �                         �                     �                           �                       �                         �                     �                                             �                                             �                           +                      �               ,       0   ,      ,       0       �                         ]                    �                         t                    �                         �                    �                         �                    �                         �                    �                          �                     �                       #   �              #       �                          �                     �                         �                    �               	                	              �               	       )         	       )       �                         @                    �                      )   U             )       �                                             �                          �                    �    !                  &   �             &       �    "                     �                    �    #                  (   �             (       �    $                  #                #       �    %                     &                    �    &                       (                      �    '                  $   )             $       �    (                     N                    �    )                      j                     �    *           !       )   {      !       )       �    +                     �                    �    ,                     �                    �    -                     �                    �    .                  M   �             M       �    /                     >                    �    0                     [                    �    1                     q                    �    2           U          w      U              �    3                      y                     �    4                     z                    �    5                     �                    �    6                  )   �             )       �    7                      �                     �    8                     �                    �    9                                         �    :                     "                    �    ;                     6                    �    <                     J                    �    =                      `                     �    >                  $   �             $       �    ?                  G   �             G       �    @                  D   �             D       �    A                     3                    �    B                  (   9             (       �    C                     b                    �    D           F           d      F               �    E           6          e      6              �    F                     �                    �    G                     �                    �    H                     �                    �    I                   )   �              )       �    J                     �                    �    K                     �                    �    L           	                	              �    M                     (                    �    N                     E                    �    O                     Z                    �    P                     m                    �    Q                     s                    �    R                      u                     �    S                     v                    �    T                      �                     �    U                     �                    �    V                     �                    �    W                     �                    �    X                      �                     �    Y           
                 
              �    Z                                         �    [                     <                    �    \                     Y                    �    ]                  +   _             +       �    ^                     �                    �    _                     �                    �    `                     �                    �    a                  -   �             -       �    b                     �                    �    c                     	                    �    d                  "    	             "       �    e                     C	                    �    f                  "   P	             "       �    g                     s	                    �    h                     y	                    �    i                      �	                     5�_�                   V   
    ����                                                                                                                                                                                                                                                                                                                                                             a,�     �   U   W   j          register int i, h;5��    U   
                 �                    5�_�                    V       ����                                                                                                                                                                                                                                                                                                                                                             a,�    �   i   k          }�   h   j              return 0;�   g   i              }�   f   h          "            cout << "NAY" << endl;�   e   g                  else�   d   f          "            cout << "AYE" << endl;�   c   e                  if (ynn[i])�   b   d              for (i = 1; i <= m; i++) {�   a   c          -    solve(rt);  // 每次solve从重心开始�   `   b              getzx(1, 0);�   _   a              tot = n;�   ^   `              maxp[rt = 0] = n;�   ]   _          +    for (i = 1; i <= m; i++) cin >> que[i];�   \   ^              }�   [   ]                  addedge(t2, t1, t3);�   Z   \                  addedge(t1, t2, t3);�   Y   [                  cin >> t1 >> t2 >> t3;�   X   Z              for (i = 1; i < n; i++) {�   W   Y              cin >> n >> m;�   V   X              int t1, t2, t3;�   U   W               int i, h;�   T   V               ios::sync_with_stdio(false);�   S   U          int main() {�   R   T           �   Q   S          }�   P   R              }�   O   Q                  solve(rt);�   N   P                  getzx(j, 0);�   M   O                  maxp[rt = 0] = bign;�   L   N                  tot = sz[j];�   K   M                  if (vis[j]) continue;�   J   L                  j = e[i].to;�   I   K          )    for (i = head[t]; i; i = e[i].next) {�   H   J              calc(t);�   G   I              vis[t] = judge[0] = 1;�   F   H              int i, j;�   E   G          inline void solve(int t) {�   D   F           �   C   E          }�   B   D          (    for (i = p; i; i--) judge[q[i]] = 0;�   A   C              }�   @   B          D        for (k = tmp[0]; k; k--) q[++p] = tmp[k], judge[tmp[k]] = 1;�   ?   A          G                if (que[l] >= tmp[k]) ynn[l] |= judge[que[l] - tmp[k]];�   >   @          $            for (l = 1; l <= m; l++)�   =   ?                   for (k = tmp[0]; k; k--)�   <   >                  getdis(j, t);�   ;   =                  dis[j] = k;�   :   <                  tmp[0] = 0;�   9   ;                  if (vis[j]) continue;�   8   :                  k = e[i].dis;�   7   9                  j = e[i].to;�   6   8          )    for (i = head[t]; i; i = e[i].next) {�   5   7              int p = 0, i, j, k, l;�   4   6          inline void calc(int t) {�   3   5           �   2   4          }�   1   3              }�   0   2                  getdis(j, t);�   /   1                  dis[j] = dis[t] + k;�   .   0          M            continue;  // vis和fat限制了这个子树只能向下遍历。�   -   /                  if (vis[j] || j == fat)�   ,   .                  k = e[i].dis;�   +   -                  j = e[i].to;�   *   ,          )    for (i = head[t]; i; i = e[i].next) {�   )   +              int i, j, k;�   (   *              tmp[++tmp[0]] = dis[t];�   '   )          $inline void getdis(int t, int fat) {�   &   (           �   %   '          }�   $   &          #    if (maxp[t] < maxp[rt]) rt = t;�   #   %          (    maxp[t] = max(maxp[t], tot - sz[t]);�   "   $              }�   !   #          &        maxp[t] = max(sz[j], maxp[t]);�       "                  sz[t] += sz[j];�      !                  getzx(j, t);�                 )        if (j == fat || vis[j]) continue;�                        j = e[i].to;�                )    for (i = head[t]; i; i = e[i].next) {�                    maxp[t] = 0;�                    sz[t] = 1;�                    int i, j;�                #inline void getzx(int t, int fat) {�                 �                }�                    head[next] = size;�                    e[size].next = head[next];�                    e[size].dis = dis;�                    e[++size].to = to;�                0inline void addedge(int next, int to, int dis) {�                 �                } e[maxn * 2];�                    int next, to, dis;�                struct edge {�                 �                int q[bign], ynn[maxn];�   
             int tot, rt, dis[maxn];�   	             int size, maxp[maxn];�      
          int head[maxn], que[maxn];�      	          int sz[maxn], vis[maxn];�                !int n, m, tmp[bign], judge[bign];�                 �                (const int maxn = 10010, bign = 10001000;�                 �                using namespace std;�                 �                 #include <bits/stdc++.h>�   U   W   j          registi int i, h;5��    U                     �                     �                                                �                                                  �                                              �                           /                       �               (       (   0       (       (       �                           Y                       �               !       !   Z       !       !       �                         |                     �                         �                     �    	                     �                     �    
                     �                     �                         �                     �                           �                       �                         �                     �                                             �                                             �                           +                      �               0       0   ,      0       0       �                         ]                    �                         t                    �                         �                    �                         �                    �                         �                    �                           �                      �               #       #   �      #       #       �                         �                    �                         �                    �                                             �               )       )         )       )       �                         @                    �               )       )   U      )       )       �                                             �                          �                    �    !           &       &   �      &       &       �    "                     �                    �    #           (       (   �      (       (       �    $           #       #         #       #       �    %                     &                    �    &                       (                      �    '           $       $   )      $       $       �    (                     N                    �    )                     j                    �    *           )       )   {      )       )       �    +                     �                    �    ,                     �                    �    -                     �                    �    .           M       M   �      M       M       �    /                     >                    �    0                     [                    �    1                     q                    �    2                     w                    �    3                       y                      �    4                     z                    �    5                     �                    �    6           )       )   �      )       )       �    7                     �                    �    8                     �                    �    9                                         �    :                     "                    �    ;                     6                    �    <                     J                    �    =                       `                      �    >           $       $   �      $       $       �    ?           G       G   �      G       G       �    @           D       D   �      D       D       �    A                     3                    �    B           (       (   9      (       (       �    C                     b                    �    D                       d                      �    E                     e                    �    F                     �                    �    G                     �                    �    H                     �                    �    I           )       )   �      )       )       �    J                     �                    �    K                     �                    �    L                                         �    M                     (                    �    N                     E                    �    O                     Z                    �    P                     m                    �    Q                     s                    �    R                       u                      �    S                     v                    �    T                       �                      �    U                     �                    �    V                     �                    �    W                     �                    �    X                     �                    �    Y                     �                    �    Z                                         �    [                     3                    �    \                     P                    �    ]           +       +   V      +       +       �    ^                     �                    �    _                     �                    �    `                     �                    �    a           -       -   �      -       -       �    b                     �                    �    c                     	                    �    d           "       "   	      "       "       �    e                     :	                    �    f           "       "   G	      "       "       �    g                     j	                    �    h                     p	                    �    i                     ~	                    5�_�      	              
       ����                                                                                                                                                                                                                                                                                                                                         	       v       a,�     �         j    �         j          head[next] = size;�         j          e[size].next = head[next];�         j          e[size].dis = dis;�         j          e[++size].to = to;�   	      j      int size, maxp[maxn];5��    	                     �                      �                         g                     �       	                  {                     �       	                  �                     �                         �                     �                         �                    �    	                     �                     �                         \                    �                         r                    �                         �                    �                         �                    5�_�                  	          ����                                                                                                                                                                                                                                                                                                                                         	       v       a,�    �                    head[next] = siz; 5��                         �                    5�_�                    V       ����                                                                                                                                                                                                                                                                                                                                                             a,�
     �   U   W   j          register cwint i, h;5��    U                     �                     5��