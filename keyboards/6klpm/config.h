#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4A4C
#define PRODUCT_ID      0x2022
#define DEVICE_VER      0x0001
#define MANUFACTURER    jumpyjacko
#define PRODUCT         6klpm

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 3

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *                  NO_DIODE = switches are directly connected to AVR pins
 */

#define DIRECT_PINS { \
    { NO_PIN, NO_PIN, D4 }, \
    { F5, B1, B2 }, \
    { F6, F7, B3 } \
}

#define UNUSED_PINS

#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { D1 }

#define ENCODER_RESOLUTION 4

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

#define BOOTMAGIC_LITE_ROW 1
#define BOOTMAGIC_LITE_COLUMN 0