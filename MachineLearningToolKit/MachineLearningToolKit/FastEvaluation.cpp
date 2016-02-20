//
//  FastEvaluation.cpp
//  MachineLearningToolKit
//
//  Created by Charles on 2016-02-19.
//  Copyright © 2016 Charles. All rights reserved.
//

#include <stdio.h>
#include "FastEvaluation.h"

namespace fastEval {
    BinaryVector::BinaryVector() {
        ;
    }
    
    unsigned VectorHandler::mostSignificantBit(unsigned long long v) {
        unsigned _pos = 0;
        while (v >>= 1) {
            _pos++;
        }
        return _pos;
    }

    
}
