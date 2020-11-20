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
	  initVisionRecvUart();
    M2006.Reset(CAN_TYPE_1, 0x206, 36,
                30, 0, 5, 1580.0, 1080.0, 1080.0, 2000.0,
                300.0, 0, 1, 1000.0, 5000.0, 10000.0, 10000.0);
		//Reset(CanType_e can, uint16_t _RxID, double _reductionRate, double _kp = 8.0, double _ki = 0.2, double _kd = 5, double _pMax, double _iMax,
    //              double _dMax, double _max)
}

void Additional::setTargetAngle(int16_t Angle) {
	/*
	  double range = 10;
		double inc = abs(sin(2*M2006.targetAngle)*sin(2*M2006.targetAngle)) * range + 0.5;
		
	  if (M2006.targetAngle>180) {
			M2006.targetAngle = M2006.targetAngle-inc;
		}
		else {
			M2006.targetAngle = Angle;
		}
	*/
	//int nowAngle = int(M2006.GetRealAngle());
	
	if (M2006.GetRealAngle()>180) {
		M2006.targetAngle = M2006.GetRealAngle()-10;
	}
	else {
		M2006.targetAngle = Angle;
	}
}


void Additional::setRotate() {
		//mode 0: directly add angle every time
		//if(M2006.GetRealAngle()<1800)
		M2006.targetAngle = M2006.GetRealAngle()+10;
		
		
		//mode 1: sine function
		/*
	  double range = 10;
		double inc = abs(sin(M2006.GetRealAngle())*sin(M2006.GetRealAngle())) * range + 0.5;
    M2006.targetAngle = M2006.targetAngle+inc;
		*/
	
	/*
		//mode 2: Clockwise 180, stay and Counterclockwise 180
		if (times % 3 == 0) {
				if(ang == 18){
						if(lp<5){
								ang--;
						}
						else{
								lp = 0;
						}
						lp++;
				}
				ang++;
				times = 0;
				times++;
				
		}
		else{
				times++;
		}
		
		ang %= 36;
		int nowangle = 180 - 10 * abs(18-ang);
		M2006.targetAngle = nowangle;
		*/
		
		//mode 3:
		
}

Additional Additional::additional;