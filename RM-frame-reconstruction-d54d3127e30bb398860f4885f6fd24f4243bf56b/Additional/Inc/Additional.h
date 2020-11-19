//
// Created by 92304 on 2020/10/4.
//

#ifndef RM_FRAME2_ADDITIONAL_H
#define RM_FRAME2_ADDITIONAL_H

#include "includes.h"

class Additional {
public:
    static Additional additional;
    NormalMotor M2006;

    void Handle();

    void Reset();

    void setRotate();

    void setTargetAngle(int16_t);
    
};

#endif //RM_FRAME2_ADDITIONAL_H
