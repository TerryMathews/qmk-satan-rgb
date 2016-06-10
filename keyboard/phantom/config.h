/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

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

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0003
#define MANUFACTURER    PHANTOM
#define PRODUCT         PHANTOM RGB MOD
#define DESCRIPTION     QMK keyboard firmware for PHANTOM TKL with WS2812 support

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 17

// Planck PCB default pin-out
// Change this to how you wired your keyboard
// COLS: Left to right, ROWS: Top to bottom
#define COLS (int []){ D5, C7, C6, D4, D0, E6, F0, F1, F4, F5, F6, F7, D7, D6, D1, D2, D3 }
#define ROWS (int []){ B5, B4, B3, B2, B1, B0 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
//#define BACKLIGHT_LEVELS 5

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    3

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* ws2812 RGB LED */
#define ws2812_PORTREG  PORTE
#define ws2812_DDRREG   DDRE
#define ws2812_pin PE2
#define RGBLED_NUM 20     // Number of LEDs
#ifndef RGBLIGHT_HUE_STEP
#define RGBLIGHT_HUE_STEP 10
#endif
#ifndef RGBLIGHT_SAT_STEP
#define RGBLIGHT_SAT_STEP 17
#endif
#ifndef RGBLIGHT_VAL_STEP
#define RGBLIGHT_VAL_STEP 17
#endif


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
#define NO_DEBUG

/* disable print */
#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#endif
