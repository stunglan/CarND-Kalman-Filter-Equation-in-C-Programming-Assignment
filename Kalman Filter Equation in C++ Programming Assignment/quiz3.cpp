//
//  quiz3.cpp
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 10/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

#include "quiz3.hpp"


#include <iostream>
#include "Eigen/Dense"
#include <vector>
#include <stdexcept>

using namespace std;
using Eigen::MatrixXd;
using Eigen::VectorXd;

MatrixXd CalculateJacobian(const VectorXd& x_state);

int quiz3main() {
    
    /*
     * Compute the Jacobian Matrix
     */
    
    //predicted state  example
    //px = 1, py = 2, vx = 0.2, vy = 0.4
    VectorXd x_predicted(4);
    x_predicted << 1, 2, 0.2, 0.4;
    
    MatrixXd Hj = CalculateJacobian(x_predicted);
    
    cout << "Hj:" << endl << Hj << endl;
    
    return 0;
}

MatrixXd CalculateJacobian(const VectorXd& x_state) {
    
    MatrixXd Hj(3,4);
    //recover state parameters
    float px = x_state(0);
    float py = x_state(1);
    float vx = x_state(2);
    float vy = x_state(3);
    
    

    //TODO: YOUR CODE HERE
    try {
        float h11 = px/sqrt(pow(px,2)+pow(py,2));
        float h21 = py/sqrt(pow(px,2)+pow(py,2));
        float h12 = -py/(pow(px,2)+pow(py,2));
        float h22 = px/(pow(px,2)+pow(py,2));
        float h13 = py*(vx*py-vy*px)/pow((pow(px,2)+pow(py,2)),3/2);
        float h23 = px*(vy*px-vx*py)/pow((pow(px,2)+pow(py,2)),3/2);
        float h33 = h11;
        float h43 = h21;
        
        //compute the Jacobian matrix
        Hj <<   h11,h21,0,0,
            h12,h22,0,0,
            h13,h23,h33,h43;
        
        
    }
    //check division by zero
    catch (std::logic_error e) {
        cerr << "division by zero" << e.what() << endl;
    }
    
    cout << "Hj = " << Hj << endl;
    
    

    
    
    return Hj;
}
