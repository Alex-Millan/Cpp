//
//  main.cpp
//  5 Calculating Pi
//
//  Created by Alex on 1/7/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

//THIS PROGRAM IS ACTUALLY AWESOME!

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

double doubleRand(){
    return rand()/ (double) RAND_MAX;
}

double calculatePi(const double darts_thrown = 5000000) {
    
    //time(0) // would give me the current time
    int dart_counter = 0;
    for(int i = 0; i < darts_thrown; i++) {
        double x = doubleRand(), y = doubleRand();
        //darts landed in circle increment dart_counter
        if(sqrt(x*x + y*y) < 1){
            dart_counter++;
        }
    }
    //given formula area = total darts/ darts in circle
    //cout << dart_counter << " " << darts_thrown << endl;
    double pi = (double)4 * (double)dart_counter / (double)darts_thrown;
    
    return pi;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    srand((unsigned int)time(0)); //sets the seed to current time
    for(int i = 0; i < 5; i++) {
        cout << calculatePi(50000000) << endl;
    }
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
