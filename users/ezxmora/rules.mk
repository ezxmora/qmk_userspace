# Copyright 2025 ezxmora (@ezxmora)
LTO_ENABLE = yes
MUSIC_ENABLE = no
MIDI_ENABLE = no
AUDIO_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no

SRC += \
	ezxmora.c

ifeq ($(strip $(COMBO_ENABLE)), yes)
	INTROSPECTION_KEYMAP_C = $(USER_PATH)/keyrecords/keyrecords.c
endif

ifeq ($(strip $(RGB_MATRIX_ENABLE)), yes)
	SRC += $(USER_PATH)/rgb/rgb.c
	RGB_MATRIX_CUSTOM_USER = yes
endif

ifeq ($(strip $(BHOP_ENABLE)), yes)
	OPT_DEFS += -DBHOP_ENABLE
	SRC += $(USER_PATH)/gaming/bhop.c
	RGB_MATRIX_CUSTOM_USER = yes
endif

ifeq ($(strip $(SOCD_ENABLE)), yes)
	OPT_DEFS += -DSOCD_ENABLE
	SRC += $(USER_PATH)/gaming/socd.c
endif
