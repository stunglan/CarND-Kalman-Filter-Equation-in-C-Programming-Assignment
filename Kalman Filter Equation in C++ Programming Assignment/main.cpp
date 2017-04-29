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
#include "quiz4.hpp"
#include "UKMquiz1.hpp"
#include "UKMquiz2.hpp"
#include "UKMquiz3.hpp"
#include "UKMquiz4.hpp"
#include "UKMquiz5.hpp"
#include "UKMquiz6.hpp"



int main() {

    int quiz;
    
    quiz = 10;
    
    if (quiz == 1) {
        return quiz1main();
    }
    else if (quiz == 2) {
        return quiz2main();
    }
    else if (quiz == 3) {
        return quiz3main();
    }
    else if (quiz == 4) {
        return quiz4main();
    }
    else if (quiz == 5) {
        return UKMquiz1main();
    }
    else if (quiz == 6) {
        return UKMquiz2main();
    }
    else if (quiz == 7) {
        return UKMquiz3main();
    }
    else if (quiz == 8) {
        return UKMquiz4main();
    }
    else if (quiz == 9) {
        return UKMquiz5main();
    }
    else if (quiz == 10) {
        return UKMquiz6main();
    }


    
    
    return 0;
}
