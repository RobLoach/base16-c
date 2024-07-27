/**
 * Base16 Pasque 
 * 
 * @author Gabriel Fontes (https://github.com/Misterio77)
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

#ifndef BASE16_pasque_H__
#define BASE16_pasque_H__

/**
 * The Base16 Pasque scheme.
 * 
 * By: Gabriel Fontes (https://github.com/Misterio77)
 */
extern const base16_scheme base16_pasque;

#endif  /* BASE16_pasque_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_pasque_IMPLEMENTATION_ONCE
#define BASE16_pasque_IMPLEMENTATION_ONCE

const base16_scheme base16_pasque = {
    .name = "Pasque",
    .base = {
        { .r = 39, .g = 28, .b = 58 },
        { .r = 16, .g = 3, .b = 35 },
        { .r = 62, .g = 45, .b = 92 },
        { .r = 93, .g = 87, .b = 102 },
        { .r = 190, .g = 188, .b = 191 },
        { .r = 222, .g = 220, .b = 223 },
        { .r = 237, .g = 234, .b = 239 },
        { .r = 187, .g = 170, .b = 221 },
        { .r = 169, .g = 34, .b = 88 },
        { .r = 145, .g = 136, .b = 137 },
        { .r = 128, .g = 78, .b = 173 },
        { .r = 198, .g = 145, .b = 75 },
        { .r = 114, .g = 99, .b = 170 },
        { .r = 142, .g = 125, .b = 198 },
        { .r = 149, .g = 59, .b = 157 },
        { .r = 89, .g = 50, .b = 92 }
    }
};

#endif  /* BASE16_pasque_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
