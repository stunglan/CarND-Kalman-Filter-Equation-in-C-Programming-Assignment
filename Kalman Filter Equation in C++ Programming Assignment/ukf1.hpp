//
//  ukf.hpp
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 23/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

#ifndef ukf_hpp
#define ukf_hpp

#include <stdio.h>

#ifndef UKF_H
#define UKF_H
#include "Eigen/Dense"
#include <vector>

using Eigen::MatrixXd;
using Eigen::VectorXd;

class UKF {
public:
    
    
    /**
     * Constructor
     */
    UKF();
    
    /**
     * Destructor
     */
    virtual ~UKF();
    
    /**
     * Init Initializes Unscented Kalman filter
     */
    void Init();
    
    /**
     * Student assignment functions
     */
    void GenerateSigmaPoints(MatrixXd* Xsig_out);
    void AugmentedSigmaPoints(MatrixXd* Xsig_out);
    void SigmaPointPrediction(MatrixXd* Xsig_out);
    void PredictMeanAndCovariance(VectorXd* x_pred, MatrixXd* P_pred);
    void PredictRadarMeasurement(VectorXd* z_out, MatrixXd* S_out);
    void UpdateState(VectorXd* x_out, MatrixXd* P_out);
    
};

#endif /* UKF_H */


#endif /* ukf_hpp */
