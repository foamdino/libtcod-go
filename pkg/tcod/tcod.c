#include "include/libtcod.h"
#include "include/libtcod_int.h"

/* console enums */
enum {
        $BKGND_ADD = TCOD_BKGND_ADD,
        $BKGND_ADDA = TCOD_BKGND_ADDA,
        $BKGND_ALPH = TCOD_BKGND_ALPH,
        $BKGND_BURN = TCOD_BKGND_BURN,
        $BKGND_COLOR_BURN = TCOD_BKGND_COLOR_BURN,
        $BKGND_COLOR_DODGE = TCOD_BKGND_COLOR_DODGE,
        $BKGND_DARKEN = TCOD_BKGND_DARKEN,
        $BKGND_LIGHTEN = TCOD_BKGND_LIGHTEN,
        $BKGND_MULTIPLY = TCOD_BKGND_MULTIPLY,
        $BKGND_NONE = TCOD_BKGND_NONE,
        $BKGND_OVERLAY = TCOD_BKGND_OVERLAY,
        $BKGND_SCREEN = TCOD_BKGND_SCREEN,
        $BKGND_SET = TCOD_BKGND_SET
};

enum {
        $CHAR_ARROW2_E = TCOD_CHAR_ARROW2_E, 
        $CHAR_ARROW2_N = TCOD_CHAR_ARROW2_N, 
        $CHAR_ARROW2_S = TCOD_CHAR_ARROW2_S, 
        $CHAR_ARROW2_W = TCOD_CHAR_ARROW2_W,
        $CHAR_ARROW_E = TCOD_CHAR_ARROW_E, 
        $CHAR_ARROW_N = TCOD_CHAR_ARROW_N, 
        $CHAR_ARROW_S = TCOD_CHAR_ARROW_S, 
        $CHAR_ARROW_W = TCOD_CHAR_ARROW_W,
        $CHAR_BLOCK1 = TCOD_CHAR_BLOCK1, 
        $CHAR_BLOCK2 = TCOD_CHAR_BLOCK2, 
        $CHAR_BLOCK3 = TCOD_CHAR_BLOCK3,
        $CHAR_CHECKBOX_SET = TCOD_CHAR_CHECKBOX_SET,
        $CHAR_CHECKBOX_UNSET = TCOD_CHAR_CHECKBOX_UNSET,
        $CHAR_CROSS = TCOD_CHAR_CROSS,
        $CHAR_DARROW_H = TCOD_CHAR_DARROW_H,
        $CHAR_DARROW_V = TCOD_CHAR_DARROW_V,
        $CHAR_DCROSS = TCOD_CHAR_DCROSS,
        $CHAR_DHLINE = TCOD_CHAR_DHLINE,
        $CHAR_DNE = TCOD_CHAR_DNE, 
        $CHAR_DNW = TCOD_CHAR_DNW, 
        $CHAR_DSE = TCOD_CHAR_DSE, 
        $CHAR_DSW = TCOD_CHAR_DSW,
        $CHAR_DTEEE = TCOD_CHAR_DTEEE, 
        $CHAR_DTEEN = TCOD_CHAR_DTEEN,
        $CHAR_DTEES = TCOD_CHAR_DTEES,
        $CHAR_DTEEW = TCOD_CHAR_DTEEW, 
        $CHAR_DVLINE = TCOD_CHAR_DVLINE,
        $CHAR_HLINE = TCOD_CHAR_HLINE,
        $CHAR_NE = TCOD_CHAR_NE, 
        $CHAR_NW = TCOD_CHAR_NW, 
        $CHAR_RADIO_SET = TCOD_CHAR_RADIO_SET,
        $CHAR_RADIO_UNSET = TCOD_CHAR_RADIO_UNSET,
        $CHAR_SE = TCOD_CHAR_SE, 
        $CHAR_SUBP_DIAG = TCOD_CHAR_SUBP_DIAG,
        $CHAR_SUBP_E = TCOD_CHAR_SUBP_E,
        $CHAR_SUBP_N = TCOD_CHAR_SUBP_N,
        $CHAR_SUBP_NE = TCOD_CHAR_SUBP_NE,
        $CHAR_SUBP_NW = TCOD_CHAR_SUBP_NW,
        $CHAR_SUBP_SE = TCOD_CHAR_SUBP_SE,
        $CHAR_SUBP_SW = TCOD_CHAR_SUBP_SW,
        $CHAR_SW = TCOD_CHAR_SW,
        $CHAR_TEEE = TCOD_CHAR_TEEE, 
        $CHAR_TEEN = TCOD_CHAR_TEEN,
        $CHAR_TEES = TCOD_CHAR_TEES,
        $CHAR_TEEW = TCOD_CHAR_TEEW, 
        $CHAR_VLINE = TCOD_CHAR_VLINE
};

