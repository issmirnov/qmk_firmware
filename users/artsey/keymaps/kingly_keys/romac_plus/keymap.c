
#include QMK_KEYBOARD_H
#include "quantum.h"
#include "artsey.h"
#include "g/keymap_combo.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_ARTSEY_BASE] = LAYOUT(
		KC_NO, A_S, A_O,
		KC_NO, A_T, A_I,
		KC_NO, A_R, A_Y,
		KC_NO, A_A, A_E
	),
  
	
};

