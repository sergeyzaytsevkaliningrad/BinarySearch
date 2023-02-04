//
//  Interpetator.hpp
//  BinarySearchTree
//
//  Created by Сергей Зайцев on 04.02.2023.
//

#ifndef Interpetator_hpp
#define Interpetator_hpp

#include <stdio.h>

#endif /* Interpetator_hpp */
#include <iostream>
#include <string>
#include <math.h>

class Interpolator{
    double x;
    double y;
    double z;
    
    float findClosestPoint(double x1, double y1, double x2, double y2) {
        
        double x3 = 0.0;
        double y3 = 0.0;
        
        if (x1 > x2){
            x3 = x1-x2;
        }
        else{
            x3 = x2-x1;
        }
        
        if (y1 > y2){
            y3 = y1-y2;
        }
        else{
            y3 = y2-y1;
        }
        
        
        
        
        return 0;
    }
    
    
};
