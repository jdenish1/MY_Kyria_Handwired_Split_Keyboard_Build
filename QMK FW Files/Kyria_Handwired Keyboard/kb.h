#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	K000, K001, K002, K003, K004, K005,                                                                   \
	K100, K101, K102, K103, K104, K105,                                                                   \
	K200, K201, K202, K203, K204, K205, K206, K207,                                                       \
	                  K303, K304, K305, K306, K307,                                                       \
	                                                                  K411, K412, K413, K414, K415, K416, \
	                                                                  K511, K512, K513, K514, K515, K516, \
	                                                      K609, K610, K611, K612, K613, K614, K615, K616, \
	                                                      K709, K710, K711, K712, K713  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, K303,  K304,  K305,  K306,  K307,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K411,  K412,  K413,  K414,  K415,  K416 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K511,  K512,  K513,  K514,  K515,  K516 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K609,  K610,  K611,  K612,  K613,  K614,  K615,  K616 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K709,  K710,  K711,  K712,  K713,  KC_NO, KC_NO, KC_NO }  \
}

#endif