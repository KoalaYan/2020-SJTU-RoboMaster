/**
  ******************************************************************************
  * @FileName			    KeyMouseControlTask.cpp
  * @Description            Control the robot by the key and mouse on PC
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
#include "AutoAimTask.h"

int16_t speed = 0;

bool flag_clamp = true;
void Remote::KeyMouseControl() {
    static WorkState_e lastWorkState = NORMAL_STATE;
    if (workState <= 0) return;
	  
		
	  if (workState == NORMAL_STATE){                         
				Additional::additional.setTargetAngle(120);          //hang up 70mm (maybe 120 perform better
		}			
    else if (workState == ADDITIONAL_STATE_ONE){  
				if(flag_clamp){
						if (channel.rrow >400){
								__HAL_TIM_SET_COMPARE(&htim5,TIM_CHANNEL_3,1500);    //use the clamp to hold the pipe
								flag_clamp = false;
						}						
				}				
				else{
						if (channel.rrow <-400) {
								__HAL_TIM_SET_COMPARE(&htim5,TIM_CHANNEL_3,500);
								flag_clamp = true;
						}
				}
				
				Additional::additional.setTargetAngle(0);
				if (channel.lcol>400){																		//open gate1 to put small balls
						__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_3,500);
				}
				else{                                                     //open gate2 to put big balls
						__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_3,1000);
				}
				
				if (channel.rcol>400){                                    //open the outside gate
						__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_4,1500);
				}
				else{                                                     //close the outside gate
						__HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_4,500);
				}
    }
		else if (workState == ADDITIONAL_STATE_TWO){            
				Additional::additional.setRotate();                
		}
    lastWorkState = workState;
}

void Remote::KeyboardModeFSM() {
    if ((key.v & 0x30) == 0x30) {
        KeyboardMode = SHIFT_CTRL;
    } else if (key.v & KEY_SHIFT) {
        KeyboardMode = SHIFT;
    } else if (key.v & KEY_CTRL) {
        KeyboardMode = CTRL;
    } else {
        KeyboardMode = NO_CHANGE;
    }

    if (KeyboardMode != LastKeyboardMode && KeyboardMode == SHIFT_CTRL) {}
    if (KeyboardMode == SHIFT) {} else {}
    if (KeyboardMode == CTRL) {
        KM_FORWORD_BACK_SPEED = LOW_FORWARD_BACK_SPEED;
        KM_LEFT_RIGHT_SPEED = LOW_LEFT_RIGHT_SPEED;
    }
    LastKeyboardMode = KeyboardMode;
}

void Remote::MouseModeFSM() {
    static uint8_t counterl = 0;
    static uint8_t counterr = 0;
    switch (MouseLMode) {
        case SHORT_CLICK: {
            counterl++;
            if (mouse.press_l == 0) {
                MouseLMode = NO_CLICK;
                counterl = 0;
            } else if (counterl >= 50) {
                MouseLMode = LONG_CLICK;
                counterl = 0;
            } else {
                MouseLMode = SHORT_CLICK;
            }
        }
            break;
        case LONG_CLICK: {
            if (mouse.press_l == 0) {
                MouseLMode = NO_CLICK;
            } else {
                MouseLMode = LONG_CLICK;
            }
        }
            break;
        case NO_CLICK: {
            if (mouse.press_l) {
                Shoot::shoot.ShootOneBullet(0);
                MouseLMode = SHORT_CLICK;
            }
        }
            break;
    }

    switch (MouseRMode) {
        case SHORT_CLICK: {
            counterr++;
            if (mouse.press_r == 0) {
                MouseRMode = NO_CLICK;
                counterr = 0;
            } else if (counterr >= 50) {
                MouseRMode = LONG_CLICK;
                counterr = 0;
            } else {
                MouseRMode = SHORT_CLICK;
            }
        }
            break;
        case LONG_CLICK: {
            if (mouse.press_r == 0) {
                MouseRMode = NO_CLICK;
            } else {
                MouseRMode = LONG_CLICK;
            }
        }
            break;
        case NO_CLICK: {
            if (mouse.press_r) {
                MouseRMode = SHORT_CLICK;
            }
        }
            break;
    }
}
