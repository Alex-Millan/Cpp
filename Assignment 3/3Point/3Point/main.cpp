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

using namespace std;

void printAttributes(Polygon *myPoly) {
    cout << "Polygon has (" << myPoly->getNumSides() << ")  sides!" << endl;
    cout << "Polygon area is  (" << myPoly->area() << ")  !" << endl;
    
    cout << "Polygon has created (" << myPoly->getNumPolygons() << ") polygon(s)!" << endl;
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    UnitTest *testFunctions = new UnitTest();
    testFunctions->test_point();
    
    cout << "Please type 4 integers representing the lower-left and upper-left point of a rectangle. Separate the integers with a space" << endl;
    int rectangleX1, rectangleY1, rectangleX2, rectangleY2;
    cin >> rectangleX1 >> rectangleY1 >> rectangleX2 >> rectangleY2;
    Rectangle myRectangle(rectangleX1, rectangleY1, rectangleX2, rectangleY2);
    
    cout << "Please type 6 integers representing the 3 points of a triangle. Separate the integers with a space" << endl;
    int triX1, triY1, triX2, triY2, triX3, triY3;
    cin >> triX1 >> triY1 >> triX2 >> triY2 >> triX3 >> triY3;
    Point trianglePoints[] = {Point(triX1, triY1), Point(triX2, triY2), Point(triX3, triY3)};
    Triangle myTri(trianglePoints[0], trianglePoints[1], trianglePoints[2]);
    
    printAttributes(&myRectangle);
    printAttributes(&myTri);
    
    return 0;
}
