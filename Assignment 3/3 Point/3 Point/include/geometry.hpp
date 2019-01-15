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
    int const getX() { return x; }
    int const getY() { return y; }
    void setX(const int new_x) { x = new_x; }
    
    void setY(const int new_y) { y = new_y; }
};


class PointArray {
private:
    Point *pointPtr;
    int arraySize;
    
public:
    PointArray();
    PointArray(Point points[], int size);
    PointArray(const PointArray& pv);
    ~PointArray();
    
    void resize(int n);
};
#endif /* geometry__hpp */
