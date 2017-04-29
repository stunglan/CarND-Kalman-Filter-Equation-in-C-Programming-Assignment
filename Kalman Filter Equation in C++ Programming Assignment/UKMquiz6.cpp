//
//  UKMquiz6.cpp
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 29/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

#include "UKMquiz6.hpp"


#include <iostream>
#include "Eigen/Dense"
#include <vector>
#include "ukf6.hpp"

using namespace std;
using Eigen::MatrixXd;
using Eigen::VectorXd;
using std::vector;

int UKMquiz6main() {
    
    //Create a UKF instance
    UKF6 ukf;
    
    /*******************************************************************************
     * Programming assignment calls
     *******************************************************************************/
    
    VectorXd x_out = VectorXd(5);
    MatrixXd P_out = MatrixXd(5, 5);
    ukf.UpdateState(&x_out, &P_out);
    
    return 0;
}
