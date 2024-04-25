/* Copyright 2022 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// place overrides here
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 24
#define FORCE_NKRO
#define TAPPING_TOGGLE 1
#define LCPO_KEYS KC_LSFT, KC_TRNS, KC_LBRC
#define RCPC_KEYS KC_RSFT, KC_TRNS, KC_RBRC
#define LAPO_KEYS KC_LSFT, KC_LSFT, KC_LBRC
#define RAPC_KEYS KC_RSFT, KC_RSFT, KC_RBRC
#define LAYER_STATE_32BIT
// #define MOUSEKEY_INTERVAL 16

// #define MOUSEKEY_DELAY 0

// #define MOUSEKEY_TIME_TO_MAX 60

// #define MOUSEKEY_MAX_SPEED 5

// #define MOUSEKEY_WHEEL_DELAY 0

#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#define ENCODERS_PAD_A { GP8 }
#define ENCODERS_PAD_B { GP9 }
#define ENCODER_RESOLUTIONS { 4 }
#define ENCODERS_PAD_A_RIGHT { GP8 }
#define ENCODERS_PAD_B_RIGHT { GP9 }
#define ENCODER_RESOLUTIONS_RIGHT { 4 }

#ifdef	RGBLIGHT_ENABLE
	#define	RGBLIGHT_LAYERS
	#define	RGBLIGHT_ANIMATIONS
	#define	RGBLIGHT_MAX_LAYERS	5
	#define	RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
	#define	RGBLIGHT_LAYERS_RETAIN_VAL
	#define	RGB_DI_PIN	GP11
	#define	RGBLED_NUM	6
	#define	RGB_SPLIT	{3,3}
	#define	RGBLIGHT_LIMIT_VAL	150
	#define	SPLIT_TRANSPORT_MIRROR
	#define	RGBLIGHT_SPLIT
	#define	RGBLIGHT_EFFECT_RGB_TEST
	#define	RGBLIGHT_DEFAULT_HUE	180
	#define	RGBLIGHT_HUE_STEP	10
	#define	RGBLIGHT_SAT_STEP	10
	#define	RGBLIGHT_VAL_STEP	10
	#define BACKLIGHT_CAPS_LOCK	
#endif


#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET					//	Activates double tap behavior
#define	RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT	200u	//	Timeout window in ms which double tap can occur
#define	RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED	GP17		//	Specify led by gpio which blinks when in bootloader mode

// Lets you roll mod-tap keys
#define IGNORE_MOD_TAP_INTERRUPT