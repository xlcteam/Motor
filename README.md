
Motor
=====

Motor is a simple Arduino library for [Ardumoto][] motor shield.

Installation
------------

Download the Motor library and put it into a folder in your
`sketchbook/libraries` directory.

In Linux like environment you can do something like this


	~/sketchbook/libraries/ $ git clone git://github.com/mrshu/Motor.git


Usage
-----

You can just include Motor library in your Arduino sketch by putting 


	#include <Motor.h>

Then you can define a new motor 
	
	Motor motorA = Motor(13, 11);

where `13` is  the direction pin and `11` is the PWM pin on Ardumoto.

Next thing you might want to do is to move the motor. This can be done this way

	motorA.go(200);

where `200` is the speed. Note that the maximal value of speed is 255. You might
also want to stop the motor:

	motorA.stop();


For more detailed usage see examples directory.

(c) 2010 mr.Shu, licensed under GNU GPLv2 license

[Ardumoto]: http://www.sparkfun.com/products/9815 

