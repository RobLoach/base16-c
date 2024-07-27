/**
 * Base16 Macintosh 
 * 
 * @author Rebecca Bettencourt (http://www.kreativekorp.com)
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

#ifndef BASE16_macintosh_H__
#define BASE16_macintosh_H__

/**
 * The Base16 Macintosh scheme.
 * 
 * By: Rebecca Bettencourt (http://www.kreativekorp.com)
 */
extern const base16_scheme base16_macintosh;

#endif  /* BASE16_macintosh_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_macintosh_IMPLEMENTATION_ONCE
#define BASE16_macintosh_IMPLEMENTATION_ONCE

const base16_scheme base16_macintosh = {
    .name = "Macintosh",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 64, .g = 64, .b = 64 },
        { .r = 64, .g = 64, .b = 64 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 221, .g = 9, .b = 7 },
        { .r = 255, .g = 100, .b = 3 },
        { .r = 251, .g = 243, .b = 5 },
        { .r = 31, .g = 183, .b = 20 },
        { .r = 2, .g = 171, .b = 234 },
        { .r = 0, .g = 0, .b = 211 },
        { .r = 71, .g = 0, .b = 165 },
        { .r = 144, .g = 113, .b = 58 }
    }
};

#endif  /* BASE16_macintosh_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
