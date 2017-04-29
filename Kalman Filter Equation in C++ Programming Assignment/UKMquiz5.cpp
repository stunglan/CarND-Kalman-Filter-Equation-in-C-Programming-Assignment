//
//  UKMquiz5.cpp
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 29/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

#include "UKMquiz5.hpp"

#include <iostream>
#include "Eigen/Dense"
#include <vector>
#include "ukf5.hpp"

using namespace std;
using Eigen::MatrixXd;
using Eigen::VectorXd;
using std::vector;

int UKMquiz5main() {
    
    //Create a UKF instance
    UKF5 ukf;
    
    /*******************************************************************************
     * Programming assignment calls
     *******************************************************************************/
    
    VectorXd z_out = VectorXd(3);
    MatrixXd S_out = MatrixXd(3, 3);
    ukf.PredictRadarMeasurement(&z_out, &S_out);
    
    return 0;
}
