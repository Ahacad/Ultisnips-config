Vim�UnDo� ��gs�Qͳv�[-�i.�aRc�wV	6�1�   f   void add(int x, int y, int w) {   ;         #       #   #   #    `���    _�                             ����                                                                                                                                                                                                                                                                                                                                                             `��T     �                   5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��U     �       C          cofot5�_�                    <        ����                                                                                                                                                                                                                                                                                                                                                             `��_     �   ;   <              int t = read<int>();5�_�                    <   
    ����                                                                                                                                                                                                                                                                                                                                                             `��d     �   ;   =   A          while(t--) {5�_�                    =       ����                                                                                                                                                                                                                                                                                                                                                             `��f     �   <   =                  solve();5�_�                    <       ����                                                                                                                                                                                                                                                                                                                                                             `��g     �   <   >   A              �   <   >   @    5�_�                    ;        ����                                                                                                                                                                                                                                                                                                                                                             `��j     �   :   <   A       5�_�      	              =       ����                                                                                                                                                                                                                                                                                                                                                             `��m     �   <   >   A              5�_�      
           	   =       ����                                                                                                                                                                                                                                                                                                                                                             `��o     �   <   >   A              n = read<int>()5�_�   	              
   =       ����                                                                                                                                                                                                                                                                                                                                                             `��o     �   <   >   B              n = read<int>()   	        ]�   <   >   C              n = read<int>()[    �   =   ?   C                  �   =   ?   B    �   <   ?   A              n = read<int>()[]5�_�   
                 =       ����                                                                                                                                                                                                                                                                                                                                                             `��p     �   <   ?   A              n = read<int>();5�_�                    >       ����                                                                                                                                                                                                                                                                                                                                                             `��r     �   =   ?   B              if (n == 0)5�_�                    >       ����                                                                                                                                                                                                                                                                                                                                                             `��r     �   =   ?   C              if (n == 0)    	        }�   =   ?   D              if (n == 0) {    �   >   @   D                  �   >   @   C    �   =   @   B              if (n == 0) {}5�_�                    >       ����                                                                                                                                                                                                                                                                                                                                                             `��u     �   =   @   B              if (n == 0) break;5�_�                    ?       ����                                                                                                                                                                                                                                                                                                                                                             `��{     �   >   @   C              REP(i, n)5�_�                    ?       ����                                                                                                                                                                                                                                                                                                                                                             `��{     �   >   @   C              REP(i, n) :5�_�                    ?       ����                                                                                                                                                                                                                                                                                                                                                             `��|     �   ?   A   D    �   >   A   C              REP(i, n) {}5�_�                    @        ����                                                                                                                                                                                                                                                                                                                                                             `��}     �   ?   A   E       5�_�                    ;   	    ����                                                                                                                                                                                                                                                                                                                                                             `��~     �   ;   =   F          �   ;   =   E    5�_�                    <       ����                                                                                                                                                                                                                                                                                                                                                             `�Ӂ     �   ;   =   F          5�_�                    A       ����                                                                                                                                                                                                                                                                                                                                                             `�Ӆ     �   @   B   F                  5�_�                    A       ����                                                                                                                                                                                                                                                                                                                                                             `�ӈ     �   @   B   F                  x = read<int>()5�_�                    A   ,    ����                                                                                                                                                                                                                                                                                                                                                             `�ӌ     �   @   B   F      ,            x = read<int>(), y = read<int>()5�_�                    3        ����                                                                                                                                                                                                                                                                                                                                                             `�ӏ     �   3   5   F    5�_�                    4        ����                                                                                                                                                                                                                                                                                                                                                             `�Ӑ     �   3   5   G       5�_�                    4       ����                                                                                                                                                                                                                                                                                                                                                             `�ӑ     �   3   U   G      dijkstra5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `�ӗ     �         g    �         g    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�ӗ     �         h    �         h    5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                             `�ә     �         i      #include <cstdio>5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�ӛ     �         i      #include <queuu>5�_�                        
    ����                                                                                                                                                                                                                                                                                                                                                             `�ӝ    �   d            �   c   e          -            x = read<int>(), y = read<int>();�   b   d                  REP(i, n) {�   a   c                  if (n == 0) break;�   `   b                  n = read<int>();�   _   a              while(true) {�   ^   `              int x, y;�   ]   _          
    int n;�   \   ^          #endif�   [   ]          *    // freopen("output.txt", "w", stdout);�   Z   \          %    freopen("input.txt", "r", stdin);�   Y   [          #ifdef LOCAL�   X   Z          +    // cin.tie(nullptr); cout.tie(nullptr);�   W   Y          (    // std::ios::sync_with_stdio(false);�   V   X          int main() {�   U   W          }�   T   V              }�   S   U          	        }�   R   T          @                d[to] = d[u] + w, q.push(make_pair(-d[to], to));�   Q   S          !            if (d[to] > d[u] + w)�   P   R          /            int to = edge[i].to, w = edge[i].w;�   O   Q          4        for (int i = head[u]; i; i = edge[i].next) {�   N   P                  vis[u] = 1;�   M   O                  if (vis[u]) continue;�   L   N                  q.pop();�   K   M                  int u = q.top().second;�   J   L              while (!q.empty()) {�   I   K              q.push(make_pair(0, s));�   H   J          &    priority_queue<pair<int, int> > q;�   G   I              d[s] = 0;�   F   H               memset(vis, 0, sizeof(vis));�   E   G              memset(d, 0x3f, sizeof(d));�   D   F          void dij(int s) {�   C   E          bool vis[MAXN];�   B   D          int d[MAXN];�   A   C           �   @   B          }�   ?   A              head[x] = cnt;�   >   @              edge[cnt].w = w;�   =   ?              edge[cnt].next = head[x];�   <   >              edge[++cnt].to = y;�   ;   =          void add(int x, int y, int w) {�   :   <          int cnt;�   9   ;          node edge[MAXN];�   8   :          int head[MAXN];�   7   9          };�   6   8              int to, next, w;�   5   7          struct node {�   4   6           �   3   5          }�   2   4              �   1   3          void solve() {�   0   2           �   /   1          }�   .   0          *    while (top) putchar(sta[--top] + '0');�   -   /              } while (x);�   ,   .          %        sta[top++] = x % 10, x /= 10;�   +   -              do {�   *   ,              T top = 0;�   )   +              static T sta[35];�   (   *          5    if (x < 0) x = -x, putchar('-');  // 负数输出�   '   )          inline void write(T x) {�   &   (          template <class T>�   %   '          }�   $   &              return x * f;�   #   %              }�   "   $                  ch = getchar();�   !   #                  x = x * 10 + ch - '0';�       "          $    while ('0' <= ch && ch <= '9') {�      !              }�                         ch = getchar();�                        if (ch == '-') f = -1;�                "    while (ch < '0' || ch > '9') {�                    T x = 0, f = 1;�                    char ch = getchar();�                inline T read() {�                template <typename T>�                 �                0ll lcd(ll a, ll b) { return a * b / gcd(a, b); }�                }�                    return a;�                	        ;�                !    while (b ^= a ^= b ^= a %= b)�                ll gcd(ll a, ll b) {�                #define MAXN 1000005�                #define ll long long�                #define INF 0x3f3f3f3f�                *#define GETS(ch) fgets((ch), MAXN, stdin);�                '#define FW(N) freopen((N), "w", stdout)�                &#define FR(N) freopen((N), "r", stdin)�   
             :#define down(i, en, be) for (int i = (en); i >= (be); i--)�   	             0#define DWN(i, N) for (int i = (N); i >= 0; i--)�      
          9#define fore(i, be, en) for (int i = (be); i < (en); i++)�      	          /#define REP(i, N) for (int i = 0; i < (N); i++)�                 �                using namespace std;�                 �                #include <algorithm>�                #include <cstring>�                #include <queue>�                 #include <cstdio>�   d   e          	        }       }           return 0;   }�         i      #include <cstdio>5�_�      !               5       ����                                                                                                                                                                                                                                                                                                                                                             `���     �   4   6   e          int to, next, w;5�_�       "           !   5       ����                                                                                                                                                                                                                                                                                                                                                             `���     �   4   7   e          int to, nextw;5�_�   !   #           "   5       ����                                                                                                                                                                                                                                                                                                                                                             `���     �   4   6   f          int to, next5�_�   "               #   ;       ����                                                                                                                                                                                                                                                                                                                                                             `���    �   e   g          }�   d   f              return 0;�   c   e           �   b   d              }�   a   c          7        REP(i, n) { x = read<int>(), y = read<int>(); }�   `   b                  if (n == 0) break;�   _   a                  n = read<int>();�   ^   `              while (true) {�   ]   _              int x, y;�   \   ^          
    int n;�   [   ]          #endif�   Z   \          *    // freopen("output.txt", "w", stdout);�   Y   [          %    freopen("input.txt", "r", stdin);�   X   Z          #ifdef LOCAL�   W   Y          +    // cin.tie(nullptr); cout.tie(nullptr);�   V   X          (    // std::ios::sync_with_stdio(false);�   U   W          int main() {�   T   V          }�   S   U              }�   R   T          	        }�   Q   S          @                d[to] = d[u] + w, q.push(make_pair(-d[to], to));�   P   R          !            if (d[to] > d[u] + w)�   O   Q          /            int to = edge[i].to, w = edge[i].w;�   N   P          4        for (int i = head[u]; i; i = edge[i].next) {�   M   O                  vis[u] = 1;�   L   N                  if (vis[u]) continue;�   K   M                  q.pop();�   J   L                  int u = q.top().second;�   I   K              while (!q.empty()) {�   H   J              q.push(make_pair(0, s));�   G   I          &    priority_queue<pair<int, int> > q;�   F   H              d[s] = 0;�   E   G               memset(vis, 0, sizeof(vis));�   D   F              memset(d, 0x3f, sizeof(d));�   C   E          void dij(int s) {�   B   D          bool vis[MAXN];�   A   C          int d[MAXN];�   @   B           �   ?   A          }�   >   @              head[x] = cnt;�   =   ?              edge[cnt].w = w;�   <   >              edge[cnt].next = head[x];�   ;   =              edge[++cnt].to = y;�   :   <          "void add(int x, int y, double w) {�   9   ;          int cnt;�   8   :          node edge[MAXN];�   7   9          int head[MAXN];�   6   8          };�   5   7              double w;�   4   6              int to, next;�   3   5          struct node {�   2   4           �   1   3          void solve() {}�   0   2           �   /   1          }�   .   0          *    while (top) putchar(sta[--top] + '0');�   -   /              } while (x);�   ,   .          %        sta[top++] = x % 10, x /= 10;�   +   -              do {�   *   ,              T top = 0;�   )   +              static T sta[35];�   (   *          5    if (x < 0) x = -x, putchar('-');  // 负数输出�   '   )          inline void write(T x) {�   &   (          template <class T>�   %   '          }�   $   &              return x * f;�   #   %              }�   "   $                  ch = getchar();�   !   #                  x = x * 10 + ch - '0';�       "          $    while ('0' <= ch && ch <= '9') {�      !              }�                         ch = getchar();�                        if (ch == '-') f = -1;�                "    while (ch < '0' || ch > '9') {�                    T x = 0, f = 1;�                    char ch = getchar();�                inline T read() {�                template <typename T>�                 �                0ll lcd(ll a, ll b) { return a * b / gcd(a, b); }�                }�                    return a;�                	        ;�                !    while (b ^= a ^= b ^= a %= b)�                ll gcd(ll a, ll b) {�                #define MAXN 1000005�                #define ll long long�                #define INF 0x3f3f3f3f�                *#define GETS(ch) fgets((ch), MAXN, stdin);�                '#define FW(N) freopen((N), "w", stdout)�                &#define FR(N) freopen((N), "r", stdin)�   
             :#define down(i, en, be) for (int i = (en); i >= (be); i--)�   	             0#define DWN(i, N) for (int i = (N); i >= 0; i--)�      
          9#define fore(i, be, en) for (int i = (be); i < (en); i++)�      	          /#define REP(i, N) for (int i = 0; i < (N); i++)�                 �                using namespace std;�                 �                #include <queue>�                #include <cstring>�                #include <cstdio>�                 #include <algorithm>�   :   <   f      void add(int x, int y, int w) {5��