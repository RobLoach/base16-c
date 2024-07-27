/**
 * Base16 Cupertino 
 * 
 * @author Defman21
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

#ifndef BASE16_cupertino_H__
#define BASE16_cupertino_H__

/**
 * The Base16 Cupertino scheme.
 * 
 * By: Defman21
 */
extern const base16_scheme base16_cupertino;

#endif  /* BASE16_cupertino_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_cupertino_IMPLEMENTATION_ONCE
#define BASE16_cupertino_IMPLEMENTATION_ONCE

const base16_scheme base16_cupertino = {
    .name = "Cupertino",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 64, .g = 64, .b = 64 },
        { .r = 64, .g = 64, .b = 64 },
        { .r = 94, .g = 94, .b = 94 },
        { .r = 196, .g = 26, .b = 21 },
        { .r = 235, .g = 133, .b = 0 },
        { .r = 130, .g = 107, .b = 40 },
        { .r = 0, .g = 116, .b = 0 },
        { .r = 49, .g = 132, .b = 149 },
        { .r = 0, .g = 0, .b = 255 },
        { .r = 169, .g = 13, .b = 145 },
        { .r = 130, .g = 107, .b = 40 }
    }
};

#endif  /* BASE16_cupertino_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
