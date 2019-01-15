//
//  geometry.cpp
//  3 Point
//
//  Created by Alex on 1/8/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <stdio.h>
#include "geometry.hpp"


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
