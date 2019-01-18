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
    int getX() const { return x; }
    int const getY() const { return y; }
    void setX(const int new_x) { x = new_x; }
    void setY(const int new_y) { y = new_y; }
    const void printPoint();
    
};


class PointArray {
private:
    Point *pointPtr;
    int arraySize;
    void resize(int n);
    
public:

    PointArray();
    PointArray(const Point points[], const int size);
    PointArray(const PointArray &pv);
    ~PointArray();
    
    void push_back(const Point &p);
    void insert(const int position, const Point &p);
    void remove(const int pos);
    const int getSize() const;
    void clear();
    Point *get(const int position);
    const Point *get(const int position) const;
    
};

class Polygon {
protected:
    PointArray shape_points;
    static int polyCounter;
public:
    Polygon(Point p[], const int arraySize);
    Polygon(const PointArray &pArray);
    Polygon();
    ~Polygon();
    
    virtual double area() const = 0;
    
    static int getNumPolygons();
    int getNumSides() const;
    const PointArray *getPoints() const;
    
};


class Rectangle : public Polygon {
public:
    Rectangle(const Point &p1, const Point &p2);
    Rectangle(const int x1, const int y1, const int x2, const int y2);
    
    virtual double area() const;
    
};

class Triangle: public Polygon {
public:
    Triangle(const Point p1, const Point p2, const Point p3);
    
    const double length (const Point &a, const Point &b) const;
    virtual double area() const;
    
};
#endif /* geometry__hpp */