enum {
        $COLCTRL_1  = TCOD_COLCTRL_1, 
        $COLCTRL_2 = TCOD_COLCTRL_2, 
        $COLCTRL_3 = TCOD_COLCTRL_3, 
        $COLCTRL_4 = TCOD_COLCTRL_4, 
        $COLCTRL_5 = TCOD_COLCTRL_5,
        $COLCTRL_BACK_RGB = TCOD_COLCTRL_BACK_RGB,
        $COLCTRL_FORE_RGB = TCOD_COLCTRL_FORE_RGB,
        $COLCTRL_NUMBER = TCOD_COLCTRL_NUMBER, 
        $COLCTRL_STOP = TCOD_COLCTRL_STOP
};

enum {
        $FONT_LAYOUT_ASCII_INCOL = TCOD_FONT_LAYOUT_ASCII_INCOL,
        $FONT_LAYOUT_ASCII_INROW = TCOD_FONT_LAYOUT_ASCII_INROW,
        $FONT_LAYOUT_TCOD = TCOD_FONT_LAYOUT_TCOD,
        $FONT_TYPE_GREYSCALE = TCOD_FONT_TYPE_GREYSCALE
};

enum {
        $K_0 = TCODK_0,
        $K_1 = TCODK_1,
        $K_2 = TCODK_2,
        $K_3 = TCODK_3,
        $K_4 = TCODK_4,
        $K_5 = TCODK_5,
        $K_6 = TCODK_6,
        $K_7 = TCODK_7,
        $K_8 = TCODK_8,
        $K_9 = TCODK_9,
        $K_ALT = TCODK_ALT,
        $K_APPS = TCODK_APPS,
        $K_BACKSPACE = TCODK_BACKSPACE,
        $K_CAPSLOCK = TCODK_CAPSLOCK,
        $K_CHAR = TCODK_CHAR,
        $K_CONTROL = TCODK_CONTROL,
        $K_DELETE = TCODK_DELETE,
        $K_DOWN = TCODK_DOWN,
        $K_END = TCODK_END,
        $K_ENTER = TCODK_ENTER,
        $K_ESCAPE = TCODK_ESCAPE,
        $KEY_PRESSED = TCOD_KEY_PRESSED,
        $KEY_RELEASED = TCOD_KEY_RELEASED,
        $K_F1 = TCODK_F1,
        $K_F10 = TCODK_F10,
        $K_F11 = TCODK_F11,
        $K_F12 = TCODK_F12,
        $K_F2 = TCODK_F2,
        $K_F3 = TCODK_F3,
        $K_F4 = TCODK_F4,
        $K_F5 = TCODK_F5,
        $K_F6 = TCODK_F6,
        $K_F7 = TCODK_F7,
        $K_F8 = TCODK_F8,
        $K_F9 = TCODK_F9,
        $K_HOME = TCODK_HOME,
        $K_INSERT = TCODK_INSERT,
        $K_KP0 = TCODK_KP0,
        $K_KP1 = TCODK_KP1,
        $K_KP2 = TCODK_KP2,
        $K_KP3 = TCODK_KP3,
        $K_KP4 = TCODK_KP4,
        $K_KP5 = TCODK_KP5,
        $K_KP6 = TCODK_KP6,
        $K_KP7 = TCODK_KP7,
        $K_KP8 = TCODK_KP8,
        $K_KP9 = TCODK_KP9,
        $K_KPADD = TCODK_KPADD,
        $K_KPDEC = TCODK_KPDEC,
        $K_KPDIV = TCODK_KPDIV,
        $K_KPENTER = TCODK_KPENTER,
        $K_KPMUL = TCODK_KPMUL,
        $K_KPSUB = TCODK_KPSUB,
        $K_LEFT = TCODK_LEFT,
        $K_LWIN = TCODK_LWIN,
        $K_NONE = TCODK_NONE,
        $K_NUMLOCK = TCODK_NUMLOCK,
        $K_PAGEDOWN = TCODK_PAGEDOWN,
        $K_PAGEUP = TCODK_PAGEUP,
        $K_PAUSE = TCODK_PAUSE,
        $K_PRINTSCREEN = TCODK_PRINTSCREEN,
        $K_RIGHT = TCODK_RIGHT,
        $K_RWIN = TCODK_RWIN,
        $K_SCROLLLOCK = TCODK_SCROLLLOCK,
        $K_SHIFT = TCODK_SHIFT,
        $K_SPACE = TCODK_SPACE,
        $K_TAB = TCODK_TAB,
        $K_UP = TCODK_UP
};

/* fov enums */

enum {
	$FOV_BASIC = FOV_BASIC,          
	$FOV_DIAMOND = FOV_DIAMOND,        
	$FOV_SHADOW = FOV_SHADOW,         
	$FOV_PERMISSIVE_0 = FOV_PERMISSIVE_0,   
	$FOV_PERMISSIVE_1 = FOV_PERMISSIVE_1,   
	$FOV_PERMISSIVE_2 = FOV_PERMISSIVE_2,   
	$FOV_PERMISSIVE_3 = FOV_PERMISSIVE_3,   
	$FOV_PERMISSIVE_4 = FOV_PERMISSIVE_4,   
	$FOV_PERMISSIVE_5 = FOV_PERMISSIVE_5,   
	$FOV_PERMISSIVE_6 = FOV_PERMISSIVE_6,   
	$FOV_PERMISSIVE_7 = FOV_PERMISSIVE_7,   
	$FOV_PERMISSIVE_8 = FOV_PERMISSIVE_8,   
	$FOV_RESTRICTIVE = FOV_RESTRICTIVE,    
	$NB_FOV_ALGORITHMS = NB_FOV_ALGORITHMS   
};

