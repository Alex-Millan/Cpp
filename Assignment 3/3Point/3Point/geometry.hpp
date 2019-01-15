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
#include <iostream>

class Point {
private:
    int x, y;
public:
    Point(const int initX = 0, const int initY = 0) : x(initX), y(initY) {}
    int const getX() { return x; }
    int const getY() { return y; }
    void setX(const int new_x) { x = new_x; }
    
    void setY(const int new_y) { y = new_y; }
};


class PointArray {
private:
    Point *pointPtr;
    int arraySize;
    void resize(int n);
    
public:

    PointArray();
    PointArray(const Point points[], const int size);
    PointArray(const PointArray& pv);
    ~PointArray();
    
    void push_back(const Point &p);
    void insert(const int position, const Point &p);
    void remove(const int pos);
    const int getSize() const;
    void clear();
    Point *get(const int position);
    const Point *get(const int position) const;
    
};
#endif /* geometry__hpp */
