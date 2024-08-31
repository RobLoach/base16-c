/**
 * Base16 eris 
 *
 * @author ed (https://codeberg.org/ed)
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

#ifndef BASE16_eris_H__
#define BASE16_eris_H__

/**
 * The Base16 eris scheme.
 *
 * By: ed (https://codeberg.org/ed)
 */
extern const base16_scheme base16_eris;

#endif  /* BASE16_eris_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_eris_IMPLEMENTATION_ONCE
#define BASE16_eris_IMPLEMENTATION_ONCE

const base16_scheme base16_eris = {
    .name = "eris",
    .base = {
        { .r = 10, .g = 9, .b = 32 },
        { .r = 19, .g = 19, .b = 58 },
        { .r = 35, .g = 37, .b = 90 },
        { .r = 51, .g = 55, .b = 115 },
        { .r = 74, .g = 82, .b = 147 },
        { .r = 96, .g = 107, .b = 172 },
        { .r = 121, .g = 134, .b = 197 },
        { .r = 154, .g = 170, .b = 229 },
        { .r = 247, .g = 104, .b = 163 },
        { .r = 247, .g = 104, .b = 163 },
        { .r = 250, .g = 174, .b = 162 },
        { .r = 250, .g = 174, .b = 162 },
        { .r = 37, .g = 143, .b = 196 },
        { .r = 37, .g = 143, .b = 196 },
        { .r = 247, .g = 104, .b = 163 },
        { .r = 247, .g = 104, .b = 163 }
    }
};

#endif  /* BASE16_eris_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
