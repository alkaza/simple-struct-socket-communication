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
	float steeringAngle;

	/* motor velocity */
	bool isMotorSpeed;
	float motorSpeed;
	
	/* servo pwm */
	bool isServoPWM;
	int servoPWM;
	
	/* esc pwm */
	book isEscPWM;
	int escPWM;

	/* pid velocity */
	bool isPidVelocity;
	float pidVelocity;
	
	/* pid error */
	bool isPidError;
	float pidError;
	
	/* laser scan */
	bool isLaserScan;
	float laserScan [1080];
	
	/* position */
	bool isPos;
	double pos;
};

#endif
