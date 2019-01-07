//
//  main.cpp
//  3.3 Prime Numbers
//
//  Created by Alex on 1/6/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <iostream>

using namespace std;

#define TRUE 1
#define FALSE 0

int main(int argc, const char * argv[]) {
    //type N number
    //find prime numbers with N ;
    int myNumber;
    cout << "Type your number." << endl;
    cin >> myNumber;
    for(int i = 0; i < myNumber; i++) {
        int isPrime = TRUE; // true
        for(int j = (i-1); j > 1; j--){
            if( i % j == 0) {
                isPrime = FALSE; //it's divisible my a number other than 1 and itself
            }
        }
        if(isPrime == TRUE) {
            cout << i << endl;
        }
    }
    return 0;
}
