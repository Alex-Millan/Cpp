//
//  unitTest.hpp
//  3Point
//
//  Created by Alex on 1/15/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

/*
 Purpose of this file is to test every function of the Point and PointArray class.
 Ideal test points
    border cases
    invalid input
    generic testing
 */

#ifndef unitTest_hpp
#define unitTest_hpp

#include <stdio.h>
#include "geometry.hpp"

class UnitTest {
public:
    
    void test_point();
    void test_point_get(Point *p, int expectedX, int expectedY);
    void test_point_set(Point *p, int setX, int setY);
    
    void test_pointArray();
    void test_pointArray_init();
    void test_pointArray_copy();
    void test_pointArray_push_back();
    void test_pointArray_insert();
    void test_pointArray_remove();
    void test_pointArray_getSize();
    void test_pointArray_clear();
    void test_pointArray_getPoint();
    
    int test_polygon_counter();

};


#endif /* unitTest_hpp */
