/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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
//#include MKYRIA_H
#include QMK_KEYBOARD_H
#include "quantum.h"

enum layers {
    _QWERTY = 0,
    _NUM,
    _NAV,
    _FKEY,
};

// Aliases for readability
#define QWER     TO(_QWERTY)
#define NUM      TG(_NUM)
#define NAV      TG(_NAV)
#define FKEY     TG(_FKEY)

#define CTL_ESC  MT(MOD_LCTL, KC_ESC)
#define CTL_QUOT MT(MOD_RCTL, KC_QUOTE)
#define CTL_MINS MT(MOD_RCTL, KC_MINUS)
#define ALT_ENT  MT(MOD_LALT, KC_ENT)


// Note: LAlt/Enter (ALT_ENT) is not the same thing as the keyboard shortcut Alt+Enter.
// The notation `mod/tap` denotes a key that activates the modifier `mod` when held down, and
// produces the key `tap` when tapped (i.e. pressed and released).

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 * Base Layer: QWERTY
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |  Tab   |   Q  |   W  |   E  |   R  |   T  |                              |   Y  |   U  |   I  |   O  |   P  |  Bksp  |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |Ctrl/Esc|   A  |   S  |   D  |   F  |   G  |                              |   H  |   J  |   K  |   L  | ;  : |Ctrl/' "|
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  | [ {  |CapsLk|  | Num  |  ] } |   N  |   M  | ,  < | . >  | /  ? | RShift |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |Adjust| LGUI | LAlt/| Space| Nav  |  |F-keys| Space| AltGr| RGUI | Mute |
 *                        |(Enco)|      | Enter|      |      |  |      |      |      |      |(Enco)|
 *                        `----------------------------------'  `----------------------------------'
 */
    [_QWER] = LAYOUT(
      KC_TAB  , KC_Q ,  KC_W   ,  KC_E  ,   KC_R ,  KC_T  ,                                        KC_Y   , KC_U   , KC_I   , KC_O  , KC_P   , KC_BSPC ,
      CTL_ESC , KC_A ,  KC_S   ,  KC_D  ,   KC_F ,  KC_G  ,                                        KC_H   , KC_J   , KC_K   , KC_L  , KC_SCLN, CTL_QUOT,
      KC_LSFT , KC_Z ,  KC_X   ,  KC_C  ,   KC_V ,  KC_B  , KC_LBRC, KC_CAPS,      _NUM , KC_RBRC, KC_N   , KC_M   , KC_COMM, KC_DOT, KC_SLSH, LM_RSFT ,
                                 KC_APP , KC_LGUI, ALT_ENT, KC_SPC ,  _NAV  ,      _FKEY, KC_SPC , KC_RALT, KC_RGUI, KC_MUTE
    ),

/*
 * Num Layer: Numbers and symbols
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |    `   |  1   |  2   |  3   |  4   |  5   |                              |   6  |  7   |  8   |  9   |  0   |   =    |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |    ~   |  !   |  @   |  #   |  $   |  %   |                              |   ^  |  &   |  *   |  (   |  )   |   +    |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |    |   |   \  |  :   |  ;   |  -   |  [   |  {   | QWER |  | Num  |   }  |   ]  |  _   |  ,   |  .   |  /   |   ?    |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |Adjust| LGUI | LAlt/| Space| Nav  |  |F-keys| Space| AltGr| RGUI | Mute |
 *                        |(Enco)|      | Enter|      |      |  |      |      |      |      |(Enco)|
 *                        `----------------------------------'  `----------------------------------'
 */
    [_NUM] = LAYOUT(
      KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                      KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_EQL ,
      KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,                                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
      KC_PIPE, KC_BSLS, KC_COLN, KC_SCLN, KC_MINS, KC_LBRC, KC_LCBR, _QWER,    KC_TRNS, KC_RCBR, KC_RBRC, KC_UNDS, KC_COMM, KC_DOT , KC_SLSH, KC_QUES,
                                 KC_APP , KC_LGUI, ALT_ENT, KC_SPC , _NAV ,    _FKEY  , KC_SPC , KC_RALT, KC_RGUI, KC_MUTE
    ),

