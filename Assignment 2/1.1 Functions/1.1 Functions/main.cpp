//
//  main.cpp
//  1.1 Functions
//
//  Created by Alex on 1/7/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <iostream>

using namespace std;

void f(const int a = 5) {
    cout << a * 2 << "\n";
}
int a = 123;
// 2, 246, 6, 8, 10

int main(int argc, const char * argv[]) {
    // insert code here...
    int arrLengt[10] = {10};
    
    for(int i = 0; i < 10; i++) {
        cout << arrLengt[i] << endl;
    }
    int *xPtr = arrLengt, *yPtr = &arrLengt[10 - 1];
    
    cout << *xPtr << " " << *yPtr << endl;
    
    return 0;
}
