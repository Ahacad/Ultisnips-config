Vim�UnDo� ݆��&5��B��	I��?A��	���;,fDF   E       println!("Display: {}")   ?         #       #   #   #    `��S    _�                             ����                                                                                                                                                                                                                                                                                                                                                             `���    �                   �               5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���     �         7       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             `���    �         7      /5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��[     �         7    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��\     �          8    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `��^     �                 5�_�      	                      ����                                                                                                                                                                                                                                                                                                                                                             `��^     �         8       5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             `��e     �          :          �          9    �          8       impl fmt::Display for Point2D {}5�_�   	              
      )    ����                                                                                                                                                                                                                                                                                                                                                             `��s     �          :      )    fn fmt(&self, f: &mut fmt::Formatter)5�_�   
                    :    ����                                                                                                                                                                                                                                                                                                                                                             `��}     �      !   <              �      !   ;    �      !   :      ;    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {}5�_�                            ����                                                                                                                                                                                                                                                                                                                                      "          V       `���    �                impl fmt::Display for Point2D {   :    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {           write!(f, "")       }   }5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       `���     �         7    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       `���     �         8       5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       `���    �                struct Poin5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       `���     �         7    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                V       `���     �          8    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V       `���     �          9       5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  V       `���     �      !   :       �      !   9    5�_�                            ����                                                                                                                                                                                                                                                                                                                            !          !          V       `���     �       "   <          �       "   ;    �      "   :      struct Complex {}5�_�                    !       ����                                                                                                                                                                                                                                                                                                                            #          #          V       `���     �       #   <          real: f64,5�_�                    #        ����                                                                                                                                                                                                                                                                                                                            $          $          V       `���     �   #   %   =    5�_�                    $        ����                                                                                                                                                                                                                                                                                                                            %          %          V       `���     �   #   %   >       5�_�                    $       ����                                                                                                                                                                                                                                                                                                                            %          %          V       `��     �   $   &   @          �   $   &   ?    �   #   &   >       impl fmt::Display for Complex {}5�_�                    %   )    ����                                                                                                                                                                                                                                                                                                                            '          '          V       `��     �   $   &   @      )    fn fmt(&self, f: &mut fmt::Formatter)5�_�                    %   :    ����                                                                                                                                                                                                                                                                                                                            '          '          V       `��     �   %   '   B              �   %   '   A    �   $   '   @      ;    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {}5�_�                    &   &    ����                                                                                                                                                                                                                                                                                                                            )          )          V       `��&     �   %   '   B      '        write!(f, "real: {}, imag: {}")5�_�                    &   =    ����                                                                                                                                                                                                                                                                                                                            )          )          V       `��+     �   %   '   B      =        write!(f, "real: {}, imag: {}", self.real, self.imag)5�_�                    &   >    ����                                                                                                                                                                                                                                                                                                                            )          )          V       `��-    �   %   '   B      >        write!(f, "real: {}, imag: {}", self.real, self.imag);5�_�                    <       ����                                                                                                                                                                                                                                                                                                                            )          )          V       `��<     �   <   >   C          �   <   >   B    5�_�                     =       ����                                                                                                                                                                                                                                                                                                                            )          )          V       `��=     �   <   ?   C          5�_�      !               >   ,    ����                                                                                                                                                                                                                                                                                                                            )          )          V       `��I     �   =   ?   D      ,    let c1 = Complex{ real: 3.2, imag: 4.4 }5�_�       "           !   >   -    ����                                                                                                                                                                                                                                                                                                                            )          )          V       `��I     �   =   @   D      -    let c1 = Complex{ real: 3.2, imag: 4.4 };5�_�   !   #           "   ?       ����                                                                                                                                                                                                                                                                                                                            )          )          V       `��P     �   >   @   E          println!("Display: {}")5�_�   "               #   ?       ����                                                                                                                                                                                                                                                                                                                            )          )          V       `��R    �   >   @   E          println!("Display: {}", c1)5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             `���     �         7   �   use std::fmt; // Import `fmt`       N// A structure holding two numbers. `Debug` will be derived so the results can   #// // be contrasted with `Display`.   // #[derive(Debug)]   // struct MinMax(i64, i64);   //   '// // Implement `Display` for `MinMax`.   !// impl fmt::Display for MinMax {   =//     fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {   K//             // Use `self.number` to refer to each positional data point.   <//                     write!(f, "({}, {})", self.0, self.1)   //                         }   //                         }   //   N//                         // Define a structure where the fields are nameable   *//                         for comparison.   +//                         #[derive(Debug)]   +//                         struct Point2D {   &//                             x: f64,   *//                                 y: f64,   $//                                 }   //   H//                                 // Similarly, implement `Display` for   ,//                                 `Point2D`   B//                                 impl fmt::Display for Point2D {   O//                                     fn fmt(&self, f: &mut fmt::Formatter) ->   4//                                     fmt::Result {   O//                                             // Customize so only `x` and `y`   ;//                                             are denoted.   P//                                                     write!(f, "x: {}, y: {}",   F//                                                     self.x, self.y)   <//                                                         }   <//                                                         }   //   F//                                                         fn main() {   K//                                                             let minmax =   M//                                                             MinMax(0, 14);   //   T//                                                                 println!("Compare   Q//                                                                 structures:");   Y//                                                                     println!("Display:   K//                                                                     {}",   O//                                                                     minmax);   [//                                                                         println!("Debug:   Q//                                                                         {:?}",   S//                                                                         minmax);   //   R//                                                                             let   X//                                                                             big_range   P//                                                                             =   [//                                                                             MinMax(-300,   T//                                                                             300);   V//                                                                                 let   ^//                                                                                 small_range   T//                                                                                 =   ]//                                                                                 MinMax(-3,   V//                                                                                 3);   //   d//                                                                                     println!("The   Z//                                                                                     big   \//                                                                                     range   Y//                                                                                     is   \//                                                                                     {big}   Z//                                                                                     and   Z//                                                                                     the   \//                                                                                     small   Y//                                                                                     is   `//                                                                                     {small}",   i//                                                                                                  small   e//                                                                                                  =   p//                                                                                                  small_range,   t//                                                                                                               big   r//                                                                                                               =   |//                                                                                                               big_range);   //   x//                                                                                                                   let   z//                                                                                                                   point   v//                                                                                                                   =   |//                                                                                                                   Point2D   v//                                                                                                                   {   w//                                                                                                                   x:   y//                                                                                                                   3.3,   y//                                                                                                                     y:   z//                                                                                                                     7.2   {//                                                                                                                       };   //   �//                                                                                                                           println!("Compare   �//                                                                                                                           points:");   �//                                                                                                                               println!("Display:   �//                                                                                                                               {}",   �//                                                                                                                               point);   �//                                                                                                                                   println!("Debug:   �//                                                                                                                                   {:?}",   �//                                                                                                                                   point);   //   �//                                                                                                                                       //   �//                                                                                                                                       Error.   �//                                                                                                                                       Both   �//                                                                                                                                       `Debug`   �//                                                                                                                                       and   �//                                                                                                                                       `Display`   �//                                                                                                                                       were   �//                                                                                                                                       implemented,   �//                                                                                                                                       but   �//                                                                                                                                       `{:b}`   �//                                                                                                                                           //   �//                                                                                                                                           requires   �//                                                                                                                                           `fmt::Binary`   �//                                                                                                                                           to   �//                                                                                                                                           be   �//                                                                                                                                           implemented.   �//                                                                                                                                           This   �//                                                                                                                                           will   �//                                                                                                                                           not   �//                                                                                                                                           work.   �//                                                                                                                                               //   �//                                                                                                                                               println!("What   �//                                                                                                                                               does   �//                                                                                                                                               Point2D   �//                                                                                                                                               look   �//                                                                                                                                               like   �//                                                                                                                                               in   �//                                                                                                                                               binary:   �//                                                                                                                                               {:b}?",   �//                                                                                                                                               point);   �//                                                                                                                                               }   //5��