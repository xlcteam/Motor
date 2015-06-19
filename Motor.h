/*
 * Motor.h - Library for controling DC motors connected to Ardumoto
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


#ifndef Motor_H
#define Motor_H

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class Motor
{
    public:
        Motor(int dir, int pwn);
        void go(int speed);
        void stop();
        void off();
    private:
        int _dir;
        int _pwm;
};

#endif
