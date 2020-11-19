//
// Created by 92304 on 2020/10/4.
//

#include "../Inc/Additional.h"

#include "includes.h"

void Additional::Handle() {
    M2006.Handle();
}

void Additional::Reset() {
	  initRecvUart();
    M2006.Reset(CAN_TYPE_1, 0x206, 36,
                8.0, 0.2, 5, 1580.0, 1080.0, 1080.0, 2000.0,
                15.0, 0.01, 0.5, 1000.0, 5000.0, 10000.0, 10000.0);
}

void Additional::setTargetAngle(int16_t Angle) {
	  double range = 5;
		double inc = abs(sin(2*M2006.targetAngle)*sin(2*M2006.targetAngle)) * range + 1;
		
	  if (M2006.targetAngle>180) {
			M2006.targetAngle = M2006.targetAngle-inc;
		}
		else {
			M2006.targetAngle = Angle;
		}
}

void Additional::setRotate() {
    //M2006.targetAngle = M2006.targetAngle+10;
	  double range = 5;
		double inc = abs(sin(2*M2006.targetAngle)*sin(2*M2006.targetAngle)) * range + 1;
    M2006.targetAngle = M2006.targetAngle+inc;
}

Additional Additional::additional;