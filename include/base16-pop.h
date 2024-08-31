/**
 * Base16 Pop 
 *
 * @author Chris Kempson (http://chriskempson.com)
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

#ifndef BASE16_pop_H__
#define BASE16_pop_H__

/**
 * The Base16 Pop scheme.
 *
 * By: Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_pop;

#endif  /* BASE16_pop_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_pop_IMPLEMENTATION_ONCE
#define BASE16_pop_IMPLEMENTATION_ONCE

const base16_scheme base16_pop = {
    .name = "Pop",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 32, .g = 32, .b = 32 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 80, .g = 80, .b = 80 },
        { .r = 176, .g = 176, .b = 176 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 235, .g = 0, .b = 138 },
        { .r = 242, .g = 147, .b = 51 },
        { .r = 248, .g = 202, .b = 18 },
        { .r = 55, .g = 179, .b = 73 },
        { .r = 0, .g = 170, .b = 187 },
        { .r = 14, .g = 90, .b = 148 },
        { .r = 179, .g = 30, .b = 141 },
        { .r = 122, .g = 45, .b = 0 }
    }
};

#endif  /* BASE16_pop_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
