/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "config_common.h"

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

//#define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS
// #define BACKLIGHT_LEVELS 6
#undef RGBLED_NUM
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 10
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
// Mousekey stuff
// #define MOUSEKEY_DELAY             200
// #define MOUSEKEY_INTERVAL          30
// #define MOUSEKEY_MAX_SPEED         8
// #define MOUSEKEY_TIME_TO_MAX       20
// #define MOUSEKEY_WHEEL_MAX_SPEED   8
// #define MOUSEKEY_WHEEL_TIME_TO_MAX 30

//Permissive Hold
#define PERMISSIVE_HOLD
#define TAPPING_TERM 200

#endif

