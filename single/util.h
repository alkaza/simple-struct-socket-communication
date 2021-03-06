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

	/* motor speed */
	bool isMotorSpeed;
	float motorSpeed;
	
	/* servo pwm */
	bool isServoPWM;
	int servoPWM;
	
	/* esc pwm */
	bool isEscPWM;
	int escPWM;

	/* pid speed */
	bool isPidSpeed;
	float pidSpeed;
	
	/* pid error */
	bool isPidError;
	float pidError;
	
	/* laser scan */
	bool isLaserScan;
	float laserScan[1080];
	
	/* position */
	bool isPos;
	double pos;
};

#endif
