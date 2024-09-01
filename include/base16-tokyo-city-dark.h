/**
 * Base16 Tokyo City Dark 
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

#ifndef BASE16_tokyo_city_dark_H__
#define BASE16_tokyo_city_dark_H__

/**
 * The Base16 Tokyo City Dark scheme.
 *
 * By: Michaël Ball
 */
extern const base16_scheme base16_tokyo_city_dark;

#endif  /* BASE16_tokyo_city_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tokyo_city_dark_IMPLEMENTATION_ONCE
#define BASE16_tokyo_city_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_tokyo_city_dark = {
    .name = "Tokyo City Dark",
    .base = {
        { .r = 23, .g = 29, .b = 35 },
        { .r = 29, .g = 37, .b = 44 },
        { .r = 40, .g = 50, .b = 58 },
        { .r = 82, .g = 98, .b = 112 },
        { .r = 183, .g = 197, .b = 211 },
        { .r = 216, .g = 226, .b = 236 },
        { .r = 246, .g = 246, .b = 248 },
        { .r = 251, .g = 251, .b = 253 },
        { .r = 247, .g = 118, .b = 142 },
        { .r = 255, .g = 158, .b = 100 },
        { .r = 183, .g = 197, .b = 211 },
        { .r = 158, .g = 206, .b = 106 },
        { .r = 137, .g = 221, .b = 255 },
        { .r = 122, .g = 162, .b = 247 },
        { .r = 187, .g = 154, .b = 247 },
        { .r = 187, .g = 154, .b = 247 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 23, .g = 29, .b = 35 },
        { .r = 23, .g = 29, .b = 35 },
        { .r = 247, .g = 118, .b = 142 },
        { .r = 183, .g = 197, .b = 211 },
        { .r = 158, .g = 206, .b = 106 },
        { .r = 137, .g = 221, .b = 255 },
        { .r = 122, .g = 162, .b = 247 },
        { .r = 187, .g = 154, .b = 247 }
    },
    .system = 16
};

#endif  /* BASE16_tokyo_city_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
