/**
 * Base16 Oxocarbon Dark 
 *
 * @author shaunsingh/IBM
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

#ifndef BASE16_oxocarbon_dark_H__
#define BASE16_oxocarbon_dark_H__

/**
 * The Base16 Oxocarbon Dark scheme.
 *
 * By: shaunsingh/IBM
 */
extern const base16_scheme base16_oxocarbon_dark;

#endif  /* BASE16_oxocarbon_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_oxocarbon_dark_IMPLEMENTATION_ONCE
#define BASE16_oxocarbon_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_oxocarbon_dark = {
    .name = "Oxocarbon Dark",
    .base = {
        { .r = 22, .g = 22, .b = 22 },
        { .r = 38, .g = 38, .b = 38 },
        { .r = 57, .g = 57, .b = 57 },
        { .r = 82, .g = 82, .b = 82 },
        { .r = 221, .g = 225, .b = 230 },
        { .r = 242, .g = 244, .b = 248 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 8, .g = 189, .b = 186 },
        { .r = 61, .g = 219, .b = 217 },
        { .r = 120, .g = 169, .b = 255 },
        { .r = 238, .g = 83, .b = 150 },
        { .r = 51, .g = 177, .b = 255 },
        { .r = 255, .g = 126, .b = 182 },
        { .r = 66, .g = 190, .b = 101 },
        { .r = 190, .g = 149, .b = 255 },
        { .r = 130, .g = 207, .b = 255 }
    }
};

#endif  /* BASE16_oxocarbon_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
