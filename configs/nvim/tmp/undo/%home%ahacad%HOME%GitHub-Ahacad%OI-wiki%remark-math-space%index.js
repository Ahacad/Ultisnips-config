Vim�UnDo� ���p��" �>斝��~�+y��!A�S�45e�   h                                   `�%D    _�                              ����                                                                                                                                                                                                                                                                                                                                                             `�%C    �      h   d   ]   &    if (typeof char === 'undefined') {           return false;       }       let cn =          /[\u4E00-\u9FCC\u3400-\u4DB5\uFA0E\uFA0F\uFA11\uFA13\uFA14\uFA1F\uFA21\uFA23\uFA24\uFA27-\uFA29]|[\ud840-\ud868][\udc00-\udfff]|\ud869[\udc00-\uded6\udf00-\udfff]|[\ud86a-\ud86c][\udc00-\udfff]|\ud86d[\udc00-\udf34\udf40-\udfff]|\ud86e[\udc00-\udc1d]/;       let en = /[0-9A-Za-z]/;   *    return cn.test(char) || en.test(char);   }       function toString(node) {       return (           // (node &&   ;        node.value || node.alt || node.title || node.url ||   5        ('children' in node && all(node.children)) ||   /        ('length' in node && all(node)) || '');       // )   }       function all(values) {       var result = [];       var index = -1;       %    while (++index < values.length) {   0        result[index] = toString(values[index]);       }           return result.join('');   }       function isSpace(node) {       const s = toString(node);       // console.log(s)       return s == ' ' || s == '';   7    // return node.type == 'text' && node.value == ' ';   }       function gap() {   +    function visitor(node, index, parent) {           // console.log(node);   ,        // console.log(node, index, parent);           // return           let prevNode, nextNode;           const nothing = '';       #        // get prev none space node           let cur = index - 1;   C        while (cur >= 0 && isSpace(parent.children[cur])) cur -= 1;           if (cur == -1) {               prevNode = nothing;           } else {   6            prevNode = toString(parent.children[cur]);   	        }   #        // get next none space node           cur = index + 1;   )        let len = parent.children.length;   D        while (cur < len && isSpace(parent.children[cur])) cur += 1;           if (cur == len) {               nextNode = nothing;           } else {   6            nextNode = toString(parent.children[cur]);   	        }       *        // console.log('(', prevNode, ')')   *        // console.log('(', nextNode, ')')   6        // console.log(prevNode, node, '||', nextNode)   I        // console.log(prevNode[prevNode.length - 1], "||", nextNode[0]);   1        // console.log(prevNode, "||", nextNode);   7        // const str = toString(parent.children[index])   !        // // console.log(parent)           // console.log(str)           let offset = 0;   6        if (is_cn_en(prevNode[prevNode.length - 1])) {   #            parent.children.splice(   K                index, 0, {type: 'text', value: ' '});  // before this node               offset = 1;   	        }   $        if (is_cn_en(nextNode[0])) {   ;            parent.children.splice(index + 1 + offset, 0, {                   type: 'text',                   value: ' ',   &            });  // after current node               offset += 1;   	        }   0        return [visit.SKIP, index + 1 + offset];   .        // node.value = ' ' + node.value + ' '       }       !    return function(tree, file) {   +        visit(tree, 'inlineCode', visitor);   +        visit(tree, 'inlineMath', visitor);   '        visit(tree, 'strong', visitor);   %        visit(tree, 'link', visitor);       };�   c            �   b   d          '    visit(tree, "inlineMath", visitor);�   a   c          '    visit(tree, "inlineCode", visitor);�   `   b             return function (tree, file) {�   _   a           �   ^   `            }�   ]   _          *    // node.value = ' ' + node.value + ' '�   \   ^          ,    return [visit.SKIP, index + 1 + offset];�   [   ]              }�   Z   \                offset += 1;�   Y   [                }); // after current node�   X   Z                  value: " ",�   W   Y                  type: "text",�   V   X          5      parent.children.splice(index + 1 + offset, 0, {�   U   W               if (is_cn_en(nextNode[0])) {�   T   V              }�   S   U                offset = 1;�   R   T          Y      parent.children.splice(index, 0, { type: "text", value: " " }); // before this node�   Q   S          2    if (is_cn_en(prevNode[prevNode.length - 1])) {�   P   R              let offset = 0;�   O   Q              // console.log(str)�   N   P              // // console.log(parent)�   M   O          3    // const str = toString(parent.children[index])�   L   N          -    // console.log(prevNode, "||", nextNode);�   K   M          E    // console.log(prevNode[prevNode.length - 1], "||", nextNode[0]);�   J   L          2    // console.log(prevNode, node, '||', nextNode)�   I   K          &    // console.log('(', nextNode, ')')�   H   J          &    // console.log('(', prevNode, ')')�   G   I           �   F   H              }�   E   G          0      nextNode = toString(parent.children[cur]);�   D   F              } else {�   C   E                nextNode = nothing;�   B   D              if (cur == len) {�   A   C          @    while (cur < len && isSpace(parent.children[cur])) cur += 1;�   @   B          %    let len = parent.children.length;�   ?   A              cur = index + 1;�   >   @              // get next none space node�   =   ?              }�   <   >          0      prevNode = toString(parent.children[cur]);�   ;   =              } else {�   :   <                prevNode = nothing;�   9   ;              if (cur == -1) {�   8   :          ?    while (cur >= 0 && isSpace(parent.children[cur])) cur -= 1;�   7   9              let cur = index - 1;�   6   8              // get prev none space node�   5   7           �   4   6              const nothing = "";�   3   5              let prevNode, nextNode;�   2   4              // return�   1   3          (    // console.log(node, index, parent);�   0   2              // console.log(node);�   /   1          )  function visitor(node, index, parent) {�   .   0          function gap() {�   -   /           �   ,   .          }�   +   -          5  // return node.type == 'text' && node.value == ' ';�   *   ,            return s == " " || s == "";�   )   +            // console.log(s)�   (   *            const s = toString(node);�   '   )          function isSpace(node) {�   &   (           �   %   '          }�   $   &            return result.join("");�   #   %           �   "   $            }�   !   #          ,    result[index] = toString(values[index]);�       "          #  while (++index < values.length) {�      !           �                   var index = -1;�                  var result = [];�                function all(values) {�                 �                }�                  // )�                  );�                    ""�                &    ("length" in node && all(node)) ||�                1    ("children" in node && all(node.children)) ||�                    node.url ||�                    node.title ||�                    node.alt ||�                    node.value ||�                    // (node &&�                
  return (�                function toString(node) {�                 �                }�                (  return cn.test(char) || en.test(char);�   
               let en = /[0-9A-Za-z]/;�   	              let cn = /[\u4E00-\u9FCC\u3400-\u4DB5\uFA0E\uFA0F\uFA11\uFA13\uFA14\uFA1F\uFA21\uFA23\uFA24\uFA27-\uFA29]|[\ud840-\ud868][\udc00-\udfff]|\ud869[\udc00-\uded6\udf00-\udfff]|[\ud86a-\ud86c][\udc00-\udfff]|\ud86d[\udc00-\udf34\udf40-\udfff]|\ud86e[\udc00-\udc1d]/;�      
            }�      	              return false;�                $  if (typeof char === "undefined") {�                function is_cn_en(char) {�                 �                (var visit = require("unist-util-visit");�                .var vfileLocation = require("vfile-location");�                 �                 module.exports = gap;�   c   d          #    visit(tree, "strong", visitor);   !    visit(tree, "link", visitor);     };   }�         f    5��                                                �    c                      �
      M               �                                                �                                                  �               .       .          .       .       �               (       (   F       (       (       �                           o                       �                         p                     �               $       &   �       $       &       �                         �                     �                         �                     �    	                    �                    �    
                    �                    �               (          �      (              �                      *   �             *       �                          &                     �                          (                     �               
          )      
              �                         C                    �                         P                    �                      ;   d             ;       �                      5   �             5       �                      /   �             /       �               1                1              �               &                &              �                                               �                                             �                         )                    �                         >                    �                           R                      �                      %   S             %       �                      0   y             0       �                         �                    �                           �                      �                #          �      #              �    !           ,          �      ,              �    "                      �                     �    #                      �                     �    $                     �                    �    %                                         �    &                                           �    '                  7   =             7       �    (                     u                    �    )                      w                     �    *                     x                    �    +           5       +   �      5       +       �    ,                     �                    �    -                   ,   �              ,       �    .                                          �    /           )                )              �    0                     2                    �    1           (           N      (               �    2                  #   O             #       �    3                     s                    �    4                  C   �             C       �    5                      �                     �    6                     �                    �    7                                         �    8           ?       6         ?       6       �    9                  	   U             	       �    :                  #   _             #       �    ;                     �                    �    <           0       )   �      0       )       �    =                  D   �             D       �    >                                         �    ?                     %                    �    @           %          E      %              �    A           @       6   V      @       6       �    B                  	   �             	       �    C                      �                     �    D                  *   �             *       �    E           0       *   �      0       *       �    F                  6   �             6       �    G                   I   %              I       �    H           &       1   o      &       1       �    I           &       7   �      &       7       �    J           2       !   �      2       !       �    K           E          �      E              �    L           -          	      -              �    M           3       6   /	      3       6       �    N                  #   f	             #       �    O                  K   �	             K       �    P                     �	                    �    Q           2       	   �	      2       	       �    R           Y       $   �	      Y       $       �    S                  ;   
             ;       �    T                     Y
                    �    U                      w
                     �    V           5       &   �
      5       &       �    W                     �
                    �    X                  	   �
             	       �    Y                  0   �
             0       �    Z                  .                .       �    [                     =                    �    \           ,           C      ,               �    ]           *       !   D      *       !       �    ^                  +   f             +       �    _                   +   �              +       �    `                   '   �              '       �    a           '       %   �      '       %       �    b           '                '              �    c                                           �           ]       a       �       �      n
      5��