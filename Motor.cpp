/*
 * Motor.cpp
 * This file is part of Motor
 *
 * Copyright (C) 2010 - 2013, mrShu
 *
 * Motor is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Motor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Motor; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA  02110-1301  USA
 */

#include "Motor.h"

Motor::Motor(int dir, int pwm)
{
    pinMode(dir,OUTPUT);
    pinMode(pwm,OUTPUT);
    _dir = dir;
    _pwm = pwm;
}

void Motor::go(int speed)
{
    int type = HIGH;
    //if speed is negative, rotate motor to another direction
    if(speed < 0){
        type = LOW;
    }

    //use speed values only from range <0,255>
    speed = abs(speed % 256);

    //write direction
    digitalWrite(_dir, type);
    //write speed
    analogWrite(_pwm, speed);
}

void Motor::stop()
{
    digitalWrite(_dir, HIGH);
    //set speed 0 (stop the motor)
    analogWrite(_pwm,0);
}

void Motor::off()
{
    digitalWrite(_dir, LOW);
    analogWrite(_pwm, 0);
}
