// Copyright 2025 ezxmora (@ezxmora)
#include "rgb.h"

__attribute__((weak)) bool rgb_matrix_indicators_keymap(void) {
    return true;
}

bool rgb_matrix_indicators_user(void) {
    return rgb_matrix_indicators_keymap();
}

__attribute__((weak)) bool rgb_matrix_indicators_advanced_keymap(uint8_t led_min, uint8_t led_max) {
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 0: // Default & Soundboard
            rgb_matrix_sethsv_noeeprom(HSV_PURPLE);
            break;

        case 1: // Adjust & Numpad
            rgb_matrix_sethsv_noeeprom(HSV_PINK);
            break;

        default:
            rgb_matrix_sethsv_noeeprom(HSV_BLACK);
            break;
    }

    return state;
}
