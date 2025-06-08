// Copyright 2025 ezxmora (@ezxmora)
#include "layouts/5x4_numpad/ezxmora/keymap.c"
#include <rgb_matrix.h>
#include <color.h>

void keyboard_post_init_keymap(void) {
    rgb_matrix_enable_noeeprom();
    rgb_matrix_sethsv_noeeprom(HSV_PURPLE);
    rgb_matrix_mode_noeeprom(RGB_MATRIX_CUSTOM_MODULAR_REACTIVE);
}
