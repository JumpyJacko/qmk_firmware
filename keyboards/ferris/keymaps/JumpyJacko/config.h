/*
Copyright 2020 Pierre Chevalier <pierrechevalier83@gmail.com>

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

#pragma once

// Sweep specific
/* USB Device descriptor parameter */
#define VENDOR_ID       0xC2AB
#define PRODUCT_ID      0x3939
#define DEVICE_VER      0x0001
#define MANUFACTURER    DPB
#define PRODUCT         Ferris sweep

#define DIRECT_PINS { \
    { E6, F7, F6, F5, F4 }, \
    { B1, B3, B2, B6, D3 }, \
    { D1, D0, D4, C6, D7 }, \
    { B4, B5, NO_PIN, NO_PIN, NO_PIN } \
}

#define DIRECT_PINS_RIGHT  { \
    { F4, F5, F6, F7, E6 }, \
    { D3, B6, B2, B3, B1 }, \
    { D7, C6, D4, D0, D1 }, \
    { B5, B4, NO_PIN, NO_PIN, NO_PIN } \
}

#define MATRIX_ROWS 8
#define MATRIX_COLS 5

#define UNUSED_PINS

#define USE_SERIAL
#define SOFT_SERIAL_PIN D2


// Set the mouse settings to a comfortable speed/accuracy trade-off,
// assuming a screen refresh rate of 60 Htz or higher
// The default is 50. This makes the mouse ~3 times faster and more accurate
#define MOUSEKEY_INTERVAL 30
// The default is 20. Since we made the mouse about 3 times faster with the previous setting,
// give it more time to accelerate to max speed to retain precise control over short distances.
#define MOUSEKEY_TIME_TO_MAX 15
// The default is 300. Let's try and make this as low as possible while keeping the cursor responsive
#define MOUSEKEY_DELAY 150
// It makes sense to use the same delay for the mouseweel
#define MOUSEKEY_WHEEL_DELAY 100
// The default is 100
#define MOUSEKEY_WHEEL_INTERVAL 50
// The default is 40
#define MOUSEKEY_WHEEL_TIME_TO_MAX 100

// EEPROM Handedness
// make commands:
// make ferris/sweep:JumpyJacko/avrdude-split-left
// make ferris/sweep:JumpyJacko/avrdude-split-right
#define EE_HANDS

// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 170
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD

// Extra Things
// #define NKRO_ENABLE oh how i wish i could have nkro
// #define FORCE_NKRO

#define COMBO_ALLOW_ACTION_KEYS 
#define COMBO_VARIABLE_LEN
#define COMBO_PERMISSIVE_HOLD
