/**
 * Base16 Unikitty Dark 
 *
 * @author Josh W Lewis (@joshwlewis)
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

#ifndef BASE16_unikitty_dark_H__
#define BASE16_unikitty_dark_H__

/**
 * The Base16 Unikitty Dark scheme.
 *
 * By: Josh W Lewis (@joshwlewis)
 */
extern const base16_scheme base16_unikitty_dark;

#endif  /* BASE16_unikitty_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_unikitty_dark_IMPLEMENTATION_ONCE
#define BASE16_unikitty_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_unikitty_dark = {
    .name = "Unikitty Dark",
    .base = {
        { .r = 46, .g = 42, .b = 49 },
        { .r = 74, .g = 70, .b = 77 },
        { .r = 102, .g = 99, .b = 105 },
        { .r = 131, .g = 128, .b = 133 },
        { .r = 159, .g = 157, .b = 162 },
        { .r = 188, .g = 186, .b = 190 },
        { .r = 216, .g = 215, .b = 218 },
        { .r = 245, .g = 244, .b = 247 },
        { .r = 216, .g = 19, .b = 127 },
        { .r = 214, .g = 84, .b = 7 },
        { .r = 220, .g = 138, .b = 14 },
        { .r = 23, .g = 173, .b = 152 },
        { .r = 20, .g = 155, .b = 218 },
        { .r = 121, .g = 106, .b = 245 },
        { .r = 187, .g = 96, .b = 234 },
        { .r = 199, .g = 32, .b = 202 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 46, .g = 42, .b = 49 },
        { .r = 46, .g = 42, .b = 49 },
        { .r = 216, .g = 19, .b = 127 },
        { .r = 220, .g = 138, .b = 14 },
        { .r = 23, .g = 173, .b = 152 },
        { .r = 20, .g = 155, .b = 218 },
        { .r = 121, .g = 106, .b = 245 },
        { .r = 187, .g = 96, .b = 234 }
    },
    .system = 16
};

#endif  /* BASE16_unikitty_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
