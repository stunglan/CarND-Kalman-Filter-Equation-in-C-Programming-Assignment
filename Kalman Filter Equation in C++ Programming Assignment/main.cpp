//
//  main.cpp
//  Kalman Filter Equation in C++ Programming Assignment
//
//  Created by knut tungland on 09/04/2017.
//  Copyright © 2017 knut tungland. All rights reserved.
//

// Write a function 'filter()' that implements a multi-
// dimensional Kalman Filter for the example given
//============================================================================

#include "quiz1.hpp"
#include "quiz2.hpp"
#include "quiz3.hpp"

int main() {

    int quiz;
    
    quiz = 3;
    
    if (quiz == 1) {
        return quiz1main();
    }
    else if (quiz == 2) {
        return quiz2main();
    }
    else if (quiz == 3) {
        return quiz3main();
    }
    
    return 0;
}
