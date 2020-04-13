#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [TTS_BASE] = {
    {KC_ESC,  KC_Q,    KC_W,   KC_E,        KC_PLUS,    KC_MINS},
    {KC_LSFT, KC_A,    KC_S,   KC_D,        KC_F,       KC_G},
    {KC_LCTL, KC_Z,    KC_X,   LCTL(KC_C),  LCTL(KC_V), KC_B},
    {_______, _______, KC_SPC, MO(TTS_FUN), KC_LALT,    MO(TTS_NUM)}},
  [TTS_NUM] = {
    {_______, KC_7,    KC_6,   KC_5,        KC_4,    KC_P},
    {_______, KC_3,    KC_2,   KC_1,        KC_0,    KC_N},
    {_______, _______, KC_U,   KC_8,        KC_9,    KC_M},
    {_______, _______, KC_SPC, MO(TTS_FUN), KC_LALT, MO(TTS_NUM)}},
  [TTS_FUN] = {
    {RESET,   KC_F4,  KC_F3,   KC_F2,  KC_F1, _______},
    {_______, KC_F8,  KC_F7,   KC_F6,  KC_F5, _______},
    {_______, KC_F12, KC_F11,  KC_F10, KC_F9, _______},
    {_______, _______, KC_SPC, MO(TTS_FUN), KC_LALT, MO(TTS_NUM)}},
};