/* random enums */

enum {
        $RNG_MT = TCOD_RNG_MT,
        $RNG_CMWC = TCOD_RNG_CMWC
};




enum {
	$TYPE_NONE = TCOD_TYPE_NONE, 
	$TYPE_BOOL = TCOD_TYPE_BOOL,
	$TYPE_CHAR = TCOD_TYPE_CHAR,
	$TYPE_INT = TCOD_TYPE_INT,
	$TYPE_FLOAT = TCOD_TYPE_FLOAT,
	$TYPE_STRING = TCOD_TYPE_STRING,
	$TYPE_COLOR = TCOD_TYPE_COLOR,
	$TYPE_DICE = TCOD_TYPE_DICE,
	$TYPE_VALUELIST00 = TCOD_TYPE_VALUELIST00,
	$TYPE_VALUELIST01 = TCOD_TYPE_VALUELIST01,
	$TYPE_VALUELIST02 = TCOD_TYPE_VALUELIST02,
	$TYPE_VALUELIST03 = TCOD_TYPE_VALUELIST03,
	$TYPE_VALUELIST04 = TCOD_TYPE_VALUELIST04,
	$TYPE_VALUELIST05 = TCOD_TYPE_VALUELIST05,
	$TYPE_VALUELIST06 = TCOD_TYPE_VALUELIST06,
	$TYPE_VALUELIST07 = TCOD_TYPE_VALUELIST07,
	$TYPE_VALUELIST08 = TCOD_TYPE_VALUELIST08,
	$TYPE_VALUELIST09 = TCOD_TYPE_VALUELIST09,
	$TYPE_VALUELIST10 = TCOD_TYPE_VALUELIST10,
	$TYPE_VALUELIST11 = TCOD_TYPE_VALUELIST11,
	$TYPE_VALUELIST12 = TCOD_TYPE_VALUELIST12,
	$TYPE_VALUELIST13 = TCOD_TYPE_VALUELIST13,
	$TYPE_VALUELIST14 = TCOD_TYPE_VALUELIST14,
	$TYPE_VALUELIST15 = TCOD_TYPE_VALUELIST15,
	$TYPE_CUSTOM00 = TCOD_TYPE_CUSTOM00,
	$TYPE_CUSTOM01 = TCOD_TYPE_CUSTOM01,
	$TYPE_CUSTOM02 = TCOD_TYPE_CUSTOM02,
	$TYPE_CUSTOM03 = TCOD_TYPE_CUSTOM03,
	$TYPE_CUSTOM04 = TCOD_TYPE_CUSTOM04,
	$TYPE_CUSTOM05 = TCOD_TYPE_CUSTOM05,
	$TYPE_CUSTOM06 = TCOD_TYPE_CUSTOM06,
	$TYPE_CUSTOM07 = TCOD_TYPE_CUSTOM07,
	$TYPE_CUSTOM08 = TCOD_TYPE_CUSTOM08,
	$TYPE_CUSTOM09 = TCOD_TYPE_CUSTOM09,
	$TYPE_CUSTOM10 = TCOD_TYPE_CUSTOM10,
	$TYPE_CUSTOM11 = TCOD_TYPE_CUSTOM11,
	$TYPE_CUSTOM12 = TCOD_TYPE_CUSTOM12,
	$TYPE_CUSTOM13 = TCOD_TYPE_CUSTOM13,
	$TYPE_CUSTOM14 = TCOD_TYPE_CUSTOM14,
	$TYPE_CUSTOM15 = TCOD_TYPE_CUSTOM15,
	$TYPE_LIST = TCOD_TYPE_LIST
};

/* noise enum */

enum {
	$NOISE_PERLIN = TCOD_NOISE_PERLIN,
	$NOISE_SIMPLEX = TCOD_NOISE_SIMPLEX,
	$NOISE_WAVELET = TCOD_NOISE_WAVELET,
	$NOISE_DEFAULT = TCOD_NOISE_DEFAULT
};

/* renderer enum */
enum {
	$RENDERER_GLSL = TCOD_RENDERER_GLSL,   
	$RENDERER_OPENGL = TCOD_RENDERER_OPENGL, 
	$RENDERER_SDL = TCOD_RENDERER_SDL,    
	$NB_RENDERERS = TCOD_NB_RENDERERS
};


/* alignment enum */
enum  {
	$LEFT = TCOD_LEFT,  
	$RIGHT = TCOD_RIGHT,  
	$CENTER = TCOD_CENTER  
};


