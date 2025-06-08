// Copyright 2025 ezxmora (@ezxmora)
#pragma once
#include <quantum_keycodes.h>
#include <keycodes.h>

enum LAYERS { _DEFAULT, _ADJUST };

enum KEYCODES { KC_SHRG = SAFE_RANGE, KC_TOGGLE_BHOP, KC_TOGGLE_SOCD };

#ifdef TAP_DANCE_ENABLE
#    include "../keyrecords/tap_dance.h"
#    define TDSHIFT TD(TD_TRIPLE_SHIFT_TOGGLE)
#else
#    define TDSHIFT KC_LSFT
#    define TDF23 KC_F23
#endif

#define ___EZXMORA_LAYOUT_60___(...) LAYOUT_60_ansi_arrow(__VA_ARGS__)
#define ___EZXMORA_LAYOUT_5x4___(...) LAYOUT_numpad_5x4(__VA_ARGS__)

/* Default layer
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ ` │ + │BSLS │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
 * │  ~   │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ñ │ ´ │  Enter │
 * ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┬───┤
 * │ Shift  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ Shift│ ↑ │ / │
 * ├────┬───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬───┼───┼───┤
 * │Ctrl│GUI │Alt │Space                   │Alt│MOD│ ← │ ↓ │ → │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┘
 */
#define ___EZXMORA_DEFAULT_60_R1___ KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC
#define ___EZXMORA_DEFAULT_60_R2___ KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, ES_BSLS
#define ___EZXMORA_DEFAULT_60_R3___ ES_TILD, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT
#define ___EZXMORA_DEFAULT_60_R4___ KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_RSFT, KC_UP, KC_SLSH
#define ___EZXMORA_DEFAULT_60_R5___ KC_LCTL, KC_LGUI, KC_LALT, KC_SPACE, KC_RALT, MO(_ADJUST), KC_LEFT, KC_DOWN, KC_RGHT

/* Adjust layer
 * ┌───┬────┬────┬────┬────┬────┬────┬────┬────┬────┬─────┬─────┬─────┬───────┐
 * │º/ª│ F1 │ F2 │ F3 │ F4 │ F5 │ F6 │ F7 │ F8 │ F9 │ F10 │ F11 │ F12 │  Del  │
 * ├───┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬───┴─┬───┴─┬───┴─┬─────┤
 * │     │    │    │    │    │    │    │    │    │    │     │     │     │     │
 * ├─────┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬────┴┬────┴┬────┴─────┤
 * │      │    │    │    │    │    │    │    │    │    │     │     │          │
 * ├──────┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬──┴─┬───┴─────┴┬────┬────┤
 * │        │SOCD│BHOP│    │    │    │    │    │ <  │  > │          │PGUP│ Bot│
 * ├────┬───┴┬───┴─┬──┴────┴────┴────┴────┴────┴────┴───┬┴──┬───┬───┼────┼────┤
 * │    │    │     │                                    │   │   │HME│PGDN│ END│
 * └────┴────┴─────┴────────────────────────────────────┴───┴───┴───┴────┴────┘
 */
#define ___EZXMORA_ADJUST_60_R1___ ES_MORD, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DELETE
#define ___EZXMORA_ADJUST_60_R2___ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
#define ___EZXMORA_ADJUST_60_R3___ _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
#define ___EZXMORA_ADJUST_60_R4___ _______, KC_TOGGLE_SOCD, KC_TOGGLE_BHOP, _______, _______, _______, _______, _______, ES_LABK, ES_RABK, _______, KC_PGUP, QK_BOOT
#define ___EZXMORA_ADJUST_60_R5___ _______, _______, _______, _______, KC_RALT, _______, KC_HOME, KC_PGDN, KC_END

/*
 * ┌──────┬──────┬──────┬──────┐
 * │ Prev │ Play │ Next │ NMPD │
 * ├──────┼──────┼──────┼──────┤
 * │ F13  │ F14  │ F15  │      │
 * ├──────┼──────┼──────┤ Prnt │
 * │ F16  │ F17  │ F18  │      │
 * ├──────┼──────┼──────┼──────┤
 * │ F19  │ F20  │ F21  │      │
 * ├──────┴──────┼──────┤ F24  │
 * │     F22     │ F23  │      │
 * └─────────────┴──────┴──────┘
 */
#define ___EZXMORA_SOUNDBOARD_5x4_R1___ KC_MPRV, KC_MPLY, KC_MNXT, TO(1)
#define ___EZXMORA_SOUNDBOARD_5x4_R2___ KC_F13, KC_F14, KC_F15
#define ___EZXMORA_SOUNDBOARD_5x4_R3___ KC_F16, KC_F17, KC_F18, KC_PRINT_SCREEN
#define ___EZXMORA_SOUNDBOARD_5x4_R4___ KC_F19, KC_F20, KC_F21
#define ___EZXMORA_SOUNDBOARD_5x4_R5___ KC_F22, KC_F23, KC_F24

/*
 * ┌───┬───┬───┬───────┐
 * │   │   │   │ SNDB  │
 * ├───┼───┼───┼───────┤
 * │ 7 │ 8 │ 9 │       │
 * ├───┼───┼───┤ Boot  │
 * │ 4 │ 5 │ 6 │       │
 * ├───┼───┼───┼───────┤
 * │ 1 │ 2 │ 3 │       │
 * ├───┴───┼───┤ Clear │
 * │   0   │   │       │
 * └───────┴───┴───────┘
 */
#define ___EZXMORA_NUMPAD_5x4_R1___ KC_TRNS, KC_TRNS, KC_TRNS, TO(0)
#define ___EZXMORA_NUMPAD_5x4_R2___ KC_P7, KC_P8, KC_P9
#define ___EZXMORA_NUMPAD_5x4_R3___ KC_P4, KC_P5, KC_P6, QK_BOOT
#define ___EZXMORA_NUMPAD_5x4_R4___ KC_P1, KC_P2, KC_P3
#define ___EZXMORA_NUMPAD_5x4_R5___ KC_P0, KC_TRNS, KC_NUM
