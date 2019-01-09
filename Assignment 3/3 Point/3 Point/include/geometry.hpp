//
//  geometry.h
//  3 Point
//
//  Created by Alex on 1/8/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#ifndef geometry__hpp
#define geometry__hpp

#include <stdio.h>

class Point {
private:
    int x, y;
public:
    Point(int initX = 0, int initY = 0);
    int const getX();
    int const getY();
    void setX(const int new_x);
    
    void setY(const int new_y);
};


class PointArray {
private:
    Point *pointPtr;
    int arraySize;
    
public:
    PointArray();
    PointArray(const Point points[], const int size);
    PointArray(const PointArray &pv);
};
#endif /* geometry__hpp */
