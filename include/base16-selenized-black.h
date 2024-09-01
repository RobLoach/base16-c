/**
 * Base16 selenized-black 
 *
 * @author Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
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

#ifndef BASE16_selenized_black_H__
#define BASE16_selenized_black_H__

/**
 * The Base16 selenized-black scheme.
 *
 * By: Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
 */
extern const base16_scheme base16_selenized_black;

#endif  /* BASE16_selenized_black_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_selenized_black_IMPLEMENTATION_ONCE
#define BASE16_selenized_black_IMPLEMENTATION_ONCE

const base16_scheme base16_selenized_black = {
    .name = "selenized-black",
    .base = {
        { .r = 24, .g = 24, .b = 24 },
        { .r = 37, .g = 37, .b = 37 },
        { .r = 59, .g = 59, .b = 59 },
        { .r = 119, .g = 119, .b = 119 },
        { .r = 119, .g = 119, .b = 119 },
        { .r = 185, .g = 185, .b = 185 },
        { .r = 222, .g = 222, .b = 222 },
        { .r = 222, .g = 222, .b = 222 },
        { .r = 237, .g = 74, .b = 70 },
        { .r = 230, .g = 127, .b = 67 },
        { .r = 219, .g = 179, .b = 45 },
        { .r = 112, .g = 180, .b = 51 },
        { .r = 63, .g = 197, .b = 183 },
        { .r = 54, .g = 138, .b = 235 },
        { .r = 165, .g = 128, .b = 226 },
        { .r = 235, .g = 110, .b = 183 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 24, .g = 24, .b = 24 },
        { .r = 24, .g = 24, .b = 24 },
        { .r = 237, .g = 74, .b = 70 },
        { .r = 219, .g = 179, .b = 45 },
        { .r = 112, .g = 180, .b = 51 },
        { .r = 63, .g = 197, .b = 183 },
        { .r = 54, .g = 138, .b = 235 },
        { .r = 165, .g = 128, .b = 226 }
    },
    .system = 16
};

#endif  /* BASE16_selenized_black_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
