/**
 * Base16 Darcula 
 *
 * @author jetbrains
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

#ifndef BASE16_darcula_H__
#define BASE16_darcula_H__

/**
 * The Base16 Darcula scheme.
 *
 * By: jetbrains
 */
extern const base16_scheme base16_darcula;

#endif  /* BASE16_darcula_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_darcula_IMPLEMENTATION_ONCE
#define BASE16_darcula_IMPLEMENTATION_ONCE

const base16_scheme base16_darcula = {
    .name = "Darcula",
    .base = {
        { .r = 43, .g = 43, .b = 43 },
        { .r = 50, .g = 50, .b = 50 },
        { .r = 50, .g = 50, .b = 50 },
        { .r = 96, .g = 99, .b = 102 },
        { .r = 164, .g = 163, .b = 163 },
        { .r = 169, .g = 183, .b = 198 },
        { .r = 255, .g = 198, .b = 109 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 78, .g = 173, .b = 229 },
        { .r = 104, .g = 151, .b = 87 },
        { .r = 187, .g = 181, .b = 41 },
        { .r = 106, .g = 135, .b = 89 },
        { .r = 98, .g = 151, .b = 85 },
        { .r = 152, .g = 118, .b = 170 },
        { .r = 204, .g = 120, .b = 50 },
        { .r = 128, .g = 128, .b = 128 }
    }
};

#endif  /* BASE16_darcula_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
