// Copyright 2025 ezxmora (@ezxmora)
#include QMK_KEYBOARD_H
#include "ezxmora.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [0] = ___EZXMORA_LAYOUT_5x4___(
        ___EZXMORA_SOUNDBOARD_5x4_R1___,
        ___EZXMORA_SOUNDBOARD_5x4_R2___,
        ___EZXMORA_SOUNDBOARD_5x4_R3___,
        ___EZXMORA_SOUNDBOARD_5x4_R4___,
        ___EZXMORA_SOUNDBOARD_5x4_R5___
    ),
    [1] = ___EZXMORA_LAYOUT_5x4___(
        ___EZXMORA_NUMPAD_5x4_R1___,
        ___EZXMORA_NUMPAD_5x4_R2___,
        ___EZXMORA_NUMPAD_5x4_R3___,
        ___EZXMORA_NUMPAD_5x4_R4___,
        ___EZXMORA_NUMPAD_5x4_R5___
    )
};
