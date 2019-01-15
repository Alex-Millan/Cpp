//
//  geometry.cpp
//  3 Point
//
//  Created by Alex on 1/8/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include <stdio.h>
#include "geometry.hpp"


PointArray::PointArray() {
    pointPtr = new Point[0];
    arraySize = 0;
}

PointArray::PointArray(Point points[], int size) {
    pointPtr = new Point[size];
    arraySize = size;
    
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


