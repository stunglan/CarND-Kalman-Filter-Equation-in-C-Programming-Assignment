//
//  tracking.hpp
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 09/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

#ifndef tracking_hpp
#define tracking_hpp




#include "measurement_package.hpp"
#include <vector>
#include <string>
#include <fstream>
#include "kalman_filter.hpp"

class Tracking {
public:
    Tracking();
    virtual ~Tracking();
    void ProcessMeasurement(const MeasurementPackage &measurement_pack);
    KalmanFilter kf_;
    
private:
    bool is_initialized_;
    long previous_timestamp_;
    
    //acceleration noise components
    float noise_ax;
    float noise_ay;
    
};




#endif /* tracking_hpp */
