Vim�UnDo� [��[�֭m��:yl�J����h���4w��I�   k                                   a+��    _�                              ����                                                                                                                                                                                                                                                                                                                                                             a+��    �   j            �   i   k                      }�   h   j                          ans[tp++]=p[i];�   g   i                              tp--;�   f   h          I                while(tp>k&&cross(ans[tp-1]-ans[tp-2],p[i]-ans[tp-2])<=0)�   e   g                      {�   d   f          %            for(int i=siz-2;i>=0;i--)�   c   e                      int k=tp;�   b   d                      }�   a   c                          ans[tp++]=p[i];�   `   b                              tp--;�   _   a          I                while(tp>1&&cross(ans[tp-1]-ans[tp-2],p[i]-ans[tp-2])<=0)�   ^   `                      {�   ]   _          "            for(int i=0;i<siz;i++)�   \   ^          *            std::sort(p+0,p+siz);int tp=0;�   [   ]          	        {�   Z   \          5        int ConvexHull(int siz,Point p[],Point ans[])�   Y   [                  �   X   Z          	        }�   W   Y          (            return Vector(-a.y/l,a.x/l);�   V   X                      double l=length(a);�   U   W          	        {�   T   V                  Vector normal(Vector a)�   S   U          	        }�   R   T          O            return Vector(a.x*cos(rad)-a.y*sin(rad),a.x*sin(rad)+a.y*cos(rad));�   Q   S          	        {�   P   R          *        Vector rotate(Vector a,double rad)�   O   Q                  �   N   P          	        }�   M   O          A            return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));�   L   N          	        {�   K   M          0        double length(Point a,Point b)//2 points�   J   L          	        }�   I   K          "            return cross(b-a,c-a);�   H   J          	        {�   G   I          .        double area_2(Point a,Point b,Point c)�   F   H          	        }�   E   G          #            return a.x*b.y-a.y*b.x;�   D   F          	        {�   C   E          '        double cross(Vector a,Vector b)�   B   D                  �   A   C          	        }�   @   B          6            return acos(dot(a,b)/length(a)/length(b));�   ?   A          	        {�   >   @          '        double angle(Vector a,Vector b)�   =   ?          	        }�   <   >          "            return sqrt(dot(a,a));�   ;   =          	        {�   :   <          '        double length(Vector a)//Vector�   9   ;          	        }�   8   :          #            return a.x*b.x+a.y*b.y;�   7   9          	        {�   6   8          %        double dot(Vector a,Vector b)�   5   7                  �   4   6          	        }�   3   5          6            return (!dcmp(a.x-b.x))&&(!dcmp(a.y-b.y));�   2   4          	        {�   1   3          6        bool operator==(const Point &a,const Point &b)�   0   2          	        }�   /   1                           return x<0?-1:1;�   .   0                      else�   -   /                          return 0;�   ,   .                      if(fabs(x)<eps)�   +   -          	        {�   *   ,                  int dcmp(double x)�   )   +                  const double eps=1e-10;�   (   *          	        }�   '   )          0            return a.x<b.x||(a.x==b.x&&a.y<b.y);�   &   (          	        {�   %   '          5        bool operator<(const Point &a,const Point &b)�   $   &                  �   #   %          	        }�   "   $          '            return Vector(a.x/p,a.y/p);�   !   #          	        {�       "          +        Vector operator/(Vector a,double p)�      !          	        }�                 *            return    Vector(a.x*p,a.y*p);�                	        {�                +        Vector operator*(Vector a,double p)�                	        }�                +            return Vector(a.x-b.x,a.y-b.y);�                	        {�                +        Vector operator-(Vector a,Vector b)�                	        }�                +            return Vector(a.x+b.x,a.y+b.y);�                	        {�                +        Vector operator+(Vector a,Vector b)�                        �                        typedef Point Vector;�                
        };�                            }�                            {�                2            Point(double x=0,double y=0):x(x),y(y)�                            double x,y;�                	        {�                        struct Point�   
                 {�   	                 namespace geometry�      
              �      	              //FZYZOJ P2092�                    �                    const int MAXN=400010;�                    const double PI=acos(-1);�                    #include<cmath>�                    #include<algorithm>�                    #include<cstring>�                     #include<cstdio>�   j   k                      if(siz>1)                   tp--;               return tp;   	        }       }       using namespace geometry;       int n;double a,b,r,d;       Point p[MAXN],ans[MAXN];              int main()       {   %        freopen("card.in","r",stdin);   '        freopen("card.out","w",stdout);   )        scanf("%d%lf%lf%lf",&n,&a,&b,&r);           d=r*2;a-=d;b-=d;           for(int i=0;i<n;i++)   	        {   7            double x,y,th;scanf("%lf%lf%lf",&x,&y,&th);   =            p[i<<2|0]=rotate(Vector(b/2,a/2),th)+Vector(x,y);   >            p[i<<2|1]=rotate(Vector(-b/2,a/2),th)+Vector(x,y);   ?            p[i<<2|2]=rotate(Vector(-b/2,-a/2),th)+Vector(x,y);   >            p[i<<2|3]=rotate(Vector(b/2,-a/2),th)+Vector(x,y);   	        }   &        int sz=ConvexHull(n<<2,p,ans);           double f_ans=d*PI;           for(int i=1;i<sz;i++)   +            f_ans+=length(ans[i],ans[i-1]);   9        printf("%.2lf\n",f_ans+length(ans[sz-1],ans[0]));           return 0;       }    �                   �               5��                    �                       7      �    j                      �
      �              �                                                �                                              �                         &                     �                         8                     �                         K                     �                         g                     �                          �                      �                         �                     �                          �                      �    	                     �                     �    
                     �                     �                         �                     �               	       5   �       	       5       �                         �                     �               2                 2              �                                               �                      M                M       �               
       M   e      
       M       �                      I   �             I       �                      I   �             I       �               +           G      +               �               	       0   H      	       0       �               +       2   y      +       2       �               	          �      	              �               +          �      +              �               	          �      	              �               +          �      +              �               	          �      	              �               +                +              �               	                	              �               *          .      *              �               	       1   0      	       1       �                +       4   b      +       4       �    !           	          �      	              �    "           '           �      '               �    #           	       @   �      	       @       �    $                  "   �             "       �    %           5          �      5              �    &           	                 	              �    '           0                0              �    (           	       "         	       "       �    )                  3   A             3       �    *                     u                    �    +           	           w      	               �    ,                  B   x             B       �    -                  H   �             H       �    .                  ,                ,       �    /                      1                     �    0           	       G   3      	       G       �    1           6          {      6              �    2           	           }      	               �    3           6       %   ~      6       %       �    4           	       2   �      	       2       �    5                  3   �             3       �    6           %                %              �    7           	                	              �    8           #          '      #              �    9           	       %   A      	       %       �    :           '          g      '              �    ;           	           i      	               �    <           "       1   j      "       1       �    =           	          �      	              �    >           '          �      '              �    ?           	       #   �      	       #       �    @           6          �      6              �    A           	       I         	       I       �    B                     R                    �    C           '          d      '              �    D           	          ~      	              �    E           #          �      #              �    F           	       (   �      	       (       �    G           .          �      .              �    H           	       I   �      	       I       �    I           "                 "              �    J           	          2      	              �    K           0          L      0              �    L           	          R      	              �    M           A          i      A              �    N           	          x      	              �    O                     z                    �    P           *          �      *              �    Q           	          �      	              �    R           O          �      O              �    S           	          �      	              �    T                      �                     �    U           	          �      	              �    V                  #   �             #       �    W           (       %   	      (       %       �    X           	       )   9	      	       )       �    Y                     c	                    �    Z           5          r	      5              �    [           	          ~	      	              �    \           *       !   �	      *       !       �    ]           "          �	      "              �    ^                  (   �	             (       �    _           I       H   �	      I       H       �    `                  I   7
             I       �    a                  J   �
             J       �    b                  I   �
             I       �    c                                         �    d           %       (         %       (       �    e                     E                    �    f           I       E   `      I       E       �    g                  ;   �             ;       �    h                     �                    �    i                     �                    �    j                      �                     5��