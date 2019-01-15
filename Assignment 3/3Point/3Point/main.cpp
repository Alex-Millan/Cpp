//
//  main.cpp
//  3Point
//
//  Created by Alex on 1/14/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <iostream>
#include "geometry.hpp"
#include "unitTest.hpp"

#define ARRAY_SIZE 50



int main(int argc, const char * argv[]) {
    // insert code here...
    UnitTest *testFunctions = new UnitTest();
    testFunctions->test_point();
    
    return 0;
}
