//
//  main.cpp
//  7 Pointers and String
//
//  Created by Alex on 1/8/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <iostream>

using namespace std;

int stringLength(const char*  myString) {
    int char_counter = 0;
    while(*(myString + char_counter) != '\0') {
        char_counter++;
    }
    return char_counter;
}

//Note this function can't be 'const' since we are switching values
void swapIntegers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    //cout << "A is: " << *a << endl << "B is: " << *b << endl;
}

void swapPointers(int **ptr1, int **ptr2) {
    int *ptrTemp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = ptrTemp;
}


void f() {
    string oddOrEven = "Never odd or even";
    char *nthCharPtr = &oddOrEven[5];
    nthCharPtr = nthCharPtr - 2;
    cout << *nthCharPtr << endl;
    char ** pointerPtr = &nthCharPtr;
    cout << pointerPtr << endl;
    cout << **pointerPtr << endl;
    nthCharPtr += 1;
    cout << nthCharPtr - &oddOrEven[0] << endl;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    const char* word = "hello world";
    cout << stringLength(word) << endl;
    int a = 5, b = 4;
    cout << "Before swap " << a << " " << b << endl;
    swapIntegers(&a, &b);
    cout << "After swap " << a << " " << b << endl;
    int x = 6, y = 8;
    int *ptrA = &x, *ptrB = &y;
    cout << "Before pointer swap " << *ptrA << " " << *ptrB << endl;
    swapPointers(&ptrA, &ptrB);
    cout << "After pointer swap " << *ptrA << " " << *ptrB << endl;
    
    f();
    return 0;
}
