Vim�UnDo� �k��M�d2��L,\n#:��8Jˬw#WB�2���                    +       +   +   +    `��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                  package bplus tree5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �                  5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   �             �                 type BTree struct {}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   root *interiorNode5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   first *leafNode5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   leaf int5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             `��     �      	             interior int5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             `��     �      
   	    5�_�   	              
   	        ����                                                                                                                                                                                                                                                                                                                                                             `��     �      	           5�_�   
                 	        ����                                                                                                                                                                                                                                                                                                                                                             `��     �   	            5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                             `��     �   
            5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �   
               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   �             �   
              func newBTree() *BTree {}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   leaf := newLeafNode()5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �                   leaf := newLeafNode(nil)5�_�                       #    ����                                                                                                                                                                                                                                                                                                                                                             `���     �               #    r := newInteriorNode(nil, leaf)5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���     �                   leaf.p = r5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���     �                       �             �                   return &BTree {}5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���     �                       root: r,5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���     �                       first: leaf, 5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���     �                       leaf: 1,5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���    �                       interior: 1,5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `���     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `���     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `���     �                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `���     �                  5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���     �                 func (bt *BTree)5�_�                       $    ����                                                                                                                                                                                                                                                                                                                                                             `���     �                   �             �                 %func (bt *BTree) First() *leafNode {}5�_�                             ����                                                                                                                                                                                                                                                                                                                                                             `���     �               5�_�      !                      ����                                                                                                                                                                                                                                                                                                                                                             `���     �                  5�_�       "           !           ����                                                                                                                                                                                                                                                                                                                                                             `���     �               5�_�   !   #           "           ����                                                                                                                                                                                                                                                                                                                                                             `���     �                  5�_�   "   $           #          ����                                                                                                                                                                                                                                                                                                                                                             `���     �                 func (bt *BTree)5�_�   #   %           $      .    ����                                                                                                                                                                                                                                                                                                                                                             `���     �                 .func (bt *BTree) Insert(key int, value string)5�_�   $   &           %      /    ����                                                                                                                                                                                                                                                                                                                                                             `���    �                 /func (bt *BTree) Insert(key int, value string) 5�_�   %   '           &      0    ����                                                                                                                                                                                                                                                                                                                                                             `���     �                 0func (bt *BTree) Insert(key int, value string){}5�_�   &   (           '      /    ����                                                                                                                                                                                                                                                                                                                                                             `���    �                 0func (bt *BTree) Insert(key int, value string){}5�_�   '   )           (      /    ����                                                                                                                                                                                                                                                                                                                                                             `��     �             �                 2func (bt *BTree) Insert(key int, value string){  }5�_�   (   *           )          ����                                                                                                                                                                                                                                                                                                                                                             `��    �                package bplus tree5�_�   )   +           *           ����                                                                                                                                                                                                                                                                                                                                                             `��	    �                5�_�   *               +          ����                                                                                                                                                                                                                                                                                                                                                             `��    �                 .func (bt *BTree) Insert(key int, value string)   }�               /func (bt *BTree) Insert(key int, value string){    �                   5�_�                             ����                                                                                                                                                                                                                                                                                                                                                             `���     �                 5��