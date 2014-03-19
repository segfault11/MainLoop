#ifndef KEYCODES_H
#define KEYCODES_H

#include "Scancodes.h"

typedef int FF_Keycode;

#define FFK_SCANCODE_MASK (1<<30)
#define FF_SCANCODE_TO_KEYCODE(X)  (X | FFK_SCANCODE_MASK)

enum
{
    FFK_UNKNOWN = 0,

    FFK_RETURN = '\r',
    FFK_ESCAPE = '\033',
    FFK_BACKSPACE = '\b',
    FFK_TAB = '\t',
    FFK_SPACE = ' ',
    FFK_EXCLAIM = '!',
    FFK_QUOTEDBL = '"',
    FFK_HASH = '#',
    FFK_PERCENT = '%',
    FFK_DOLLAR = '$',
    FFK_AMPERSAND = '&',
    FFK_QUOTE = '\'',
    FFK_LEFTPAREN = '(',
    FFK_RIGHTPAREN = ')',
    FFK_ASTERISK = '*',
    FFK_PLUS = '+',
    FFK_COMMA = ',',
    FFK_MINUS = '-',
    FFK_PERIOD = '.',
    FFK_SLASH = '/',
    FFK_0 = '0',
    FFK_1 = '1',
    FFK_2 = '2',
    FFK_3 = '3',
    FFK_4 = '4',
    FFK_5 = '5',
    FFK_6 = '6',
    FFK_7 = '7',
    FFK_8 = '8',
    FFK_9 = '9',
    FFK_COLON = ':',
    FFK_SEMICOLON = ';',
    FFK_LESS = '<',
    FFK_EQUALS = '=',
    FFK_GREATER = '>',
    FFK_QUESTION = '?',
    FFK_AT = '@',
    /*
       Skip uppercase letters
     */
    FFK_LEFTBRACKET = '[',
    FFK_BACKSLASH = '\\',
    FFK_RIGHTBRACKET = ']',
    FFK_CARET = '^',
    FFK_UNDERSCORE = '_',
    FFK_BACKQUOTE = '`',
    FFK_a = 'a',
    FFK_b = 'b',
    FFK_c = 'c',
    FFK_d = 'd',
    FFK_e = 'e',
    FFK_f = 'f',
    FFK_g = 'g',
    FFK_h = 'h',
    FFK_i = 'i',
    FFK_j = 'j',
    FFK_k = 'k',
    FFK_l = 'l',
    FFK_m = 'm',
    FFK_n = 'n',
    FFK_o = 'o',
    FFK_p = 'p',
    FFK_q = 'q',
    FFK_r = 'r',
    FFK_s = 's',
    FFK_t = 't',
    FFK_u = 'u',
    FFK_v = 'v',
    FFK_w = 'w',
    FFK_x = 'x',
    FFK_y = 'y',
    FFK_z = 'z',

