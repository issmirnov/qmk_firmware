#pragma once
#include "quantum.h"


extern keymap_config_t keymap_config;

enum layers {
  _ARTSEY_BASE = 0,
  _ARTSEY_NUM,
  _ARTSEY_SYM,
  _ARTSEY_BRAC,
  _ARTSEY_NAV,
  _ARTSEY_MOU,
};

enum custom_keycodes {
  BASE = SAFE_RANGE,
  LOCK_SHIFT,
  A_A,
  A_R,
  A_T,
  A_S,
  A_E,
  A_Y,
  A_I,
  A_O,
  LA_A,
  LA_R,
  LA_T,
  LA_S,
  LA_E,
  LA_Y,
  LA_I,
  LA_O,
  A_1,
  A_2,
  A_3,
  A_4,
  A_5,
  A_6,
};



// LAYOUT:
// ╭─────┬─────┬─────┬─────╮
// │  A  │  R  │  T  │  S  │
// ├─────┼─────┼─────┼─────┤
// │  E  │  Y  │  I  │  O  │
// ╰─────┴─────┴─────┴─────╯

// Map named keys to avtual keycodes + layer toggles
#define A_A LT(_ARTSEY_BRAC,KC_A)
#define A_R KC_R
#define A_T KC_T
#define A_S LT(_ARTSEY_NUM,KC_S)

#define A_E LT(_ARTSEY_SYM,KC_E)
#define A_Y KC_Y
#define A_I KC_I
#define A_O LT(_ARTSEY_NAV,KC_O)

// Number mappings tp keycodes
#define A_1 KC_1
#define A_2 KC_2
#define A_3 KC_3
#define A_4 KC_4
#define A_5 KC_5
#define A_6 KC_6
