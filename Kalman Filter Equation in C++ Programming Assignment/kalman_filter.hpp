//
//  kalman_filter.hpp
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 09/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

#ifndef kalman_filter_hpp
#define kalman_filter_hpp



#include "Eigen/Dense"

using Eigen::MatrixXd;
using Eigen::VectorXd;

class KalmanFilter {
public:
    
    ///* state vector
    VectorXd x_;
    
    ///* state covariance matrix
    MatrixXd P_;
    
    ///* state transistion matrix
    MatrixXd F_;
    
    ///* process covariance matrix
    MatrixXd Q_;
    
    ///* measurement matrix
    MatrixXd H_;
    
    ///* measurement covariance matrix
    MatrixXd R_;
    
    /**
     * Constructor
     */
    KalmanFilter();
    
    /**
     * Destructor
     */
    virtual ~KalmanFilter();
    
    /**
     * Predict Predicts the state and the state covariance
     * using the process model
     */
    void Predict();
    
    /**
     * Updates the state and
     * @param z The measurement at k+1
     */
    void Update(const VectorXd &z);
    
};




#endif /* kalman_filter_hpp */
