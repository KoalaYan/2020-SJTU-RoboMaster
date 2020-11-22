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
		__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_4,500);
    M2006.Reset(CAN_TYPE_1, 0x206, 36,
                8.0, 0.2, 5, 1580.0, 1080.0, 1080.0, 2000.0,
                15.0, 0, 0.3, 1000.0, 5000.0, 10000.0, 10000.0);
		//Reset(CanType_e can, uint16_t _RxID, double _reductionRate, double _kp = 8.0, double _ki = 0.2, double _kd = 5, double _pMax, double _iMax,
    //              double _dMax, double _max)
}
int RealAngle;
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
	RealAngle = int(M2006.GetRealAngle());
	//int nowAngle = RealAngle % 360;
	int sll = RealAngle / 360;
	if(RealAngle - (sll*360+Angle) > 300){
			sll++;
	}
	//int tarAngle = int(Angle) % 360;
	if(RealAngle >= Angle+sll*360){
			M2006.targetAngle = M2006.GetRealAngle()-10;
	}
	else{
			M2006.targetAngle = sll * 360 + Angle;
	}
		/*
	if (M2006.GetRealAngle()>180) {
		
			if(RealAngle >= Angle+sll*360){
				M2006.targetAngle = M2006.GetRealAngle()-10;
			}
			else{
				M2006.targetAngle = sll * 360;
			}
		
		//M2006.targetAngle = sll * 360;
	}
	else {
			M2006.targetAngle = Angle;
	}
		*/
}


void Additional::setRotate() {
		//mode 0: directly add angle every time
		//if(M2006.GetRealAngle()<1800)
	
		/*
		if(times % 10 == 0) {
				times = 0;
				if(lp==3){
						lp = 0;
						times++;
				}
				lp++;
		}
		else{
				M2006.targetAngle = M2006.GetRealAngle()+10;
				times++;
		}
	*/
		
		/*
		RealAngle = int(M2006.GetRealAngle());
		M2006.targetAngle = RealAngle+10;
		*/
		//mode 1: sine function
		/*
	  double range = 10;
		double inc = abs(sin(M2006.GetRealAngle())) * range + 0.5;
    M2006.targetAngle = M2006.targetAngle+inc;
		*/
	
	
		//mode 2: Clockwise 180, stay and Counterclockwise 180
		//int ang = round(M2006.GetRealAngle() / 10);
		
		
		if(ang == 19){
				if(lp<50){
						ang--;
				}
				else{
						lp = 0;
				}
				lp++;
		}
		
		ang++;
				
		
		ang %= 38;
		int nowangle = 190 - 10 * abs(19-ang);
		M2006.targetAngle = nowangle;
		
		
		//mode 3:
		
}

Additional Additional::additional;