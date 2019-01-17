//
//  Polygon.cpp
//  3Point
//
//  Created by Alex on 1/15/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#include "Polygon.hpp"

Polygon::Polygon(Point p[], const int arraySize) : shape_points(p, arraySize) {
    polyCounter++;
}

