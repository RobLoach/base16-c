/**
 * Base16 Zenburn 
 *
 * @author elnawe
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

#ifndef BASE16_zenburn_H__
#define BASE16_zenburn_H__

/**
 * The Base16 Zenburn scheme.
 *
 * By: elnawe
 */
extern const base16_scheme base16_zenburn;

#endif  /* BASE16_zenburn_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_zenburn_IMPLEMENTATION_ONCE
#define BASE16_zenburn_IMPLEMENTATION_ONCE

const base16_scheme base16_zenburn = {
    .name = "Zenburn",
    .base = {
        { .r = 56, .g = 56, .b = 56 },
        { .r = 64, .g = 64, .b = 64 },
        { .r = 96, .g = 96, .b = 96 },
        { .r = 111, .g = 111, .b = 111 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 220, .g = 220, .b = 204 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 220, .g = 163, .b = 163 },
        { .r = 223, .g = 175, .b = 143 },
        { .r = 224, .g = 207, .b = 159 },
        { .r = 95, .g = 127, .b = 95 },
        { .r = 147, .g = 224, .b = 227 },
        { .r = 124, .g = 184, .b = 187 },
        { .r = 220, .g = 140, .b = 195 },
        { .r = 0, .g = 0, .b = 0 }
    }
};

#endif  /* BASE16_zenburn_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
