//
//  unitTest.cpp
//  3Point
//
//  Created by Alex on 1/15/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include "unitTest.hpp"
#include "assert.h"
#include "geometry.hpp"
#include "iostream"

using namespace std;


void UnitTest::test_point() {
    int testX = 1;
    int testY = 5;
    Point *myPoint = new Point(testX, testY);
    
    test_point_get(myPoint, testX, testY);
    test_point_set(myPoint, 3, 14);
    
}

void UnitTest::test_point_get(Point *p, int expectedX, int expectedY){
    assert(p->getX() == expectedX);
    assert(p->getY() == expectedY);
    cout << "Point get funciton pass" << endl;
}
void UnitTest::test_point_set(Point *p, int setX, int setY) {
    p->setX(setX);
    p->setY(setY);
    assert(p->getX() == setX);
    assert(p->getY() == setY);
    cout << "Point set function pass" << endl;
}

void test_pointArray();
void test_pointArray_copy();
void test_pointArray_push_back();
void test_pointArray_insert();
void test_pointArray_remove();
void test_pointArray_getSize();
void test_pointArray_clear();
void test_pointArray_getPoint();
