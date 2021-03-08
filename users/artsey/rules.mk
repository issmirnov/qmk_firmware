# /* Turn off some stuff we do not need */
TAP_DANCE_ENABLE = no
BOOTMAGIC_ENABLE = no
EXTRAKEY_ENABLE = no
CONSOLE_ENABLE = no
AUDIO_ENABLE = no
RGBLIGHT_ENABLE = no
LEADER_ENABLE = no
MIDI_ENABLE = no
LED_ANIMATIONS = no
MOUSEKEY_ENABLE = no
DYNAMIC_MACRO_ENABLE = no

# /* Turn on some stuff we need */
COMBO_ENABLE = yes
NKRO_ENABLE = yes

# /* Flags for smaller firmware */
EXTRAFLAGS += -flto

SRC += artsey.c
VPATH  +=  keyboards/gboards/
