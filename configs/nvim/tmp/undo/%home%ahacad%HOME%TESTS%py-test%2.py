Vim�UnDo� �Ó�H�#���L�u����-BP���o��l                    5       5   5   5    `� F    _�                             ����                                                                                                                                                                                                                                                                                                                                                             `�z     �                   5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �                  5�_�                       6    ����                                                                                                                                                                                                                                                                                                                                                             `��    �                 6from sklearn.model_selection import train_test_splitWW5�_�                       3    ����                                                                                                                                                                                                                                                                                                                                                             `��     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��    �                  5�_�                       )    ����                                                                                                                                                                                                                                                                                                                                                             `��     �               5�_�      	                      ����                                                                                                                                                                                                                                                                                                                                                             `��    �                  5�_�      
           	      .    ����                                                                                                                                                                                                                                                                                                                                                             `��     �               5�_�   	              
           ����                                                                                                                                                                                                                                                                                                                                                             `��    �                  5�_�   
                    %    ����                                                                                                                                                                                                                                                                                                                                                             `��     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �                  5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��   
 �                  5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �                print(iris)5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �               5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �                  5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `��     �               �               5�_�                    	        ����                                                                                                                                                                                                                                                                                                                                                             `��     �                 features = iris.data5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             `��     �                 labels  = iris.data5�_�                    	       ����                                                                                                                                                                                                                                                                                                                                                             `��     �   	            5�_�                    
        ����                                                                                                                                                                                                                                                                                                                                                             `��     �   
            5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��     �   
               5�_�                       L    ����                                                                                                                                                                                                                                                                                                                                                             `��     �   
              Mtrain_features, test_features, train_labels, test_labels = train_test_split()5�_�                       U    ����                                                                                                                                                                                                                                                                                                                                                             `��     �   
              Vtrain_features, test_features, train_labels, test_labels = train_test_split(features,)5�_�                       ]    ����                                                                                                                                                                                                                                                                                                                                                             `��     �   
              ^train_features, test_features, train_labels, test_labels = train_test_split(features, labels,)5�_�                       m    ����                                                                                                                                                                                                                                                                                                                                                             `��     �   
              ntrain_features, test_features, train_labels, test_labels = train_test_split(features, labels, test_size=0.33,)5�_�                       k    ����                                                                                                                                                                                                                                                                                                                                                             `��     �               5�_�                       l    ����                                                                                                                                                                                                                                                                                                                                                             `��     �   
            mtrain_features, test_features, train_labels, test_labels = train_test_split(features, labels, test_size=0.33)5�_�                        m    ����                                                                                                                                                                                                                                                                                                                                                             `��     �   
            ntrain_features, test_features, train_labels, test_labels = train_test_split(features, labels, test_size=0.33,)5�_�      !                  l    ����                                                                                                                                                                                                                                                                                                                                                             `�      �   
            mtrain_features, test_features, train_labels, test_labels = train_test_split(features, labels, test_size=0.33)5�_�       "           !      m    ����                                                                                                                                                                                                                                                                                                                                                             `�     �   
            ntrain_features, test_features, train_labels, test_labels = train_test_split(features, labels, test_size=0.33,)5�_�   !   #           "      }    ����                                                                                                                                                                                                                                                                                                                                                             `�      �             5�_�   "   $           #           ����                                                                                                                                                                                                                                                                                                                                                             `�      �                5�_�   #   %           $          ����                                                                                                                                                                                                                                                                                                                                                             `�       �               clf = DecisionTreeClassifier()5�_�   $   &           %      +    ����                                                                                                                                                                                                                                                                                                                                                             `� #     �             5�_�   %   '           &           ����                                                                                                                                                                                                                                                                                                                                                             `� $     �             5�_�   &   (           '           ����                                                                                                                                                                                                                                                                                                                                                             `� &     �                5�_�   '   )           (          ����                                                                                                                                                                                                                                                                                                                                                             `� )     �               clf = clf.fit()5�_�   (   *           )          ����                                                                                                                                                                                                                                                                                                                                                             `� *     �                clf = clf.fit(train_test_split,)5�_�   )   +           *          ����                                                                                                                                                                                                                                                                                                                                                             `� -     �               clf = clf.fit(train_features,)5�_�   *   ,           +      *    ����                                                                                                                                                                                                                                                                                                                                                             `� 0     �             5�_�   +   -           ,           ����                                                                                                                                                                                                                                                                                                                                                             `� 2     �                5�_�   ,   .           -          ����                                                                                                                                                                                                                                                                                                                                                             `� 6    �               test_predict = clf.predict()5�_�   -   /           .      '    ����                                                                                                                                                                                                                                                                                                                                                             `� 9     �             5�_�   .   0           /           ����                                                                                                                                                                                                                                                                                                                                                             `� 9     �                5�_�   /   1           0          ����                                                                                                                                                                                                                                                                                                                                                             `� <     �               score  =accuracy_score()5�_�   0   2           1      #    ����                                                                                                                                                                                                                                                                                                                                                             `� =     �               $score  =accuracy_score(test_labels,)5�_�   1   3           2      /    ����                                                                                                                                                                                                                                                                                                                                                             `� ?     �             5�_�   2   4           3           ����                                                                                                                                                                                                                                                                                                                                                             `� ?     �                5�_�   3   5           4          ����                                                                                                                                                                                                                                                                                                                                                             `� A     �               print()5�_�   4               5          ����                                                                                                                                                                                                                                                                                                                                                             `� E    �               print("accuracy: %.4lf")5��