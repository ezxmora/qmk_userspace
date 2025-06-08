// Copyright 2025 ezxmora (@ezxmora)
#include QMK_KEYBOARD_H
#include <sendstring_spanish.h>
#include "ezxmora.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [_DEFAULT] = ___EZXMORA_LAYOUT_60___(
        ___EZXMORA_DEFAULT_60_R1___,
        ___EZXMORA_DEFAULT_60_R2___,
        ___EZXMORA_DEFAULT_60_R3___,
        ___EZXMORA_DEFAULT_60_R4___,
        ___EZXMORA_DEFAULT_60_R5___
    ),

    [_ADJUST] = ___EZXMORA_LAYOUT_60___(
        ___EZXMORA_ADJUST_60_R1___,
        ___EZXMORA_ADJUST_60_R2___,
        ___EZXMORA_ADJUST_60_R3___,
        ___EZXMORA_ADJUST_60_R4___,
        ___EZXMORA_ADJUST_60_R5___
    )
};
