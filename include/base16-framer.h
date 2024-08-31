/**
 * Base16 Framer 
 *
 * @author Framer (Maintained by Jesse Hoyos)
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

#ifndef BASE16_framer_H__
#define BASE16_framer_H__

/**
 * The Base16 Framer scheme.
 *
 * By: Framer (Maintained by Jesse Hoyos)
 */
extern const base16_scheme base16_framer;

#endif  /* BASE16_framer_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_framer_IMPLEMENTATION_ONCE
#define BASE16_framer_IMPLEMENTATION_ONCE

const base16_scheme base16_framer = {
    .name = "Framer",
    .base = {
        { .r = 24, .g = 24, .b = 24 },
        { .r = 21, .g = 21, .b = 21 },
        { .r = 70, .g = 70, .b = 70 },
        { .r = 116, .g = 116, .b = 116 },
        { .r = 185, .g = 185, .b = 185 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 238, .g = 238, .b = 238 },
        { .r = 253, .g = 136, .b = 107 },
        { .r = 252, .g = 71, .b = 105 },
        { .r = 254, .g = 203, .b = 110 },
        { .r = 50, .g = 204, .b = 220 },
        { .r = 172, .g = 221, .b = 253 },
        { .r = 32, .g = 188, .b = 252 },
        { .r = 186, .g = 140, .b = 252 },
        { .r = 177, .g = 95, .b = 74 }
    }
};

#endif  /* BASE16_framer_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
