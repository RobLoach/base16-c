/**
 * Base16 3024 
 *
 * @author Jan T. Sott (http://github.com/idleberg)
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

#ifndef BASE16_3024_H__
#define BASE16_3024_H__

/**
 * The Base16 3024 scheme.
 *
 * By: Jan T. Sott (http://github.com/idleberg)
 */
extern const base16_scheme base16_3024;

#endif  /* BASE16_3024_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_3024_IMPLEMENTATION_ONCE
#define BASE16_3024_IMPLEMENTATION_ONCE

const base16_scheme base16_3024 = {
    .name = "3024",
    .base = {
        { .r = 9, .g = 3, .b = 0 },
        { .r = 58, .g = 52, .b = 50 },
        { .r = 74, .g = 69, .b = 67 },
        { .r = 92, .g = 88, .b = 85 },
        { .r = 128, .g = 125, .b = 124 },
        { .r = 165, .g = 162, .b = 162 },
        { .r = 214, .g = 213, .b = 212 },
        { .r = 247, .g = 247, .b = 247 },
        { .r = 219, .g = 45, .b = 32 },
        { .r = 232, .g = 187, .b = 208 },
        { .r = 253, .g = 237, .b = 2 },
        { .r = 1, .g = 162, .b = 82 },
        { .r = 181, .g = 228, .b = 244 },
        { .r = 1, .g = 160, .b = 228 },
        { .r = 161, .g = 106, .b = 148 },
        { .r = 205, .g = 171, .b = 83 }
    }
};

#endif  /* BASE16_3024_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
