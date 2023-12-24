// Copyright 2022 Michael McCoyd (@mmccoyd)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "quantum/keymap_extras/keymap_german.h"

enum layers {
    _BASE = 0,
    _NAV,
    _SYM,
    _ADJUST,
    _GAME,
};

#define xxxxxxx KC_NO

#define LY_NAV MO(_NAV)
#define LY_SYM MO(_SYM)
#define LY_ADJ MO(_ADJUST)
#define LY_GAME DF(_GAME)
#define RST_LY DF(_BASE)
#define ALT_GR OSM(MOD_RALT)
#define OSM_SFT OSM(MOD_LSFT)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
     DE_MINS, DE_F,    DE_M,    DE_L,    DE_G,    DE_P,                                           DE_UDIA, DE_COMM, DE_DOT,  DE_U,    DE_B,    KC_BSPC,
     KC_TAB,  DE_S,    DE_N,    DE_R,    DE_T,    DE_D,                                           DE_O,    DE_A,    DE_E,    DE_I,    DE_H,    KC_ENT,
     DE_X,    DE_Z,    DE_V,    DE_W,    DE_C,    DE_J,    CW_TOGG,                      xxxxxxx, DE_Q,    DE_ADIA, DE_ODIA, DE_Y,    DE_K,    DE_SS,
                                         KC_ESC,  KC_LCTL, KC_SPC,  LY_NAV,     LY_SYM,  OSM_SFT, KC_LALT, KC_RALT
    ),
    [_SYM] = LAYOUT(
     DE_CIRC, DE_EXLM, DE_1,    DE_2,    DE_3,    DE_ASTR,                                        DE_QUOT, DE_LPRN, DE_RPRN, DE_LCBR, DE_RCBR, KC_DEL, 
     DE_HASH, DE_EQL,  DE_4,    DE_5,    DE_6,    DE_0,                                           DE_DQUO, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, _______, 
     DE_ACUT, DE_BSLS, DE_7,    DE_8,    DE_9,    DE_PLUS, KC_RALT,                      _______, DE_PIPE, DE_LBRC, DE_RBRC, DE_LABK, DE_RABK, DE_TILD,
                                         _______, _______, _______, LY_ADJ,     _______, _______, _______, _______
    ),
    [_NAV] = LAYOUT(
     xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                                        xxxxxxx, KC_HOME, KC_PGUP, xxxxxxx, KC_BSPC, KC_DEL,
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, xxxxxxx,                                        xxxxxxx, KC_LEFT, KC_UP  , KC_DOWN, KC_RGHT, _______,
     xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                      xxxxxxx, xxxxxxx, KC_END,  KC_PGDN, xxxxxxx, xxxxxxx, KC_TAB,
                                         _______, _______, _______, _______,    LY_ADJ , _______, _______, _______
    ),
    [_ADJUST] = LAYOUT(
     LY_GAME, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                                        xxxxxxx, KC_F1,   KC_F2,   KC_F3,   KC_F4,   xxxxxxx, 
     xxxxxxx, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, xxxxxxx,                                        xxxxxxx, KC_F5,   KC_F6,   KC_F7,   KC_F8,   xxxxxxx, 
     QK_BOOT, EE_CLR,  xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,                      xxxxxxx, xxxxxxx, KC_F9,   KC_F10,  KC_F11,  KC_F12,  xxxxxxx,
                                         xxxxxxx, xxxxxxx, xxxxxxx, _______,    _______, xxxxxxx, xxxxxxx, xxxxxxx
    ),
    [_GAME] = LAYOUT(
     KC_ESC,  KC_ENT,  DE_Q,    DE_W,    DE_E,    DE_R,                                           xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, RST_LY, 
     KC_LSFT, DE_G,    DE_A,    DE_S,    DE_D,    DE_F,                                           xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, 
     KC_LCTL, DE_6,    DE_1,    DE_2,    DE_3,    DE_4,    xxxxxxx,                      xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx,
                                         xxxxxxx, DE_5,    KC_SPC,  DE_X,       xxxxxxx, xxxxxxx, xxxxxxx, xxxxxxx
    ),
};

//  Template:
//    [_INDEX] = LAYOUT(
//     _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______, 
//     _______, _______, _______, _______, _______, _______,                                        _______, _______, _______, _______, _______, _______, 
//     _______, _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______, _______,
//                                         _______, _______, _______, _______,    _______, _______, _______, _______
//    ),
