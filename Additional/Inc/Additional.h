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
		int times = 0;
		int ang = 0;
		int lp = 0;
		int flag;
		//uint8_t sdnm;

    void Handle();

    void Reset();

    void setRotate();

    void setTargetAngle(int16_t);

		void remoteControl(uint8_t num);

		void ResetFlag();
    
};

#endif //RM_FRAME2_ADDITIONAL_H
