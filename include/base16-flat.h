/**
 * Base16 Flat 
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

#ifndef BASE16_flat_H__
#define BASE16_flat_H__

/**
 * The Base16 Flat scheme.
 * 
 * By: Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_flat;

#endif  /* BASE16_flat_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_flat_IMPLEMENTATION_ONCE
#define BASE16_flat_IMPLEMENTATION_ONCE

const base16_scheme base16_flat = {
    .name = "Flat",
    .base = {
        { .r = 44, .g = 62, .b = 80 },
        { .r = 52, .g = 73, .b = 94 },
        { .r = 127, .g = 140, .b = 141 },
        { .r = 149, .g = 165, .b = 166 },
        { .r = 189, .g = 195, .b = 199 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 245, .g = 245, .b = 245 },
        { .r = 236, .g = 240, .b = 241 },
        { .r = 231, .g = 76, .b = 60 },
        { .r = 230, .g = 126, .b = 34 },
        { .r = 241, .g = 196, .b = 15 },
        { .r = 46, .g = 204, .b = 113 },
        { .r = 26, .g = 188, .b = 156 },
        { .r = 52, .g = 152, .b = 219 },
        { .r = 155, .g = 89, .b = 182 },
        { .r = 190, .g = 100, .b = 60 }
    }
};

#endif  /* BASE16_flat_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
