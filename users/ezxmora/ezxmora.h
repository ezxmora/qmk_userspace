// Copyright 2025 ezxmora (@ezxmora)
#pragma once
#include <quantum.h>
#include <assert.h>
#include "include/layouts.h"

// Callback for custom configurations post initialization per keymap
void keyboard_post_init_keymap(void);

// Gaming related
#ifdef SOCD_ENABLE
extern bool socd_cleaner_enabled;
bool process_record_socd(uint16_t keycode, keyrecord_t* record);
#endif

#ifdef BHOP_ENABLE
extern bool bhop_enabled;
bool process_record_bhop(uint16_t keycode, keyrecord_t* record);
#endif
