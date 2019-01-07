//
//  main.cpp
//  2.2
//
//  Created by Alex on 1/6/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int myNumber = 0;
    cout << "Type in a number" << endl;
    cin >> myNumber;
    for(int i = 0; i < myNumber; i++) {
        cout << "Hello, World: For loop \n";
    }
    int j = 0;
    while(j++ < myNumber) {
        cout << "Hello, World: While loop \n";
    }
    
    int k = 0 ;
    do{
        cout << "Hello, World: Do loop \n";
    }while(++k < myNumber);
    return 0;
}