/*
 * Nav Layer: Media, navigation
 *
 * ,-------------------------------------------------.                              ,-------------------------------------------.
 * |        |  GUI  |  Alt   | Ctrl  | Shift |       |                              | PgUp | Home |   ↑  | End  | VolUp| Delete |
 * |--------+-------+--------+-------+-------+-------|                              |------+------+------+------+------+--------|
 * |        |RGB_SPI|RGB_MOD |RGB_VAI|RGB_HUI|RGB_SAI|                              | PgDn |  ←   |   ↓  |   →  | VolDn| Insert |
 * |--------+-------+--------+-------+-------+-------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |        |RGB_SPD|RGB_RMOD|RGB_VAD|RGB_HUD|RGB_SAD|      | QWER |  | NUM  |      | Pause|M Prev|M Play|M Next|VolMut| PrtSc  |
 * `-------------------------+-------+-------+-------+------+------|  |------+------+------+------+------+----------------------'
 *                           | Adjust| LGUI  | LAlt/ | Space|ScLck |  | FKEYS| Space| AltGr| RGUI | Mute |
 *                           | (Enco)|       | Enter |      |      |  |      |      |      |      |(Enco)|
 *                           `-------------------------------------'  `----------------------------------'
 */
    [_NAV] = LAYOUT(
      KC_TRNS, KC_LGUI, KC_LCTL , KC_LSFT, KC_TRNS, KC_TRNS,                                    KC_PGUP, KC_HOME, KC_UP  , KC_END , KC_VOLU, KC_DEL,
      KC_TRNS, RGB_SPI, RGB_MOD , RGB_VAI, RGB_HUI, RGB_SAI,                                    KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_VOLD, KC_INS,
      KC_TRNS, RGB_SPD, RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAD, KC_TRNS, _QWER  ,   _NUM, KC_TRNS, KC_PAUS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_PSCR,
                                  KC_APP , KC_LGUI, ALT_ENT, KC_SPC , KC_SLCK,  _FKEY, KC_SPC , KC_RALT, KC_RGUI, KC_MUTE
    ),

/*
 * Function Layer: Function keys
 *
 * ,-------------------------------------------.                              ,-------------------------------------------.
 * |        |  F9  | F10  | F11  | F12  |      |                              |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
 * |        |  F5  |  F6  |  F7  |  F8  |      |                              |      | Shift| Ctrl |  Alt |  GUI |        |
 * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
 * |        |  F1  |  F2  |  F3  |  F4  |      |      | QWER |  | NUM  |      |      |      |      |      |      |        |
 * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
 *                        |Adjust| LGUI | LAlt/| Space| NAV  |  |      | Space| AltGr| RGUI | Mute |
 *                        |(Enco)|      | Enter|      |      |  |      |      |      |      |(Enco)|
 *                        `----------------------------------'  `----------------------------------'
 */
    [_FKEY] = LAYOUT(
      KC_TRNS, KC_F9, KC_F10,  KC_F11, KC_F12, KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
      KC_TRNS, KC_F5, KC_F6 ,  KC_F7 , KC_F8 , KC_TRNS,                                     KC_TRNS, KC_RSFT, KC_RCTL, KC_RALT, KC_DEL , KC_TRNS,
      KC_TRNS, KC_F1, KC_F2 ,  KC_F3 , KC_F4 , KC_TRNS,  KC_TRNS, _QWER,    _NUM  , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                               KC_APP,KC_LGUI, ALT_ENT,  KC_SPC , _NAV ,   KC_TRNS, KC_SPC , KC_RALT, KC_RGUI, KC_MUTE
    ),

// /*
//  * Layer template
//  *
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
//  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//                                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//     ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },        // L ENC (Mouse wheel up, Down), R ENC (VolDn, VolUp)
    [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },        // L ENC (Mouse wheel up, Down), R ENC (VolDn, VolUp)
    [2] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },        // L ENC (Mouse wheel up, Down), R ENC (VolDn, VolUp)
    [3] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),          ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },        // L ENC (Mouse wheel up, Down), R ENC (VolDn, VolUp)
};
#endif

#if defined(SWAP_HANDS_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint8_t PROGMEM encoder_hand_swap_config[NUM_ENCODERS] = { 1, 1 };
#endif

layer_state_t layer_state_set_user(layer_state_t state) {
    switch(get_highest_layer(state)) {                // --or--    R      G        B        color codes
        case _NUM:
            rgblight_setrgb (RGB_BLUE);              //  --or--  (0X00,  0X00,   0XFF);
            break;
        case _NAV:
            rgblight_setrgb (RGB_GREEN);             //  --or--  (0XFF,  0X00,   0X00);
            break;
        case _FKEY:
            rgblight_setrgb (RGB_WHITE);            //   --or--  (0X00,  0XFF,   0X00);
            break;
        default: _QWER    //For any other layer, or the default layer _QWER
            rgblight_setrgb (RGB_RED);              //  --or--  (0X7A,  0X00,   0XFF);
            break;
        }
    return state;

    // Override one led if on capslock 
  if (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)) {
    rgblight_setrgb_at(0,255,0, 0);
  }
}
