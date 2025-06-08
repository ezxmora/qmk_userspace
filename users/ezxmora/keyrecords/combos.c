// Copyright 2025 ezxmora (@ezxmora)
#include <process_combo.h>
#include <keymap_spanish.h>

const uint16_t PROGMEM dshift_caps_combo[] = {KC_LSFT, KC_RSFT, COMBO_END};
const uint16_t PROGMEM altgr_backslash_combo[] = {KC_RALT, ES_BSLS, COMBO_END};

combo_t key_combos[] = {
    COMBO(dshift_caps_combo, KC_CAPS),
    COMBO(altgr_backslash_combo, ES_RCBR),
};
