/**
 * Base16 Gotham 
 *
 * @author Andrea Leopardi (arranged by Brett Jones)
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

#ifndef BASE16_gotham_H__
#define BASE16_gotham_H__

/**
 * The Base16 Gotham scheme.
 *
 * By: Andrea Leopardi (arranged by Brett Jones)
 */
extern const base16_scheme base16_gotham;

#endif  /* BASE16_gotham_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gotham_IMPLEMENTATION_ONCE
#define BASE16_gotham_IMPLEMENTATION_ONCE

const base16_scheme base16_gotham = {
    .name = "Gotham",
    .base = {
        { .r = 12, .g = 16, .b = 20 },
        { .r = 17, .g = 21, .b = 28 },
        { .r = 9, .g = 31, .b = 46 },
        { .r = 10, .g = 55, .b = 73 },
        { .r = 36, .g = 83, .b = 97 },
        { .r = 89, .g = 156, .b = 171 },
        { .r = 153, .g = 209, .b = 206 },
        { .r = 211, .g = 235, .b = 233 },
        { .r = 194, .g = 49, .b = 39 },
        { .r = 210, .g = 105, .b = 55 },
        { .r = 237, .g = 180, .b = 67 },
        { .r = 51, .g = 133, .b = 158 },
        { .r = 42, .g = 168, .b = 137 },
        { .r = 25, .g = 84, .b = 102 },
        { .r = 136, .g = 140, .b = 166 },
        { .r = 78, .g = 81, .b = 102 }
    }
};

#endif  /* BASE16_gotham_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
