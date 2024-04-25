MCU = rp2040
BOARD = GENERIC_RP_RP2040
BOOTLOADER = rp2040

LTO_ENABLE = yes 				# Enables Link Time Optimization (LTO) to reduce f/w size
NKRO_ENABLE = yes				# Nkey rollover
DEBOUNCE_TYPE = sym_defer_pk
QMK_SETTINGS = no				# ?
COMMAND_ENABLE = no				# commands for debugging and configuration
CONSOLE_ENABLE = no				# console for debugging
VERBOSE = no

KEY_OVERRIDE_ENABLE = yes
AUTO_SHIFT_ENABLE = no
ONE_SHOT_KEYS_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no				# Magic actions
COMBO_ENABLE = no

SPLIT_KEYBOARD = yes
SPLIT_TRANSPORT = yes			# Allows replacing standard split comms w/ a custom one
SPLIT_WPM_ENABLE = yes
ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes
RGBLIGHT_ENABLE = yes			# Enable ws2812 rgb underglow
RGB_MATRIX_ENABLE = no
BACKLIGHT_ENABLE = no			# Enables per key rgb backlighting
SLEEP_LED_ENABLE = no			# Breathing leds while keyboard sleeps

WPM_ENABLE = yes				# Words per minute (WPM) calculation
MOUSEKEY_ENABLE = yes			# Allows mapping mouse scroll wheel to encoder function
EXTRAKEY_ENABLE = yes			# Audio control & system control
SPACE_CADET_ENABLE = yes		# 
MIDI_ENABLE = no
BLUETOOTH_ENABLE = no
AUDIO_ENABLE = no				# Audio output, audio subsystem
TAP_DANCE_ENABLE = no
OLED_ENABLE = no