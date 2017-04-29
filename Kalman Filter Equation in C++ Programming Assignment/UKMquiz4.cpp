//
//  UKMquiz4.cpp
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 29/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

#include "UKMquiz4.hpp"

#include <iostream>
#include "Eigen/Dense"
#include <vector>
#include "ukf4.hpp"

using namespace std;
using Eigen::MatrixXd;
using Eigen::VectorXd;
using std::vector;

int UKMquiz4main() {
    
    //Create a UKF instance
    UKF4 ukf;
    
    /*******************************************************************************
     * Programming assignment calls
     *******************************************************************************/
    
    VectorXd x_pred = VectorXd(5);
    MatrixXd P_pred = MatrixXd(5, 5);
    ukf.PredictMeanAndCovariance(&x_pred, &P_pred);
    
    return 0;
}
