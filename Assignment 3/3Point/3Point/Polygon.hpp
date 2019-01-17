//
//  Polygon.hpp
//  3Point
//
//  Created by Alex on 1/15/19.
//  Copyright © 2019 KALIYA. All rights reserved.
//

#ifndef Polygon_hpp
#define Polygon_hpp

#include <stdio.h>
#include "geometry.hpp"

class Polygon {
protected:
    PointArray shape_points;
    static int polyCounter;
public:
    Polygon(Point p[], const int arraySize);
    Polygon(PointArray *pArray);
    
    
};
#endif /* Polygon_hpp */
