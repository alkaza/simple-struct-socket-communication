#ifndef _UTIL_H_
#define _UTIL_H_
#include <string>

/* XXX Fix port if needed */
#define PORT 6666

/* TODO: Add specific data and bool type that you want to send */ 
struct data
{
	/* steering angle */
	bool isSteeringAngle;	
	float32 steeringAngle;

	/* motor speed */
	bool isMotorSpeed;
	float32 motorSpeed;
	
	/* servo pwm */
	bool isServoPWM;
	int16 servoPWM;
	
	/* esc pwm */
	book isEscPWM;
	int16 escPWM;
	
	/* laser scan */
	bool isLaserScan;
	float32 laserScan [];
	
	/* position */
	bool isPos;
	float64 pos;
};

#endif
