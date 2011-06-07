#include <Motor.h>


/*
	Simple example of the Motor library for ArduMoto shield.
	
*/


Motor motorA = Motor(13, 11);

#define SPEED 255
#define SLEEP 2000

void setup()
{

}

void loop()
{
	motorA.go(SPEED);
	delay(SLEEP);
	motorA.go(-SPEED);
	delay(SLEEP);

}
