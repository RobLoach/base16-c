/**
 * Base16 Marrakesh 
 * 
 * @author Alexandre Gavioli (http://github.com/Alexx2/)
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

#ifndef BASE16_marrakesh_H__
#define BASE16_marrakesh_H__

/**
 * The Base16 Marrakesh scheme.
 * 
 * By: Alexandre Gavioli (http://github.com/Alexx2/)
 */
extern const base16_scheme base16_marrakesh;

#endif  /* BASE16_marrakesh_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_marrakesh_IMPLEMENTATION_ONCE
#define BASE16_marrakesh_IMPLEMENTATION_ONCE

const base16_scheme base16_marrakesh = {
    .name = "Marrakesh",
    .base = {
        { .r = 32, .g = 22, .b = 2 },
        { .r = 48, .g = 46, .b = 0 },
        { .r = 95, .g = 91, .b = 23 },
        { .r = 108, .g = 104, .b = 35 },
        { .r = 134, .g = 129, .b = 59 },
        { .r = 148, .g = 142, .b = 72 },
        { .r = 204, .g = 195, .b = 122 },
        { .r = 250, .g = 240, .b = 165 },
        { .r = 195, .g = 83, .b = 89 },
        { .r = 179, .g = 97, .b = 68 },
        { .r = 168, .g = 131, .b = 57 },
        { .r = 24, .g = 151, .b = 78 },
        { .r = 117, .g = 167, .b = 56 },
        { .r = 71, .g = 124, .b = 161 },
        { .r = 136, .g = 104, .b = 179 },
        { .r = 179, .g = 88, .b = 142 }
    }
};

#endif  /* BASE16_marrakesh_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
