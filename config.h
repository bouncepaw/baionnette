#pragma once
#include "config_common.h"

#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0xBEF1
#define DEVICE_VER 0
#define MANUFACTURER Bouncepaw
#define PRODUCT Baionnette
#define DESCRIPTION Gaming keypad optimized for TTS

#define MATRIX_ROWS 4
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { D7, F6, B1, B2 }
#define MATRIX_COL_PINS { C6, D4, E6, F7, B3, B6 }
#define DIODE_DIRECTION ROW2COL
#define TAPPING_TERM 140
#define DEBOUNCING_DELAY 5
#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
#define COMBO_ALLOW_ACTION_KEYS

