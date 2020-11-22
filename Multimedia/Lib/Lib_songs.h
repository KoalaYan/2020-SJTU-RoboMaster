/**
 ***********************************(C) COPYRIGHT 2020 JiaoDragon************************************
 * @file       MusicAutoPlay.c
 * @brief      I'm insane 
 * @note       
 * @Version    V1.0.0
 * @Date       July-13-2020      
 ***********************************(C) COPYRIGHT 2020 JiaoDragon************************************
 */

#ifndef __LIB_SONGS_H
#define __LIB_SONGS_H

#define __SONG_INIT(_NAME) {_NAME##_s, #_NAME, 1, sizeof(_NAME##_s)/sizeof(T_MusicNote), 0};

#include "MusicAutoPlay.h"
	/***	SCRIPTS	***/

	#ifdef __MUSICAUTOPLAY_C
    inline constexpr T_MusicNote Astronomia_s[] = {
		{H1, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{H3, 100}, {0, 50}, 
		{H3, 100}, {0, 50},
		{H3, 100}, {0, 50}, 
		{H3, 100}, {0, 50},	
		{H2, 100}, {0, 50},
		{H2, 100}, {0, 50},
		{H2, 100}, {0, 50},
		{H2, 100}, {0, 50},
		{H5, 100}, {0, 50}, 
		{H5, 100}, {0, 50},
		{H5, 100}, {0, 50}, 
		{H5, 100}, {0, 50},
		{H6, 100}, {0, 50}, 
		{H6, 100}, {0, 50},
		{H6, 100}, {0, 50}, 
		{H6, 100}, {0, 50},
		{H6, 100}, {0, 50}, 
		{H6, 100}, {0, 50},
		{H6, 100}, {0, 50}, 
		{H6, 100}, {0, 50},
		{H6, 100}, {0, 50}, 
		{H6, 100}, {0, 50},
		{H6, 100}, {0, 50}, 
		{H6, 100}, {0, 50},
		{H2, 100}, {0, 50}, 
		{H1, 100}, {0, 50},
		{M7, 100}, {0, 50}, 
		{M5, 100}, {0, 50},
		
		{M6, 250}, {0, 50}, 
		{M6, 100}, {0, 50},
		{H3, 100}, {0, 50}, 
		{H2, 250}, {0, 50},
		{H1, 250}, {0, 50},
		{M7, 250}, {0, 50},
		{M7, 100}, {0, 50},
		{M7, 100}, {0, 50}, 
		{H2, 250}, {0, 50},
		{H1, 100}, {0, 50},
		{M7, 100}, {0, 50}, 
		{M6, 400}, {0, 50},
		{H1, 100}, {0, 50},
		{M7, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{M7, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{M6, 400}, {0, 50},
		{H1, 100}, {0, 50},
		{M7, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{M7, 100}, {0, 50},
		{H1, 100}, {0, 50},

		{M6, 250}, {0, 50}, 
		{M6, 100}, {0, 50},
		{H3, 100}, {0, 50}, 
		{H2, 250}, {0, 50},
		{H1, 250}, {0, 50},
		{M7, 250}, {0, 50},
		{M7, 100}, {0, 50},
		{M7, 100}, {0, 50}, 
		{H2, 250}, {0, 50},
		{H1, 100}, {0, 50},
		{M7, 100}, {0, 50}, 
		{M6, 250}, {0, 50},
		{M6, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{M7, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{M7, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{M6, 250}, {0, 50},
		{M6, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{M7, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{M7, 100}, {0, 50},
		{H1, 100}, {0, 50},
		
		{H1, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{H1, 100}, {0, 50},
		{H3, 100}, {0, 50}, 
		{H3, 100}, {0, 50},
		{H3, 100}, {0, 50}, 
		{H3, 100}, {0, 50},	
		{H2, 100}, {0, 50},
		{H2, 100}, {0, 50},
		{H2, 100}, {0, 50},
		{H2, 100}, {0, 50},
		{H5, 100}, {0, 50}, 
		{H5, 100}, {0, 50},
		{H5, 100}, {0, 50}, 
		{H5, 100}, {0, 50},
		{H6, 100}, {0, 50}, 
		{H6, 100}, {0, 50},
		{H6, 100}, {0, 50}, 
		{H6, 100}, {0, 50},
		{H6, 100}, {0, 50}, 
		{H6, 100}, {0, 50},
		{H6, 100}, {0, 50}, 
		{H6, 100}, {0, 50},
		{H6, 100}, {0, 50}, 
		{H6, 100}, {0, 50},
		{H6, 100}, {0, 50}, 
		{H6, 100}, {0, 50},
		{H2, 100}, {0, 50}, 
		{H1, 100}, {0, 50},
		{M7, 100}, {0, 50}, 
		{M5, 100}, {0, 50},
	};
	
	T_MusicNote Windmill_s[] = {
		{M5, 250}, {0, 50},
		{M6, 250}, {0, 50},
		{M5, 250}, {0, 50},
		{M3, 100}, {0, 50},
		{M2, 100}, {0, 50},
		
		{M1, 100}, {0, 50},
		{M2, 100}, {0, 50},
		{M1, 100}, {0, 50},
		{L6, 100}, {0, 50},
		{L5, 550}, {0, 50},
		
		{L6, 100}, {0, 50},
		{L6, 250}, {0, 50},
		{L5, 100}, {0, 50},
		{L6, 100}, {0, 50},
		{L6, 250}, {0, 50},
		{L5, 100}, {0, 50},
		{M5, 400}, {0, 50},
		{M3, 100}, {0, 50},
		{M2, 550}, {0, 50},
		
		{M5, 100}, {0, 50},
		{M6, 100}, {0, 50},
		{M5, 100}, {0, 50},
		{M3, 100}, {0, 50},
		{M2, 550}, {0, 50},
		
		{M1, 100}, {0, 50},
		{M2, 100}, {0, 50},
		{L6, 100}, {0, 50},
		{M1, 100}, {0, 50},
		{M2, 550}, {0, 50},
		
		{M2, 100}, {0, 50},
		{M2, 100}, {0, 50},
		{M2, 100}, {0, 50},
		{M3, 100}, {0, 50},
		{M5, 250}, {0, 50},
		{M5, 100}, {0, 50},
		{M6, 100}, {0, 50},
		
		{M1, 400}, {0, 50},
		{L6, 100}, {0, 50},
		{M1, 550}, {0, 50},
		
		{M5, 250}, {0, 50},
		{M6, 250}, {0, 50},
		{M5, 250}, {0, 50},
		{M3, 100}, {0, 50},
		{M2, 100}, {0, 50},
		
		{M1, 100}, {0, 50},
		{M2, 100}, {0, 50},
		{M1, 100}, {0, 50},
		{L6, 100}, {0, 50},
		{L5, 550}, {0, 50},
		
		{L6, 100}, {0, 50},
		{L6, 250}, {0, 50},
		{L5, 100}, {0, 50},
		{L6, 100}, {0, 50},
		{L6, 250}, {0, 50},
		{L5, 100}, {0, 50},
		{M5, 400}, {0, 50},
		{M3, 100}, {0, 50},
		{M2, 550}, {0, 50},
		
		{M5, 100}, {0, 50},
		{M6, 100}, {0, 50},
		{M5, 100}, {0, 50},
		{M3, 100}, {0, 50},
		{M2, 550}, {0, 50},
		
		{M1, 100}, {0, 50},
		{M2, 100}, {0, 50},
		{L6, 100}, {0, 50},
		{M1, 100}, {0, 50},
		{M2, 550}, {0, 50},
		
		{M2, 100}, {0, 50},
		{M2, 250}, {0, 50},
		{M3, 100}, {0, 50},
		{M5, 100}, {0, 50},
		{M6, 100}, {0, 50},
		{M5, 250}, {0, 50},
		
		{M6, 100}, {0, 50},
		{M6, 250}, {0, 50},
		{M5, 100}, {0, 50},
		{M3, 250}, {0, 50},
		{M6, 250}, {0, 50},
		{M5, 1150}, {0, 50},
		
		{M1, 100}, {0, 50},
		{M2, 100}, {0, 50},
		{M1, 100}, {0, 50},
		{L6, 100}, {0, 50},
		{M1, 250}, {0, 50},
	};

	inline constexpr T_MusicNote Happybirthday_s[] ={
		{M5, 300}, {0, 50},
		{M5, 300}, {0, 50},
		{M6, 600}, {0, 50},
		{M5, 600}, {0, 50},
		{H1, 600}, {0, 50},
		{M7, 1200}, {0, 50},

		{M5, 300}, {0, 50},
		{M5, 300}, {0, 50},
		{M6, 600}, {0, 50},
		{M5, 600}, {0, 50},
		{H2, 600}, {0, 50},
		{H1, 1200}, {0, 50},

		{M5, 300}, {0, 50},
		{M5, 300}, {0, 50},
		{H5, 600}, {0, 50},
		{H3, 600}, {0, 50},
		{H1, 600}, {0, 50},
		{M7, 600}, {0, 50},

		{H4, 300}, {0, 50},
		{H4, 300}, {0, 50},
		{H3, 600}, {0, 50},
		{H1, 600}, {0, 50},
		{H2, 600}, {0, 50},
		{H1, 1200}, {0, 50},

		{M5, 300}, {0, 50},
		{M5, 300}, {0, 50},
		{H5, 600}, {0, 50},
		{H3, 600}, {0, 50},
		{H1, 600}, {0, 50},
		{M7, 300}, {0, 50},
		{M6, 1200}, {0, 50},

		{H4, 300}, {0, 50},
		{H4, 300}, {0, 50},
		{H3, 600}, {0, 50},
		{H1, 600}, {0, 50},
		{H2, 600}, {0, 50},
		{H1, 1800}, {0, 50},
	};
	
	inline constexpr T_MusicNote Senbonzakura_s[]={
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L4, 150}, {0, 50},
		{L3, 150}, {0, 50},
		{L4, 40}, {0, 10},
		{L3, 40}, {0, 10},
		{L2, 75}, {0, 25},
		{L1, 150}, {0, 50},
		
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{M1, 150}, {0, 50},
		{M4, 150}, {0, 50},
		{M3, 75}, {0, 25},
		{M4, 75}, {0, 25},
		{M3, 75}, {0, 25},
		{M2, 75}, {0, 25},
		{M1, 150}, {0, 50},
		{L6, 150}, {0, 50},
		
		/* С */
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L4, 150}, {0, 50},
		{L3, 150}, {0, 50},
		{L4, 40}, {0, 10},
		{L3, 40}, {0, 10},
		{L2, 75}, {0, 25},
		{L1, 150}, {0, 50}, 
		
		{L2, 150}, {0, 50},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L4, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L4, 75}, {0, 25},
		{L6, 150}, {0, 50},
		{L5, 75}, {0, 25},
		{L6, 75}, {0, 25},
		{M1, 150}, {0, 50},
		{L6, 75}, {0, 25},
		{M1, 75}, {0, 25},
		{L4, 150}, {0, 50},
		{L3, 75}, {0, 25},
		{L4, 40}, {0, 10},
		{L3, 40}, {0, 10},
		{M2, 150}, {0, 50},
		{M1, 150}, {0, 50},
		{M2, 350}, {0, 50},
		{L2, 150}, {0, 50},
		{L4, 150}, {0, 50},
		
		/* ھС */
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L4, 150}, {0, 50},
		{L3, 150}, {0, 50},
		{L4, 40}, {0, 10},
		{L3, 40}, {0, 10},
		{L2, 75}, {0, 25},
		{L1, 150}, {0, 50},
		
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{M1, 150}, {0, 50},
		{M4, 150}, {0, 50},
		{M3, 75}, {0, 25},
		{M4, 75}, {0, 25},
		{M3, 75}, {0, 25},
		{M2, 75}, {0, 25},
		{M1, 150}, {0, 50},
		{L6, 150}, {0, 50},
		
		/* 13С */
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{L1, 75}, {0, 25},
		{L4, 150}, {0, 50},
		{L3, 150}, {0, 50},
		{L4, 40}, {0, 10},
		{L3, 40}, {0, 10},
		{L2, 75}, {0, 25},
		{L1, 150}, {0, 50},
		
		{L5, 75}, {0, 25},
		{L4, 75}, {0, 25},
		{L6, 75}, {0, 25},
		{M1, 75}, {0, 25},
		{M2, 75}, {0, 25},
		{M1, 75}, {0, 25},
		{L6, 75}, {0, 25},
		{L5, 75}, {0, 25},
		{L2, 250}, {0, 50},
		{L4, 75}, {0, 25},
		{L5, 150}, {0, 50},
		{L6, 150}, {0, 50},
		{L2, 150}, {0, 50},
		{L2, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{0, 200},
		{L1, 150}, {0, 50},
		{L2, 350}, {0, 50},
		{0,400},
		
		/* ǰ */
		{L2, 250}, {0, 50},
		{L2, 75}, {0, 25},
		{L2, 150}, {0, 50},
		{L1, 150}, {0, 50},
		{L2, 150}, {0, 50},
		{L4, 150}, {0, 50},
		{L4, 150}, {0, 50},
		{L5, 150}, {0, 50},
		{L2, 250}, {0, 50},
		{L2, 75}, {0, 25},
		{L2, 150}, {0, 50},
		{L1, 150}, {0, 50},
		{L2, 150}, {0, 50},
		{L1, 150}, {0, 50},
		{220, 150}, {0, 50},
		{L1, 150}, {0, 50},
		{L2, 250}, {0, 50},
		{L2, 75}, {0, 25},
		{L2, 150}, {0, 50},
		{L1, 150}, {0, 50},
		{L2, 150}, {0, 50},
		{L4, 150}, {0, 50},
		{L4, 150}, {0, 50},
		{L5, 150}, {0, 50},
		{L6, 350}, {0, 50},
		{L5, 150}, {0, 50},
		{L6, 75}, {0, 25},
		{L5, 75}, {0, 25},
		{L4, 350}, {0, 50},
		{L2, 350}, {0, 50},
		
		/* ʽС */
		{L2, 250}, {0, 50},
		{L2, 75}, {0, 25},
		{L2, 150}, {0, 50},
		{L1, 150}, {0, 50},
		{L2, 150}, {0, 50},
		{L4, 150}, {0, 50},
		{L4, 150}, {0, 50},
		{L5, 150}, {0, 50},
		{L2, 250}, {0, 50},
		{L2, 75}, {0, 25},
		{L2, 150}, {0, 50},
		{L1, 150}, {0, 50},
		{L2, 150}, {0, 50},
		{L1, 150}, {0, 50},
		{220, 150}, {0, 50},
		{L1, 150}, {0, 50},
		{L2, 250}, {0, 50},
		{L2, 75}, {0, 25},
		{L2, 150}, {0, 50},
		{L1, 150}, {0, 50},
		{L2, 150}, {0, 50},
		{L4, 150}, {0, 50},
		{L4, 150}, {0, 50},
		{L5, 150}, {0, 50},
		{L6, 350}, {0, 50},
		{L5, 150}, {0, 50},
		{L6, 75}, {0, 25},
		{L5, 75}, {0, 25},
		{L4, 350}, {0, 50},
		{L2, 350}, {0, 50},
		
		/* ʽھС */
		{L4, 350}, {0, 50},
		{L3, 350}, {0, 50},
		{L2, 350}, {0, 50},
		{L1, 350}, {0, 50},
		{L1, 150}, {0, 50},
		{L1, 75}, {0, 25},
		{L2, 75}, {0, 25},
		{220, 150}, {0, 50},
		{196, 150}, {0, 50},
		{220, 750}, {0, 50},
		{220, 150}, {0, 50},
		{L1, 350}, {0, 50},
		{L2, 150}, {0, 50},
		{L5, 350}, {0, 50},
		{L3, 350}, {0, 50},
		{L4, 250}, {0, 50},
		{L4, 75}, {0, 25},
		{L3, 150}, {0, 50},
		{L1, 150}, {0, 50},
		{L2, 750}, {0, 50},
	};
	
	inline constexpr T_MusicNote Pureland_s[] = {
		//500msһ 120bpm
		//1
		/*{0, 500}, {0, 500}, {0, 500}, */{L3, 200},{0,50}, {L5, 200},{0,50}, 
		{L6,700},{0,50}, {L5,200},{0,50}, {L6,700},{0,50}, {L5,200},{0,50},
		{L6,200},{0,50}, {M1,200},{0,50}, {L5,200},{0,50}, {L6,200},{0,50}, {L3,450},{0,50}, {L3,200},{0,50}, {L5,200},{0,50}, 
		{L6,700},{0,50}, {L5,200},{0,50}, {L6,700},{0,50}, {L5,200},{0,50},
		//2
		{L6,200},{0,50}, {M3,200},{0,50}, {M1,200},{0,50}, {M2,200},{0,50}, {L6,450},{0,50}, {L3,200},{0,50}, {L5,200},{0,50}, 
		{L6,700},{0,50}, {L5,200},{0,50}, {L6,700},{0,50}, {L5,200},{0,50},
		{L6,200},{0,50}, {M1,200},{0,50}, {L5,200},{0,50}, {L3,200},{0,50}, {L5,200},{0,50}, {L1,200},{0,50}, {L2,200},{0,50}, 
		{L3,450},{0,50}, {M1,450},{0,50}, {L6,450},{0,50}, {M3,450},{0,50}, 
		//3
		{M2,200},{0,50}, {M3,75},{0,50}, {M2,75},{0,50}, {M1,200},{0,50}, {M2,200},{0,50}, {L6,450},{0,50}, {0,500},
		{M6,450},{0,50}, {M6,450},{0,50}, {M6,450},{0,50}, {M6,75},{0,50}, {H1,75},{0,50}, {H2,75},{0,50}, {H3,75},{0,50}, 
		{M6,450},{0,50}, {M6,450},{0,50}, {M6,200},{0,50}, {M5,450},{0,50}, {M6,200},{0,50}, 
		{M6,450},{0,50}, {M6,450},{0,50}, {M6,450},{0,50}, {M6,75},{0,50}, {H1,75},{0,50}, {H2,75},{0,50}, {H3,75},{0,50}, 
		//4
		{M6,450},{0,50}, {M6,450},{0,50}, {M6,200},{0,50}, {H4,450},{0,50}, {H3,200},{0,50}, 
		{M6,450},{0,50}, {M6,450},{0,50}, {M6,450},{0,50}, {M6,75},{0,50}, {H1,75},{0,50}, {H2,75},{0,50}, {H3,75},{0,50}, 
		{M6,450},{0,50}, {M6,450},{0,50}, {M6,200},{0,50}, {M5,450},{0,50}, {M6,200},{0,50}, 
		{M6,450},{0,50}, {M6,450},{0,50}, {M6,450},{0,50}, {M6,75},{0,50}, {H1,75},{0,50}, {H2,75},{0,50}, {H3,75},{0,50}, 
		//5
		{M6,450},{0,50}, {M6,200},{0,50}, {M5,450},{0,50}, {M6,200},{0,50}, {M6,450},{0,50},
		{0,500}, {0,250}, {L6,200},{0,50}, {L6,200},{0,50}, {L5,75},{0,50}, {L5,325},{0,50}, {L6,200},{0,50}, 
		{L5,200},{0,50}, {L3,200},{0,50}, {L3,200},{0,50}, {L5,75},{0,50}, {L3,1075},{0,50},
		{0,500}, {0,250}, {L6,200},{0,50}, {L6,200},{0,50}, {L5,200},{0,50}, {L6,200},{0,50}, {L7,200},{0,50}, 
		//6
		{M1,450},{0,50}, {L7,450},{0,50}, {L6,200},{0,50}, {L7,75},{0,50}, {L6,75},{0,50}, {L5,450},{0,50}, 
		{0,500}, {0,250}, {L6,200},{0,50}, {L6,200},{0,50}, {L5,200},{0,50}, {L5,200},{0,50},  {L6,75},{0,50}, {L5,275},{0,50}, //
		{L3,200},{0,50}, {L3,200},{0,50}, {L5,75},{0,50}, {L3,575},{0,50}, {0,250}, {L5,200},{0,50}, 
		{L5,200},{0,50}, {L6,450},{0,50}, {L5,200},{0,50}, {L5,200},{0,50}, {L6,450},{0,50}, {L6,75},{0,50}, {L7,75},{0,50}, 
		//7
		{M1,450},{0,50}, {M2,450},{0,50}, {L6,200},{0,50}, {L3,200},{0,50}, {L3,200},{0,50}, {L5,200},{0,50}, 
		{L5,200},{0,50}, {L6,200},{0,50}, {0,250}, {M3,200},{0,50}, {M2,450},{0,50}, {0,250}, {L6,200},{0,50}, 
		{0,250}, {L6,200},{0,50}, {M3,200},{0,50}, {M2,450},{0,50}, {0,500},
		{0,250}, {M2,200},{0,50}, {M2,200},{0,50}, {M1U,200},{0,50}, {M2,75},{0,50}, {M1,75},{0,50}, {L6,200},{0,50}, {0,250}, {L5,200},{0,50}, 
		//8
		{0,250}, {L5,200},{0,50}, {L5,200},{0,50}, {L6,200},{0,50}, {L6,200},{0,50}, {L3,200},{0,50}, {L3,200},{0,50}, {L5,200},{0,50}, 
		{L5,200},{0,50}, {L6,200},{0,50}, {0,250}, {M3,200},{0,50}, {M2,450},{0,50}, {0,250}, {L6,200},
		{0,250}, {L6,200},{0,50}, {L6,200},{0,50}, {M3,200},{0,50}, {M2,450},{0,50}, {0,500},
		{0,250}, {M2,200},{0,50}, {M2,200},{0,50}, {M1U,200},{0,50}, {M2,75},{0,50}, {M1,75},{0,50}, {L6,200},{0,50}, {0,250}, {L5,450},{0,50},
		//9
		{L6,200},{0,50}, {L6,200},{0,50}, {L5,200},{0,50}, {L6,450},{0,50}, {0,250}, {L5,75},{0,50}, {L5,75},{0,50}, 
		{L6,200},{0,50}, {L6,200},{0,50}, {L6,200},{0,50}, {M3,200},{0,50}, {M3,700},{0,50}, {M1,75},{0,50}, {M1,75},{0,50}, 
		{M2,200},{0,50}, {M1,75},{0,50}, {M2,325},{0,50}, {M3,200},{0,50}, {L6,700},{0,50}, {L5,75},{0,50}, {L5,75},{0,50}, 
		{L6,450},{0,50}, {M3,325},{0,50}, {M3,75},{0,50}, {M2,200},{0,50}, {M1,200},{0,50}, {L6,200},{0,50}, {L5,200},{0,50}, 
		//10
		{L6,325},{0,50}, {L6,325},{0,50}, {M1,200},{0,50}, {M2,450},{0,50}, {0,500},
		{L6,200},{0,50}, {L6,75},{0,50}, {L6,325},{0,50}, {L5,200},{0,50}, {L6,200},{0,50}, {M3,450},{0,50}, {M1,200},{0,50}, 
		{M2,200},{0,50}, {M1,75},{0,50}, {M2,325},{0,50}, {M3,200},{0,50}, {M3,700},{0,50}, {L5,200},{0,50}, 
		{L6,200},{0,50}, {M1,450},{0,50}, {L5,200},{0,50}, {L6,200},{0,50}, {M3,450},{0,50}, {M3,200},{0,50}, 
		//11
		{M2,200},{0,50}, {M2,75},{0,50}, {M1,75},{0,50}, {L6,200},{0,50}, {L5,200},{0,50}, {L6,450},{0,50}, {0,500},
		{M6,450},{0,50}, {M6,450},{0,50}, {M6,450},{0,50}, {M6,75},{0,50}, {H1,75},{0,50}, {H2,75},{0,50}, {H3,75},{0,50}, 
		{M6,450},{0,50}, {M6,450},{0,50}, {M6,200},{0,50}, {M5,450},{0,50}, {M6,200},{0,50}, 
		{M6,450},{0,50}, {M6,450},{0,50}, {M6,450},{0,50}, {M6,75},{0,50}, {H1,75},{0,50}, {H2,75},{0,50}, {H3,75},{0,50}, 
	};
	
	/***	SONGS	***/
	inline constexpr T_Song Astronomia = __SONG_INIT(Astronomia);
	inline constexpr T_Song Windmill = __SONG_INIT(Windmill);
	inline constexpr T_Song Happybirthday = __SONG_INIT(Happybirthday);
	inline constexpr T_Song Senbonzakura = __SONG_INIT(Senbonzakura);
	inline constexpr T_Song Pureland = __SONG_INIT(Pureland);
	
	#else
	extern T_Song Astronomia, Windmill, Happybirthday, Senbonzakura;
	
	#endif
	
#endif //__LIB_SONGS_H