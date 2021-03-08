#pragma once

// Tapping term settings
#undef TAPPING_TERM
#define TAPPING_TERM_PER_KEY
#define TAPPING_TERM 150
#define PERMISSIVE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT
#define RETRO_TAPPING

// Combo Settings
#define COMBO_VARIABLE_LEN
#define COMBO_TERM 30
#define TAPPING_FORCE_HOLD
// #define COMBO_ALLOW_ACTION_KEYS
// #define COMBO_MUST_HOLD_MODS

/* Mousekey stuff */
#ifdef MOUSEKEY_ENABLE
  #define MOUSEKEY_INTERVAL 12
  #define MOUSEKEY_MAX_SPEED 6
  #define MOUSEKEY_TIME_TO_MAX 50
  #define MOUSEKEY_DELAY 20
#endif

/* Old Action Stuff */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

// Handedness
#define MASTER_RIGHT
