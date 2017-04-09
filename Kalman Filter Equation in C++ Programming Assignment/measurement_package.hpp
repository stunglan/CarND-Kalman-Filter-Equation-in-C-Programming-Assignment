//
//  measurement_package.h
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 09/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

#ifndef measurement_package_hpp
#define measurement_package_hpp


#include "Eigen/Dense"

class MeasurementPackage {
public:
    long timestamp_;
    
    enum SensorType {
        LASER, RADAR
    } sensor_type_;
    
    Eigen::VectorXd raw_measurements_;
    
};



#endif /* measurement_package_h */
