//
//  UKMquiz2.cpp
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 27/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

#include "UKMquiz2.hpp"


#include <iostream>
#include "Eigen/Dense"
#include <vector>
#include "ukf2.hpp"

using namespace std;
using Eigen::MatrixXd;
using Eigen::VectorXd;
using std::vector;

int UKMquiz2main() {
    
    //Create a UKF instance
    UKF2 ukf;
    
    /*******************************************************************************
     * Programming assignment calls
     *******************************************************************************/
    
    MatrixXd Xsig_aug = MatrixXd(15, 7);
    ukf.AugmentedSigmaPoints(&Xsig_aug);
    
    return 0;
}
