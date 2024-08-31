/**
 * Base16 Blueish 
 *
 * @author Ben Mayoras
 *
 * Template by Rob Loach (https://robloach.net)
 * base16-h: https://github.com/robloach/base16-h
 */

#ifndef BASE16_H__
#define BASE16_H__

/**
 * A single color used for Base16.
 */
typedef struct base16_scheme_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} base16_scheme_color;

/**
 * A Base16 Scheme.
 */
typedef struct base16_scheme {
    const char *name; /** The name of the scheme. */
    base16_scheme_color base[16]; /** An array of the base16 colors for the scheme. */
} base16_scheme;

#endif  /* BASE16_H__ */

#ifndef BASE16_blueish_H__
#define BASE16_blueish_H__

/**
 * The Base16 Blueish scheme.
 *
 * By: Ben Mayoras
 */
extern const base16_scheme base16_blueish;

#endif  /* BASE16_blueish_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_blueish_IMPLEMENTATION_ONCE
#define BASE16_blueish_IMPLEMENTATION_ONCE

const base16_scheme base16_blueish = {
    .name = "Blueish",
    .base = {
        { .r = 24, .g = 36, .b = 48 },
        { .r = 36, .g = 60, .b = 84 },
        { .r = 70, .g = 41, .b = 10 },
        { .r = 97, .g = 109, .b = 120 },
        { .r = 116, .g = 175, .b = 231 },
        { .r = 200, .g = 225, .b = 248 },
        { .r = 221, .g = 234, .b = 246 },
        { .r = 143, .g = 152, .b = 160 },
        { .r = 76, .g = 229, .b = 135 },
        { .r = 246, .g = 168, .b = 92 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 195, .g = 232, .b = 141 },
        { .r = 95, .g = 209, .b = 255 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 255, .g = 132, .b = 221 },
        { .r = 187, .g = 210, .b = 232 }
    }
};

#endif  /* BASE16_blueish_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
