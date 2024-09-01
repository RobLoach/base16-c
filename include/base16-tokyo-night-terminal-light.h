/**
 * Base16 Tokyo Night Terminal Light 
 *
 * @author Michaël Ball
 *
 * Template by Rob Loach (https://robloach.net)
 * base16-h: https://github.com/robloach/base16-h
 */

#ifndef BASE16_COLOR_H__
#define BASE16_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct base16_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} base16_color;

#endif /* BASE16_COLOR_H__ */

#ifndef BASE16_SCHEME_H__
#define BASE16_SCHEME_H__

/**
 * A Base16 Scheme.
 */
typedef struct base16_scheme {
    const char *name; /** The name of the scheme. */
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    int system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_tokyo_night_terminal_light_H__
#define BASE16_tokyo_night_terminal_light_H__

/**
 * The Base16 Tokyo Night Terminal Light scheme.
 *
 * By: Michaël Ball
 */
extern const base16_scheme base16_tokyo_night_terminal_light;

#endif  /* BASE16_tokyo_night_terminal_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tokyo_night_terminal_light_IMPLEMENTATION_ONCE
#define BASE16_tokyo_night_terminal_light_IMPLEMENTATION_ONCE

const base16_scheme base16_tokyo_night_terminal_light = {
    .name = "Tokyo Night Terminal Light",
    .base = {
        { .r = 213, .g = 214, .b = 219 },
        { .r = 203, .g = 204, .b = 209 },
        { .r = 223, .g = 224, .b = 229 },
        { .r = 150, .g = 153, .b = 163 },
        { .r = 76, .g = 80, .b = 94 },
        { .r = 76, .g = 80, .b = 94 },
        { .r = 26, .g = 27, .b = 38 },
        { .r = 26, .g = 27, .b = 38 },
        { .r = 140, .g = 67, .b = 81 },
        { .r = 150, .g = 80, .b = 39 },
        { .r = 143, .g = 94, .b = 21 },
        { .r = 51, .g = 99, .b = 92 },
        { .r = 15, .g = 75, .b = 110 },
        { .r = 52, .g = 84, .b = 138 },
        { .r = 90, .g = 74, .b = 120 },
        { .r = 101, .g = 82, .b = 89 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 213, .g = 214, .b = 219 },
        { .r = 213, .g = 214, .b = 219 },
        { .r = 140, .g = 67, .b = 81 },
        { .r = 143, .g = 94, .b = 21 },
        { .r = 51, .g = 99, .b = 92 },
        { .r = 15, .g = 75, .b = 110 },
        { .r = 52, .g = 84, .b = 138 },
        { .r = 90, .g = 74, .b = 120 }
    },
    .system = 16
};

#endif  /* BASE16_tokyo_night_terminal_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
