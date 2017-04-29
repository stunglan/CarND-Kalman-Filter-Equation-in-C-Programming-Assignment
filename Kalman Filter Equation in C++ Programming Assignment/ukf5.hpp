//
//  ukf5.hpp
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 29/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

#ifndef ukf5_hpp
#define ukf5_hpp

#include "Eigen/Dense"
#include <vector>

using Eigen::MatrixXd;
using Eigen::VectorXd;

class UKF5 {
public:
    
    
    /**
     * Constructor
     */
    UKF5();
    
    /**
     * Destructor
     */
    virtual ~UKF5();
    
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

#endif /* ukf5_hpp */
