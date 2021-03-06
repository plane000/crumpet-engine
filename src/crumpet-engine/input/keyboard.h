#ifndef _INPUT_KEYBOARD_H_
#define _INPUT_KEYBOARD_H_

typedef enum {
    KEY_A,
    KEY_B,
    KEY_C,
    KEY_D,
    KEY_E,
    KEY_F,
    KEY_G,
    KEY_H,
    KEY_I,
    KEY_J,
    KEY_K,
    KEY_L,
    KEY_M,
    KEY_N,
    KEY_O,
    KEY_P,
    KEY_Q,
    KEY_R,
    KEY_S,
    KEY_T,
    KEY_U,
    KEY_V,
    KEY_W,
    KEY_X,
    KEY_Y,
    KEY_Z,
    KEY_1,
    KEY_2,
    KEY_3,
    KEY_4,
    KEY_5,
    KEY_6,
    KEY_7,
    KEY_8,
    KEY_9,
    KEY_SPACE,
    KEY_SHIFT,
    KEY_RSHIFT,
    KEY_CAPS,
    KEY_CTRL,
    KEY_RCTRL,
    KEY_ESC
} Key;

class Keyboard {
public:
    Key lastOutput = KEY_SPACE;
    // do this with states
};

#endif
