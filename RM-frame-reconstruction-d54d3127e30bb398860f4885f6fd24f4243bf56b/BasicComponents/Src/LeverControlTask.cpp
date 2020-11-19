/**
  ******************************************************************************
  * @FileName			    LeverControlTask.cpp
  * @Description            Control the robot by the lever on the remote
  * @author                 Steve Young
  * @note
  ******************************************************************************
  *
  * Copyright (c) 2021 Team JiaoLong-ShanghaiJiaoTong University
  * All rights reserved.
  *
  ******************************************************************************
**/

#include "includes.h"

#define USE_CHASSIS_FOLLOW

void Remote::LeverControl() {
    static WorkState_e lastWorkState = NORMAL_STATE;
    if (workState <= 0) return;
    
	  sendNumber(number);
    Chassis::chassis.SetVelocity(channel.rcol, channel.rrow, channel.lrow * 5);   //control car driving
		
		__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_3,1000);
	  __HAL_TIM_SET_COMPARE(&htim5,TIM_CHANNEL_3,500); 
	
     if (workState == NORMAL_STATE) {  
				Additional::additional.setTargetAngle(150); //to pass the hill
    } 
		else if (workState == ADDITIONAL_STATE_ONE) { 
				Additional::additional.setTargetAngle(0); //adjust the car position to fit clamp
    } 
		else if (workState == ADDITIONAL_STATE_TWO) {    
			  
    }
    lastWorkState = workState;
}
