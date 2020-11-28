#pragma once
#include "whydobearsxplod.h"
/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/
#if (!defined(LAYOUT) && defined(KEYMAP))
#    define LAYOUT KEYMAP
#endif

// clang-format off
#define LAYOUT_jd40_wrapper(...)                  LAYOUT_kc(__VA_ARGS__)
#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_omega_wrapper(...)                  LAYOUT_s_30(__VA_ARGS__)
#define LAYOUT_omega4_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_artsey_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_honkpad_wrapper(...)                  KEYMAP(__VA_ARGS__)
#define LAYOUT_gnapkin_wrapper(...)                  LAYOUT_gnapkin(__VA_ARGS__)
#define LAYOUT_xlant_wrapper(...)                  KEYMAP(__VA_ARGS__)
#define LAYOUT_u33_wrapper(...)                  LAYOUT_33_big_space(__VA_ARGS__)
#define LAYOUT_gherkin_wrapper(...)                  LAYOUT_ortho_3x10(__VA_ARGS__)
#define LAYOUT_ap2_wrapper(...)                  LAYOUT(__VA_ARGS__)                    
#define LAYOUT_artsey_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_artsey_gherkin_wrapper(...)          LAYOUT_ortho_3x10(__VA_ARGS__)


/* Num/Symbol Layer */
#define __________________NUM_1____________________       KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0
#define __________________NUM_2____________________       KC_TRNS, DYN_REC_START1, DYN_MACRO_PLAY1, KC_F, KC_G, KC_SCLN, KC_MINS, KC_EQL, KC_QUOT, KC_NO
#define __________________NUM_3____________________       KC_TRNS, DYN_REC_START2, DYN_MACRO_PLAY2, DYN_REC_STOP, KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC

/* F-key layer */
#define ___________________FKEY1___________________       KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10

/* Nav */
#define ___________________NAV1____________________       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_UP, KC_END, KC_PGUP
#define ___________________NAV2____________________       KC_TRNS, KC_TRNS, KC_BSPC, KC_DEL, LOCK_SHIFT, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN

/* Mouse */
#define ___________________MOU1____________________       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_BTN1, KC_MS_UP, KC_MS_BTN2, KC_PGUP
#define ___________________MOU2____________________       KC_TRNS, KC_MS_BTN2, KC_MS_BTN3, KC_MS_BTN1, KC_TRNS, KC_TRNS, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_PGDN


/* No */
#define ___________________NO______________________       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS

#define ___________________TRNS____________________       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 



/* ARTSEYIO */
#define _ARTS_       ARTSEY_A, ARTSEY_R, ARTSEY_T, ARTSEY_S
#define _EYIO_       ARTSEY_E, ARTSEY_Y, ARTSEY_I, ARTSEY_O
#define _NUM1_       ARTSEY_1, ARTSEY_2, ARTSEY_3, KC_NO
#define _NUM2_       ARTSEY_4, ARTSEY_5, ARTSEY_6, KC_NO
#define _SYM1_       KC_NO,KC_BSLS,KC_SCOLON,KC_GRAVE
#define _SYM2_       KC_NO,KC_MINUS,KC_EQUAL,KC_NO
#define _MOU1_       KC_MS_BTN1,KC_MS_UP,KC_MS_BTN2,KC_PGUP
#define _MOU2_       KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_PGDN
#define _BRAC1_      KC_NO, KC_LPRN,KC_RPRN,KC_LCBR
#define _BRAC2_      KC_NO, KC_LBRACKET,KC_RBRACKET,KC_RCBR
#define _NAV1_       KC_HOME, KC_UP, KC_END,KC_NO
#define _NAV2_       KC_LEFT, KC_DOWN, KC_RIGHT,KC_NO
#define _ARTSL_       LARTSEY_S, LARTSEY_T, LARTSEY_R, LARTSEY_A 
#define _EYIOL_       LARTSEY_O, LARTSEY_I, LARTSEY_Y, LARTSEY_E 
#define _NUM1L_       KC_NO, ARTSEY_3, ARTSEY_2, ARTSEY_1
#define _NUM2L_       KC_NO, ARTSEY_6, ARTSEY_5, ARTSEY_4 
#define _SYM1L_       KC_GRAVE, KC_SCOLON, KC_BSLS, KC_NO
#define _SYM2L_       KC_NO, KC_EQUAL, KC_MINUS, KC_NO
#define _MOU1L_       KC_PGUP, KC_MS_BTN2, KC_MS_UP, KC_MS_BTN1
#define _MOU2L_       KC_PGDN, KC_MS_RIGHT, KC_MS_DOWN, KC_MS_LEFT
#define _BRAC1L_      KC_LCBR, KC_RPRN, KC_LPRN, KC_NO
#define _BRAC2L_      KC_RCBR, KC_RBRACKET, KC_LBRACKET, KC_NO
#define _NAV1L_       KC_NO, KC_END, KC_UP, KC_HOME
#define _NAV2L_       KC_NO, KC_RIGHT, KC_DOWN, KC_LEFT

