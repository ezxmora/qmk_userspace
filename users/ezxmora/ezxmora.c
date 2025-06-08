// Copyright 2025 ezxmora (@ezxmora)
#include "ezxmora.h"

__attribute__((weak)) void keyboard_post_init_keymap(void) {}

void keyboard_post_init_user(void) {
    keyboard_post_init_keymap();
}

__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t* record) {
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_record_keymap(keycode, record)) {
        return false;
    }

#ifdef BHOP_ENABLE
    if (!process_record_bhop(keycode, record)) {
        return false;
    }
#endif

#ifdef SOCD_ENABLE
    if (!process_record_socd(keycode, record)) {
        return false;
    }
#endif

    return true;
};
