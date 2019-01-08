//
//  main.cpp
//  4.1 Sums
//
//  Created by Alex on 1/7/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <iostream>

using namespace std;


double sum(const double a, const double b) {
    return a + b;
}



//int sum(const int numbers[], const int array_length) {
//    int sum = 0;
//    for(int i = 0; i < array_length; i++) {
//        sum+= numbers[i];
//    }
//    return sum;
//}

//Recursion version

int sum(const int number[], const int array_length){
    
    if(array_length == 0) {
        return 0;
    }
    return number[0] + sum(number + 1,array_length-1);
    
}


///sum(1, 10.0 ) gives a syntax error because the compiler could promote 1 to a double or 10.0 to an int. Either way it's ambiguous
int main(int argc, const char * argv[]) {
    // insert code here...
    const int myNumbers[] = {2,4,7,7,10};
    cout << sum(myNumbers, 5) << endl;
    return 0;
}
