//
//  main.cpp
//  3.1
//
//  Created by Alex on 1/6/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <iostream>

 using namespace std;

 int main()
 {
     //3.1.1 program will give a redefinition error.
//     int arg1;
//     arg1 = -1;
//     int x, y, z;
//     char myDouble = '5';
//     char arg1 = 'A';   //Redefinition of 'arg1' with a different type: 'char' vs 'int'
//     cout << arg1 << "\n";

     
     // 3.1.2 No compilation error on second program. Prints A
//     int arg1;
//     arg1 = -1;
//    {
//        char arg1 = 'A';
//        cout << arg1 << "\n";
//    }
     
     //3.1.3
     // The output will be 'A'.
     //     int arg1;
     //     arg1 = -1;
     //    {
     //        char arg1 = 'A';
     //        cout << arg1 << "\n";
     //    }
     //3.1.4
     //The output will be -1 since we left the char arg1 scope.
     //     int arg1;
     //     arg1 = -1;
     //    {
     //        char arg1 = 'A';
     //
     //    }
     //    cout << arg1 << "\n";
     
     
        // 3.1.5 This program will not compile because we attempt to use the function namespace before
        // it gets define by iostream. To fix this we move the include statement to the first line.
//     1 using namespace std;
//     2
//     3 int main()
//     4 {
//         5 cout << "Hello, World!\n";
//         6 return 0;
//         7 }
//     8
//     9 #include <iostream >
     return 0;
     
 }
