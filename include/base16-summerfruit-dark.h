/**
 * Base16 Summerfruit Dark 
 *
 * @author Christopher Corley (http://christop.club/)
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

#ifndef BASE16_summerfruit_dark_H__
#define BASE16_summerfruit_dark_H__

/**
 * The Base16 Summerfruit Dark scheme.
 *
 * By: Christopher Corley (http://christop.club/)
 */
extern const base16_scheme base16_summerfruit_dark;

#endif  /* BASE16_summerfruit_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_summerfruit_dark_IMPLEMENTATION_ONCE
#define BASE16_summerfruit_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_summerfruit_dark = {
    .name = "Summerfruit Dark",
    .base = {
        { .r = 21, .g = 21, .b = 21 },
        { .r = 32, .g = 32, .b = 32 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 80, .g = 80, .b = 80 },
        { .r = 176, .g = 176, .b = 176 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 0, .b = 134 },
        { .r = 253, .g = 137, .b = 0 },
        { .r = 171, .g = 168, .b = 0 },
        { .r = 0, .g = 201, .b = 24 },
        { .r = 31, .g = 170, .b = 170 },
        { .r = 55, .g = 119, .b = 230 },
        { .r = 173, .g = 0, .b = 161 },
        { .r = 204, .g = 102, .b = 51 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 21, .g = 21, .b = 21 },
        { .r = 21, .g = 21, .b = 21 },
        { .r = 255, .g = 0, .b = 134 },
        { .r = 171, .g = 168, .b = 0 },
        { .r = 0, .g = 201, .b = 24 },
        { .r = 31, .g = 170, .b = 170 },
        { .r = 55, .g = 119, .b = 230 },
        { .r = 173, .g = 0, .b = 161 }
    },
    .system = 16
};

#endif  /* BASE16_summerfruit_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
