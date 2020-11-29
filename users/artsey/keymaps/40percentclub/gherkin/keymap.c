
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "artsey.h"
#include "g/keymap_combo.h"





const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_ortho_3x10(
LA_S,LA_T,LA_R,LA_A,KC_NO,KC_NO,A_A,A_R,A_T,A_S,
LA_O,LA_I,LA_Y,LA_E,KC_NO,KC_NO,A_E,A_Y,A_I,A_O,
KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO,KC_NO

  ),


};
