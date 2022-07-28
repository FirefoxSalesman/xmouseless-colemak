
/* the rate at which the mouse moves in Hz
 * does not change its speed */
static const unsigned int move_rate = 50;

/* the default speed of the mouse pointer
 * in pixels per second */
static const unsigned int default_speed = 500;

/* changes the speed of the mouse pointer */
static SpeedBinding speed_bindings[] = {
    /* key             speed */  
    { XK_Alt_L,        1500 },
    { XK_Shift_L,    100  },
    { XK_space,        10   },
};

/* moves the mouse pointer
 * you can also add any other direction (e.g. diagonals) */
static MoveBinding move_bindings[] = {
    /* key         x      y */
    { XK_h,        -1,     0 },
    { XK_i,         1,     0 },
    { XK_e,         0,    -1 },
    { XK_n,         0,     1 },
};

/* 1: left
 * 2: middle
 * 3: right */
static ClickBinding click_bindings[] = {
    /* key         button */  
    { XK_a,        1 },
    { XK_r,        2 },
    { XK_s,        3 },
};

/* scrolls up, down, left and right
 * a higher value scrolls faster */
static ScrollBinding scroll_bindings[] = {
    /* key        x      y */
    { XK_b,        0 ,    25 },
    { XK_f,        0 ,   -25 },
    { XK_plus,     0 ,    80 },
    { XK_minus,    0 ,   -80 },
    { XK_u,        25,    0  },
    { XK_d,       -25,    0  },
};

/* exits on key release which allows click and exit with one key */
static KeySym exit_keys[] = {
    XK_Escape
};
