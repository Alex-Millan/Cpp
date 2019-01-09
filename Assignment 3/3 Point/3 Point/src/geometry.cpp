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
    pointPtr = new Point();
    arraySize = 0;
}

PointArray::PointArray(const Point points[], const int size) {
    pointPtr = new Point[size];
    for (int i = 0; i < size; i++) {
        *(pointPtr + i) = points[i];
    }
    
    PointArray::PointArray(const PointArray &pv) {
        
    }
    
}