    FFK_CAPSLOCK = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_CAPSLOCK),

    FFK_F1 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F1),
    FFK_F2 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F2),
    FFK_F3 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F3),
    FFK_F4 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F4),
    FFK_F5 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F5),
    FFK_F6 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F6),
    FFK_F7 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F7),
    FFK_F8 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F8),
    FFK_F9 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F9),
    FFK_F10 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F10),
    FFK_F11 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F11),
    FFK_F12 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F12),

    FFK_PRINTSCREEN = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_PRINTSCREEN),
    FFK_SCROLLLOCK = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_SCROLLLOCK),
    FFK_PAUSE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_PAUSE),
    FFK_INSERT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_INSERT),
    FFK_HOME = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_HOME),
    FFK_PAGEUP = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_PAGEUP),
    FFK_DELETE = '\177',
    FFK_END = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_END),
    FFK_PAGEDOWN = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_PAGEDOWN),
    FFK_RIGHT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_RIGHT),
    FFK_LEFT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_LEFT),
    FFK_DOWN = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_DOWN),
    FFK_UP = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_UP),

    FFK_NUMLOCKCLEAR = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_NUMLOCKCLEAR),
    FFK_KP_DIVIDE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_DIVIDE),
    FFK_KP_MULTIPLY = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_MULTIPLY),
    FFK_KP_MINUS = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_MINUS),
    FFK_KP_PLUS = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_PLUS),
    FFK_KP_ENTER = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_ENTER),
    FFK_KP_1 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_1),
    FFK_KP_2 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_2),
    FFK_KP_3 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_3),
    FFK_KP_4 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_4),
    FFK_KP_5 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_5),
    FFK_KP_6 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_6),
    FFK_KP_7 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_7),
    FFK_KP_8 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_8),
    FFK_KP_9 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_9),
    FFK_KP_0 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_0),
    FFK_KP_PERIOD = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_PERIOD),

    FFK_APPLICATION = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_APPLICATION),
    FFK_POWER = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_POWER),
    FFK_KP_EQUALS = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_EQUALS),
    FFK_F13 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F13),
    FFK_F14 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F14),
    FFK_F15 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F15),
    FFK_F16 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F16),
    FFK_F17 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F17),
    FFK_F18 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F18),
    FFK_F19 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F19),
    FFK_F20 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F20),
    FFK_F21 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F21),
    FFK_F22 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F22),
    FFK_F23 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F23),
    FFK_F24 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_F24),
    FFK_EXECUTE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_EXECUTE),
    FFK_HELP = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_HELP),
    FFK_MENU = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_MENU),
    FFK_SELECT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_SELECT),
    FFK_STOP = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_STOP),
    FFK_AGAIN = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AGAIN),
    FFK_UNDO = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_UNDO),
    FFK_CUT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_CUT),
    FFK_COPY = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_COPY),
    FFK_PASTE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_PASTE),
    FFK_FIND = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_FIND),
    FFK_MUTE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_MUTE),
    FFK_VOLUMEUP = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_VOLUMEUP),
    FFK_VOLUMEDOWN = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_VOLUMEDOWN),
    FFK_KP_COMMA = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_COMMA),
    FFK_KP_EQUALSAS400 =
        FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_EQUALSAS400),

    FFK_ALTERASE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_ALTERASE),
    FFK_SYSREQ = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_SYSREQ),
    FFK_CANCEL = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_CANCEL),
    FFK_CLEAR = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_CLEAR),
    FFK_PRIOR = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_PRIOR),
    FFK_RETURN2 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_RETURN2),
    FFK_SEPARATOR = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_SEPARATOR),
    FFK_OUT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_OUT),
    FFK_OPER = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_OPER),
    FFK_CLEARAGAIN = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_CLEARAGAIN),
    FFK_CRSEL = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_CRSEL),
    FFK_EXSEL = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_EXSEL),

    FFK_KP_00 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_00),
    FFK_KP_000 = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_000),
    FFK_THOUSANDSSEPARATOR =
        FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_THOUSANDSSEPARATOR),
    FFK_DECIMALSEPARATOR =
        FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_DECIMALSEPARATOR),
    FFK_CURRENCYUNIT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_CURRENCYUNIT),
    FFK_CURRENCYSUBUNIT =
        FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_CURRENCYSUBUNIT),
    FFK_KP_LEFTPAREN = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_LEFTPAREN),
    FFK_KP_RIGHTPAREN = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_RIGHTPAREN),
    FFK_KP_LEFTBRACE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_LEFTBRACE),
    FFK_KP_RIGHTBRACE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_RIGHTBRACE),
    FFK_KP_TAB = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_TAB),
    FFK_KP_BACKSPACE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_BACKSPACE),
    FFK_KP_A = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_A),
    FFK_KP_B = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_B),
    FFK_KP_C = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_C),
    FFK_KP_D = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_D),
    FFK_KP_E = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_E),
    FFK_KP_F = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_F),
    FFK_KP_XOR = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_XOR),
    FFK_KP_POWER = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_POWER),
    FFK_KP_PERCENT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_PERCENT),
    FFK_KP_LESS = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_LESS),
    FFK_KP_GREATER = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_GREATER),
    FFK_KP_AMPERSAND = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_AMPERSAND),
    FFK_KP_DBLAMPERSAND =
        FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_DBLAMPERSAND),
    FFK_KP_VERTICALBAR =
        FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_VERTICALBAR),
    FFK_KP_DBLVERTICALBAR =
        FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_DBLVERTICALBAR),
    FFK_KP_COLON = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_COLON),
    FFK_KP_HASH = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_HASH),
    FFK_KP_SPACE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_SPACE),
    FFK_KP_AT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_AT),
    FFK_KP_EXCLAM = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_EXCLAM),
    FFK_KP_MEMSTORE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_MEMSTORE),
    FFK_KP_MEMRECALL = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_MEMRECALL),
    FFK_KP_MEMCLEAR = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_MEMCLEAR),
    FFK_KP_MEMADD = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_MEMADD),
    FFK_KP_MEMSUBTRACT =
        FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_MEMSUBTRACT),
    FFK_KP_MEMMULTIPLY =
        FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_MEMMULTIPLY),
    FFK_KP_MEMDIVIDE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_MEMDIVIDE),
    FFK_KP_PLUSMINUS = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_PLUSMINUS),
    FFK_KP_CLEAR = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_CLEAR),
    FFK_KP_CLEARENTRY = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_CLEARENTRY),
    FFK_KP_BINARY = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_BINARY),
    FFK_KP_OCTAL = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_OCTAL),
    FFK_KP_DECIMAL = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_DECIMAL),
    FFK_KP_HEXADECIMAL =
        FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KP_HEXADECIMAL),

    FFK_LCTRL = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_LCTRL),
    FFK_LSHIFT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_LSHIFT),
    FFK_LALT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_LALT),
    FFK_LGUI = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_LGUI),
    FFK_RCTRL = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_RCTRL),
    FFK_RSHIFT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_RSHIFT),
    FFK_RALT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_RALT),
    FFK_RGUI = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_RGUI),

    FFK_MODE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_MODE),

    FFK_AUDIONEXT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AUDIONEXT),
    FFK_AUDIOPREV = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AUDIOPREV),
    FFK_AUDIOSTOP = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AUDIOSTOP),
    FFK_AUDIOPLAY = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AUDIOPLAY),
    FFK_AUDIOMUTE = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AUDIOMUTE),
    FFK_MEDIASELECT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_MEDIASELECT),
    FFK_WWW = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_WWW),
    FFK_MAIL = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_MAIL),
    FFK_CALCULATOR = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_CALCULATOR),
    FFK_COMPUTER = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_COMPUTER),
    FFK_AC_SEARCH = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AC_SEARCH),
    FFK_AC_HOME = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AC_HOME),
    FFK_AC_BACK = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AC_BACK),
    FFK_AC_FORWARD = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AC_FORWARD),
    FFK_AC_STOP = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AC_STOP),
    FFK_AC_REFRESH = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AC_REFRESH),
    FFK_AC_BOOKMARKS = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_AC_BOOKMARKS),

    FFK_BRIGHTNESSDOWN =
        FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_BRIGHTNESSDOWN),
    FFK_BRIGHTNESSUP = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_BRIGHTNESSUP),
    FFK_DISPLAYSWITCH = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_DISPLAYSWITCH),
    FFK_KBDILLUMTOGGLE =
        FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KBDILLUMTOGGLE),
    FFK_KBDILLUMDOWN = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KBDILLUMDOWN),
    FFK_KBDILLUMUP = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_KBDILLUMUP),
    FFK_EJECT = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_EJECT),
    FFK_SLEEP = FF_SCANCODE_TO_KEYCODE(FF_SCANCODE_SLEEP)
};

enum
{
    FF_KEYUP = 0,
    FF_KEYDOWN
};

#endif /* _Keycodes_h */