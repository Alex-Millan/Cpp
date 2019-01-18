//
//  geometry.cpp
//  3 Point
//
//  Created by Alex on 1/8/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <stdio.h>
#include "geometry.hpp"
#include "cmath"    //Allows of abs function to be called


#define RECTANGLE_POINT_SIZE 4
#define TRIANGLE_POINT_SIZE 3

using namespace std;

const void Point::printPoint() {
    std::cout << "Point ";
    std::cout << "x: " << x << "    y: " << y << std::endl;
}

PointArray::PointArray() {
    pointPtr = new Point[0];
    arraySize = 0;
}


PointArray::PointArray(const Point points[], const int size) {
    arraySize = size;
    pointPtr = new Point[arraySize];
    
    for (int i = 0; i < arraySize; i++) {
        pointPtr[i] = points[i];
    }
    
}

PointArray::PointArray(const PointArray& pv) {
    pointPtr = new Point[pv.arraySize];
    arraySize = pv.arraySize;
    
    for (int i = 0; i < arraySize; i++) {
        pointPtr[i] = pv.pointPtr[i];
    }
}

PointArray::~PointArray() {
    delete [] pointPtr;
}

void PointArray::resize(int n) {
    arraySize = n;
    Point *updatePoint = new Point[arraySize];
    
    //prevents array out of bound
    int min = (arraySize < n) ? arraySize : n;
    for (int i = 0; i < min; i++) {
        updatePoint[i] = pointPtr[i];
    }
    delete [] pointPtr;
    pointPtr = updatePoint;
}


void PointArray::push_back(const Point &p) {
    int temp = arraySize + 1;
    resize(temp);
    pointPtr[temp - 1] = p;
}

void PointArray::insert(const int position, const Point &p) {
    int temp = arraySize + 1;
    resize(temp);
    
    for (int i = (temp - 1); i > position; i--) {
        pointPtr[i] = pointPtr[i-1];    //shifts array back Assumes last array is empty
    }
    pointPtr[position] = p;
}


void PointArray::remove(const int pos) {
    if(pos < 0 || pos >= arraySize) {
        std::cout << "cannot remove position: " << pos << " \n out of array bounds" << std::endl;
        return; //exit array out of bounds
    }
    for (int i = pos; i < (arraySize - 1); i++) {
        pointPtr[i] = pointPtr[i+1];
    }
    resize(arraySize - 1);
}

const int PointArray::getSize() const {
    return arraySize;
}

void PointArray::clear() {
    resize(0);
}

Point *PointArray::get(const int position) {
    if(position >= arraySize) {
        return NULL;
    }
    return &pointPtr[position];
}

const Point *PointArray::get(const int position) const {
    if(position >= arraySize) {
        return NULL;
    }
    return &pointPtr[position];
}


//initializes
int Polygon::polyCounter = 0;

Polygon::Polygon(Point p[], const int arraySize) : shape_points(p, arraySize) {
    polyCounter++;
}

Polygon::Polygon() {
    polyCounter++;
}
Polygon::Polygon(const PointArray &pArray) : shape_points(pArray){
    polyCounter++;
}

Polygon::~Polygon() {
    polyCounter--;
}




int Polygon::getNumPolygons() {
    return polyCounter;
}

int Polygon::getNumSides() const {
    return shape_points.getSize();
}

const PointArray *Polygon::getPoints() const {
    return &shape_points;
}



/* Given code. I didn't write this; */
Point constructorPoints[4];

Point *updateConstructorPoints( const Point &p1, const Point &p2, const Point &p3, const Point &p4 = Point(0,0)) {
     constructorPoints[0] = p1;
     constructorPoints[1] = p2;
     constructorPoints[2] = p3;
     constructorPoints[3] = p4;
     return constructorPoints;
    
}
/* End of given code */

/*
    Assumes first point is lower left and second point is upper right
 */
Rectangle::Rectangle(const Point &p1, const Point &p2) : Polygon(updateConstructorPoints(p1, Point(p1.getX(), p2.getY()), p2, Point(p1.getY(), p2.getX())), RECTANGLE_POINT_SIZE) {

}

/* This assumes (x1, y1) points to the lower left point of the rectangle
    (x2, y2) represents the point to the upper right of the rectangle.
 */
Rectangle::Rectangle(const int x1, const int y1, const int x2, const int y2) : Polygon(updateConstructorPoints(Point(x1, y1), Point(x1, x2), Point(x2, y2), Point(x2, y1)), RECTANGLE_POINT_SIZE){
    
}


double Rectangle::area() const {
    double length = shape_points.get(0)->getY() - shape_points.get(1)->getY();
    double width = shape_points.get(0)->getX() - shape_points.get(2)->getX();
    return std::abs(length * width);
}


Triangle::Triangle(const Point p1, const Point p2, const Point p3): Polygon(updateConstructorPoints(p1, p2, p3), TRIANGLE_POINT_SIZE) {
    
}
//  Formula given below, a, b, c are side lengths.
//  K = sqr ( s(s − a)(s − b)(s − c) )
// s = (a + b + c ) / 2


double Triangle::area() const {
    double a = length(*shape_points.get(0), *shape_points.get(1));
    double b = length(*shape_points.get(1), *shape_points.get(2));
    double c = length(*shape_points.get(2), *shape_points.get(0));
    double s = (a + b + c) / 2.0;
    
    return sqrt(s * (s - a) * (s - b ) * (s - c));
}




const double Triangle::length(const Point &a, const Point &b) const {
    return sqrt( pow((a.getX() - b.getX()), 2) + pow((a.getY() - b.getY()), 2));
}
