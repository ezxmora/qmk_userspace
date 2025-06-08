// Copyright 2025 ezxmora (@ezxmora)
#pragma once

// Combo speed
#define COMBO_TERM 20

// How long before a key press becomes a hold
#define TAPPING_TERM 200

// No more than 8 layers
#define LAYER_STATE_8BIT

// Unicode modes
#define UNICODE_SELECTED_MODES UNICODE_MODE_LINUX

// Disables music
#define NO_MUSIC_MODE

// Disables all RGB effects
#include "include/disable_all_rgb_effects.h"

// Disables Lock key support
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
