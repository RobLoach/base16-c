/**
 * Base24 One Light 
 *
 * @author FredHappyface (https://github.com/fredHappyface)
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

#ifndef BASE16_one_light_H__
#define BASE16_one_light_H__

/**
 * The Base24 One Light scheme.
 *
 * By: FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_one_light;

#endif  /* BASE16_one_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_one_light_IMPLEMENTATION_ONCE
#define BASE24_one_light_IMPLEMENTATION_ONCE

const base16_scheme base24_one_light = {
    .name = "One Light",
    .base = {
        { .r = 231, .g = 231, .b = 233 },
        { .r = 223, .g = 223, .b = 225 },
        { .r = 202, .g = 202, .b = 206 },
        { .r = 160, .g = 161, .b = 167 },
        { .r = 105, .g = 108, .b = 119 },
        { .r = 56, .g = 58, .b = 66 },
        { .r = 32, .g = 34, .b = 39 },
        { .r = 9, .g = 10, .b = 11 },
        { .r = 202, .g = 18, .b = 67 },
        { .r = 193, .g = 132, .b = 1 },
        { .r = 254, .g = 187, .b = 42 },
        { .r = 80, .g = 161, .b = 79 },
        { .r = 1, .g = 132, .b = 188 },
        { .r = 64, .g = 120, .b = 242 },
        { .r = 166, .g = 38, .b = 164 },
        { .r = 152, .g = 104, .b = 1 },

        /* Base24 */
        { .r = 240, .g = 240, .b = 241 },
        { .r = 250, .g = 250, .b = 250 },
        { .r = 236, .g = 34, .b = 88 },
        { .r = 244, .g = 167, .b = 1 },
        { .r = 109, .g = 183, .b = 108 },
        { .r = 1, .g = 167, .b = 239 },
        { .r = 112, .g = 154, .b = 245 },
        { .r = 208, .g = 47, .b = 205 }
    },
    .system = 24
};

#endif  /* BASE24_one_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
