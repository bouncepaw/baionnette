#include QMK_KEYBOARD_H

#define MATRIX(k11, k12, k13, k14, k15, k16,\
               k21, k22, k23, k24, k25, k26,\
               k31, k32, k33, k34, k35, k36) \
{k11, k12, k13, k14, k15, k16},\
{k21, k22, k23, k24, k25, k26},\
{k31, k32, k33, k34, k35, k36}

#define KRITA(matrix) \
{matrix, {KC_NO,   KC_NO,   KC_LSFT, KC_LALT, MO(KRITA_RAISE), KC_LCTL}}  
#define TTS(matrix) \
{matrix, {KC_NO,   KC_NO,   KC_SPC, MO(TTS_FUN), KC_LALT, MO(TTS_NUM)}}

#define TTS_MODE DF(TTS_BASE)
#define KR_MODE  DF(KRITA_BASE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [KRITA_BASE] = KRITA(MATRIX(
    KC_G,             KC_X,             KC_LBRC,          KC_RBRC,    KC_BSLS,    KC_PGUP, 
    KC_F,             KC_F10,           KC_C,             KC_B,       KC_E,       KC_PGDN, 
    LCTL(LSFT(KC_Z)), LCTL(KC_Z),       LCTL(KC_X),       LCTL(KC_C), LCTL(KC_V), LSFT(KC_DEL)
  )),
  [KRITA_RAISE] = KRITA(MATRIX(
    LCTL(LALT(KC_I)), LCTL(LSFT(KC_A)), LCTL(LSFT(KC_I)), LCTL(KC_R), LCTL(KC_A), KC_NO,   
    LGUI(KC_R),       LCTL(KC_O),       LCTL(KC_W),       LCTL(KC_N), LCTL(KC_S), KC_F9, 
    TTS_MODE,         KC_L,             KC_K,             LCTL(KC_T), KC_T,       KC_NO
  )),

  [TTS_BASE] = TTS(MATRIX(
    KC_ESC,  KC_Q,    KC_W,   KC_E,        KC_PLUS,    KC_MINS,
    KC_LSFT, KC_A,    KC_S,   KC_D,        KC_F,      KC_G,
    KC_LCTL, KC_Z,    KC_R,   LCTL(KC_C),  LCTL(KC_V), KC_B
  )),
  [TTS_NUM] = TTS(MATRIX(
    _______, KC_7,    KC_6,   KC_5,        KC_4,    KC_P,
    _______, KC_3,    KC_2,   KC_1,        KC_0,    KC_N,
    KR_MODE, _______, KC_U,   KC_8,        KC_9,    KC_M
  )),
  [TTS_FUN] = TTS(MATRIX(
    RESET,   KC_F4,   KC_F3,  KC_F2,       KC_F1,   _______,
    _______, KC_F8,   KC_F7,  KC_F6,       KC_F5,   _______,
    _______, KC_F12,  KC_F11, KC_F10,      KC_F9,   _______
  )),
};

