//
//  UKMquiz1.cpp
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 23/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

#include "UKMquiz1.hpp"

#include <stdio.h>
#include <iostream>
#include "Eigen/Dense"
#include <vector>
#include "ukf1.hpp"

using namespace std;
using Eigen::MatrixXd;
using Eigen::VectorXd;
using std::vector;

int UKMquiz1main() {
    
    //Create a UKF instance
    UKF ukf;
    
    /*******************************************************************************
     * Programming assignment calls
     *******************************************************************************/
    
    MatrixXd Xsig = MatrixXd(11, 5);
    ukf.GenerateSigmaPoints(&Xsig);
    
    //print result
    std::cout << "Xsig = " << std::endl << Xsig << std::endl;
    
    return 0;
}
