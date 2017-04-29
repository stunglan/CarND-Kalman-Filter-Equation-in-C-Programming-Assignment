//
//  UKMquiz3.cpp
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 29/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

#include "UKMquiz3.hpp"


#include <iostream>
#include "Eigen/Dense"
#include <vector>
#include "ukf3.hpp"

using namespace std;
using Eigen::MatrixXd;
using Eigen::VectorXd;
using std::vector;

int UKMquiz3main() {
    
    //Create a UKF instance
    UKF3 ukf;
    
    /*******************************************************************************
     * Programming assignment calls
     *******************************************************************************/
    
    MatrixXd Xsig_pred = MatrixXd(15, 5);
    ukf.SigmaPointPrediction(&Xsig_pred);
    
    return 0;
}
