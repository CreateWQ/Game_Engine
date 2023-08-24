#pragma once 

// From glfw3.h
/*! @defgroup keys Keyboard keys 
*   @brief Keyboard key IDs
*/
/* Printable keys */
#define BN_KEY_SPACE              32
#define BN_KEY_APOSTROPHE         39  /* ' */
#define BN_KEY_COMMA              44  /* , */
#define BN_KEY_MINUS              45  /* - */
#define BN_KEY_PERIOD             46  /* . */
#define BN_KEY_SLASH              47  /* / */
#define BN_KEY_0                  48
#define BN_KEY_1                  49
#define BN_KEY_2                  50
#define BN_KEY_3                  51
#define BN_KEY_4                  52
#define BN_KEY_5                  53
#define BN_KEY_6                  54
#define BN_KEY_7                  55
#define BN_KEY_8                  56
#define BN_KEY_9                  57
#define BN_KEY_SEMICOLON          59  /* ; */
#define BN_KEY_EQUAL              61  /* = */
#define BN_KEY_A                  65
#define BN_KEY_B                  66
#define BN_KEY_C                  67
#define BN_KEY_D                  68
#define BN_KEY_E                  69
#define BN_KEY_F                  70
#define BN_KEY_G                  71
#define BN_KEY_H                  72
#define BN_KEY_I                  73
#define BN_KEY_J                  74
#define BN_KEY_K                  75
#define BN_KEY_L                  76
#define BN_KEY_M                  77
#define BN_KEY_N                  78
#define BN_KEY_O                  79
#define BN_KEY_P                  80
#define BN_KEY_Q                  81
#define BN_KEY_R                  82
#define BN_KEY_S                  83
#define BN_KEY_T                  84
#define BN_KEY_U                  85
#define BN_KEY_V                  86
#define BN_KEY_W                  87
#define BN_KEY_X                  88
#define BN_KEY_Y                  89
#define BN_KEY_Z                  90
#define BN_KEY_LEFT_BRACKET       91  /* [ */
#define BN_KEY_BACKSLASH          92  /* \ */
#define BN_KEY_RIGHT_BRACKET      93  /* ] */
#define BN_KEY_GRAVE_ACCENT       96  /* ` */
#define BN_KEY_WORLD_1            161 /* non-US #1 */
#define BN_KEY_WORLD_2            162 /* non-US #2 */

/* Function keys */
#define BN_KEY_ESCAPE             256
#define BN_KEY_ENTER              257
#define BN_KEY_TAB                258
#define BN_KEY_BACKSPACE          259
#define BN_KEY_INSERT             260
#define BN_KEY_DELETE             261
#define BN_KEY_RIGHT              262
#define BN_KEY_LEFT               263
#define BN_KEY_DOWN               264
#define BN_KEY_UP                 265
#define BN_KEY_PAGE_UP            266
#define BN_KEY_PAGE_DOWN          267
#define BN_KEY_HOME               268
#define BN_KEY_END                269
#define BN_KEY_CAPS_LOCK          280
#define BN_KEY_SCROLL_LOCK        281
#define BN_KEY_NUM_LOCK           282
#define BN_KEY_PRINT_SCREEN       283
#define BN_KEY_PAUSE              284
#define BN_KEY_F1                 290
#define BN_KEY_F2                 291
#define BN_KEY_F3                 292
#define BN_KEY_F4                 293
#define BN_KEY_F5                 294
#define BN_KEY_F6                 295
#define BN_KEY_F7                 296
#define BN_KEY_F8                 297
#define BN_KEY_F9                 298
#define BN_KEY_F10                299
#define BN_KEY_F11                300
#define BN_KEY_F12                301
#define BN_KEY_F13                302
#define BN_KEY_F14                303
#define BN_KEY_F15                304
#define BN_KEY_F16                305
#define BN_KEY_F17                306
#define BN_KEY_F18                307
#define BN_KEY_F19                308
#define BN_KEY_F20                309
#define BN_KEY_F21                310
#define BN_KEY_F22                311
#define BN_KEY_F23                312
#define BN_KEY_F24                313
#define BN_KEY_F25                314
#define BN_KEY_KP_0               320
#define BN_KEY_KP_1               321
#define BN_KEY_KP_2               322
#define BN_KEY_KP_3               323
#define BN_KEY_KP_4               324
#define BN_KEY_KP_5               325
#define BN_KEY_KP_6               326
#define BN_KEY_KP_7               327
#define BN_KEY_KP_8               328
#define BN_KEY_KP_9               329
#define BN_KEY_KP_DECIMAL         330
#define BN_KEY_KP_DIVIDE          331
#define BN_KEY_KP_MULTIPLY        332
#define BN_KEY_KP_SUBTRACT        333
#define BN_KEY_KP_ADD             334
#define BN_KEY_KP_ENTER           335
#define BN_KEY_KP_EQUAL           336
#define BN_KEY_LEFT_SHIFT         340
#define BN_KEY_LEFT_CONTROL       341
#define BN_KEY_LEFT_ALT           342
#define BN_KEY_LEFT_SUPER         343
#define BN_KEY_RIGHT_SHIFT        344
#define BN_KEY_RIGHT_CONTROL      345
#define BN_KEY_RIGHT_ALT          346
#define BN_KEY_RIGHT_SUPER        347
#define BN_KEY_MENU               348