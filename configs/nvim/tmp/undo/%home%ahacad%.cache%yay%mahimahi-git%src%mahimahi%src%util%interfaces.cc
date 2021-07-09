Vim�UnDo� tP�G6�J�;��<������+��q�d>�aL,   �   #include <cassert>                             `�V    _�                             ����                                                                                                                                                                                                                                                                                                                                                             `�S     �         �    �         �    5��                          �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `�T     �         �      #include <cassert>5��                         �                      5�_�                        
    ����                                                                                                                                                                                                                                                                                                                                                             `�U    �   �            �   �   �          }�   �   �          -    return make_pair( one.first, two.first );�   �   �           �   �   �          E    auto two = interfaces.first_unassigned_address( one.second + 1 );�   �   �          8    auto one = interfaces.first_unassigned_address( 1 );�   �   �           �      �          $    interfaces.add_address( avoid );�   ~   �           �   }                 Interfaces interfaces;�   |   ~          {�   {   }          Ostd::pair< Address, Address > two_unassigned_addresses( const Address & avoid )�   z   |           �   y   {          }�   x   z          O    throw runtime_error( "Interfaces: could not find free interface address" );�   w   y           �   v   x              }�   u   w                  last_octet++;�   t   v          	        }�   s   u          6            return make_pair( candidate, last_octet );�   r   t          ,            assert( candidate.port() == 0 );�   q   s          -        if ( !address_in_use( candidate ) ) {�   p   r          9        Address candidate = Address::cgnat( last_octet );�   o   q          !    while ( last_octet <= 255 ) {�   n   p          {�   m   o          [pair< Address, uint16_t > Interfaces::first_unassigned_address( uint16_t last_octet ) const�   l   n           �   k   m          }�   j   l              return false;�   i   k           �   h   j              }�   g   i          	        }�   f   h                      return true;�   e   g          $        if ( addr.ip() == x.ip() ) {�   d   f          0    for ( const auto & x : addresses_in_use_ ) {�   c   e          {�   b   d          =bool Interfaces::address_in_use( const Address & addr ) const�   a   c           �   `   b          }�   _   a              }�   ^   `          -        addresses_in_use_.emplace_back( ip );�   ]   _           �   \   ^          8        ip.sin_addr.s_addr = myatoi( dest_address, 16 );�   [   ]                   ip.sin_family = AF_INET;�   Z   \                  zero( ip );�   Y   [                  sockaddr_in ip;�   X   Z           �   W   Y          =        string dest_address = line.substr( dest_start, len );�   V   X           �   U   W          	        }�   T   V          Y            throw runtime_error( "/proc/net/route destination address: unknown format" );�   S   U                  if ( len != 8 ) {�   R   T           �   Q   S          +        size_t len = dest_end - dest_start;�   P   R                  dest_start += 1;�   O   Q           �   N   P          	        }�   M   O          J            throw runtime_error( "/proc/net/route line: unknown format" );�   L   N          G        if ( dest_start == string::npos or dest_end == string::npos ) {�   K   M           �   J   L          :        auto dest_end = line.find( "\t", dest_start + 1 );�   I   K          ,        auto dest_start = line.find( "\t" );�   H   J                  /* parse the line */�   G   I          >    for ( string line; getline( all_routes_stream, line ); ) {�   F   H           �   E   G              }�   D   F          A        throw runtime_error( "/proc/net/route: unknown format" );�   C   E          -    if ( header_line.find( "Iface" ) != 0 ) {�   B   D           �   A   C          B    string header_line; getline( all_routes_stream, header_line );�   @   B              /* read header row */�   ?   A           �   >   @          (    all_routes_stream.str( all_routes );�   =   ?          $    istringstream all_routes_stream;�   <   >           �   ;   =              }�   :   <                   all_routes += new_chunk;�   9   ;          +        if ( new_chunk.empty() ) { break; }�   8   :          )        string new_chunk = routes.read();�   7   9              while ( true ) {�   6   8              string all_routes;�   5   7              /* read routes */�   4   6           �   3   5          O                                       open( "/proc/net/route", O_RDONLY ) ) );�   2   4          >    FileDescriptor routes( SystemCall( "open /proc/net/route",�   1   3           �   0   2          O       veth interface, so read this from /proc. We could also use rtnetlink. */�   /   1          I    /* Unfortunately getifaddrs does not see the destination address of a�   .   0           �   -   /          *    /* Now also add route destinations. */�   ,   .           �   +   -              }�   *   ,          	        }�   )   +                      }�   (   *          X                addresses_in_use_.emplace_back( *ifa->ifa_addr, sizeof( sockaddr_in ) );�   '   )          J            if ( ifa->ifa_addr and ifa->ifa_addr->sa_family == AF_INET ) {�   &   (          T        for ( ifaddrs *ifa = interface_addresses.get(); ifa; ifa = ifa->ifa_next ) {�   %   '           �   $   &          >            { temp, []( ifaddrs * x ) { freeifaddrs( x ); } };�   #   %          I        unique_ptr<ifaddrs, function<void(ifaddrs*)>> interface_addresses�   "   $          8        SystemCall( "getifaddrs", getifaddrs( &temp ) );�   !   #                  ifaddrs *temp;�       "          D        /* do this in the pedantically-correct exception-safe way */�      !              {�                 *    /* add the ones getifaddrs can find */�                {�                    : addresses_in_use_()�                Interfaces::Interfaces()�                 �                }�                +    addresses_in_use_.emplace_back( addr );�                {�                4void Interfaces::add_address( const Address & addr )�                 �                using namespace std;�                 �                #include "ezio.hh"�                #include "util.hh"�                #include "file_descriptor.hh"�                #include "exception.hh"�                #include "interfaces.hh"�                 �                #include <fcntl.h>�                #include <ifaddrs.h>�   
             #include <sys/types.h>�   	             #include <arpa/inet.h>�      
          #include <netinet/in.h>�      	          #include <sys/socket.h>�                 �         �      #include <cassewrt>�                #include <cassert>�                #include <memory>�                #include <sstream>�                 �                 M/* -*-mode:c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */5��       
                 �                     �       
                 �                     �       
                 �                     �       
                 �                     �       
                 �                     �       
              
   �              
       �                M       M           M       M       �                           N                       �                         O                     �                          h                      �                         i                     �                         �                     �                          �                      �                         �                     �                         �                     �    	                     �                     �    
                      �                      �                         �                     �                                             �                                               �                         +                    �                          >                     �                         ?                    �                         W                    �                         j                    �                          �                     �                          �                     �                          �                     �               4           �      4               �                      3   �             3       �               +       )   �      +       )       �                                             �                                                 �                      0                0       �                      *   D             *       �                         o                    �               *       D   u      *       D       �                         �                    �                D       4   �      D       4       �    !                  K                K       �    "           8       6   R      8       6       �    #           I           �      I               �    $           >       ;   �      >       ;       �    %                   #   �              #       �    &           T       H   �      T       H       �    '           J       >   3      J       >       �    (           X       D   r      X       D       �    )                     �                    �    *           	       	   �      	       	       �    +                     �                    �    ,                       �                      �    -           *       *   �      *       *       �    .                                             �    /           I       I         I       I       �    0           O       O   L      O       O       �    1                       �                      �    2           >          �      >              �    3           O       O   �      O       O       �    4                                             �    5                     	                    �    6                                         �    7                     6                    �    8           )       )   I      )       )       �    9           +           s      +               �    :                      �                     �    ;                  	   �             	       �    <                       �                      �    =           $          �      $              �    >           (           �      (               �    ?                   $   �              $       �    @                  &   �             &       �    A           B           %      B               �    B                      &                     �    C           -          @      -              �    D           A       ,   X      A       ,       �    E                      �                     �    F                   )   �              )       �    G           >       ?   �      >       ?       �    H                     �                    �    I           ,           �      ,               �    J           :       :   �      :       :       �    K                      2                     �    L           G       *   O      G       *       �    M           J       8   z      J       8       �    N           	           �      	               �    O                   E   �              E       �    P                  H   �             H       �    Q           +       	   C	      +       	       �    R                       M	                      �    S                     N	                    �    T           Y       +   g	      Y       +       �    U           	           �	      	               �    V                      �	                     �    W           =           �	      =               �    X                   G   �	              G       �    Y                  	   
             	       �    Z                      
                     �    [                   ;    
              ;       �    \           8           \
      8               �    ]                      ]
                     �    ^           -          u
      -              �    _                      �
                     �    `                  6   �
             6       �    a                       �
                      �    b           =       +   �
      =       +       �    c                                         �    d           0                0              �    e           $                 $               �    f                  <                <       �    g           	       -   R      	       -       �    h                  "   �             "       �    i                      �                     �    j                  	   �             	       �    k                     �                    �    l                       �                      �    m           [          �      [              �    n                     �                    �    o           !           �      !               �    p           9       =   �      9       =       �    q           -                  -               �    r           ,          A      ,              �    s           6       7   a      6       7       �    t           	       )   �      	       )       �    u                  *   �             *       �    v                  4   �             4       �    w                   	   #              	       �    x           O          -      O              �    y                     C                    �    z                       I                      �    {           O       M   J      O       M       �    |                     �                    �    }                      �                     �    ~                   L   �              L       �               $          �      $              �    �                                             �    �           8       "         8       "       �    �           E           '      E               �    �                   6   (              6       �    �           -       C   _      -       C       �    �                      �                     �    �                      �              .       5��