/**
 * Base16 Horizon Dark 
 *
 * @author Michaël Ball (http://github.com/michael-ball/)
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

#ifndef BASE16_horizon_dark_H__
#define BASE16_horizon_dark_H__

/**
 * The Base16 Horizon Dark scheme.
 *
 * By: Michaël Ball (http://github.com/michael-ball/)
 */
extern const base16_scheme base16_horizon_dark;

#endif  /* BASE16_horizon_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_horizon_dark_IMPLEMENTATION_ONCE
#define BASE16_horizon_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_horizon_dark = {
    .name = "Horizon Dark",
    .base = {
        { .r = 28, .g = 30, .b = 38 },
        { .r = 35, .g = 37, .b = 48 },
        { .r = 46, .g = 48, .b = 62 },
        { .r = 111, .g = 111, .b = 112 },
        { .r = 157, .g = 160, .b = 162 },
        { .r = 203, .g = 206, .b = 208 },
        { .r = 220, .g = 223, .b = 228 },
        { .r = 227, .g = 230, .b = 238 },
        { .r = 233, .g = 60, .b = 88 },
        { .r = 229, .g = 141, .b = 125 },
        { .r = 239, .g = 185, .b = 147 },
        { .r = 239, .g = 175, .b = 142 },
        { .r = 36, .g = 168, .b = 180 },
        { .r = 223, .g = 82, .b = 115 },
        { .r = 176, .g = 114, .b = 209 },
        { .r = 228, .g = 163, .b = 130 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 28, .g = 30, .b = 38 },
        { .r = 28, .g = 30, .b = 38 },
        { .r = 233, .g = 60, .b = 88 },
        { .r = 239, .g = 185, .b = 147 },
        { .r = 239, .g = 175, .b = 142 },
        { .r = 36, .g = 168, .b = 180 },
        { .r = 223, .g = 82, .b = 115 },
        { .r = 176, .g = 114, .b = 209 }
    },
    .system = 16
};

#endif  /* BASE16_horizon_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
