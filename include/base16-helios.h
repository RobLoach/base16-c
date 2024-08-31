/**
 * Base16 Helios 
 *
 * @author Alex Meyer (https://github.com/reyemxela)
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

#ifndef BASE16_helios_H__
#define BASE16_helios_H__

/**
 * The Base16 Helios scheme.
 *
 * By: Alex Meyer (https://github.com/reyemxela)
 */
extern const base16_scheme base16_helios;

#endif  /* BASE16_helios_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_helios_IMPLEMENTATION_ONCE
#define BASE16_helios_IMPLEMENTATION_ONCE

const base16_scheme base16_helios = {
    .name = "Helios",
    .base = {
        { .r = 29, .g = 32, .b = 33 },
        { .r = 56, .g = 60, .b = 62 },
        { .r = 83, .g = 88, .b = 91 },
        { .r = 111, .g = 117, .b = 121 },
        { .r = 205, .g = 205, .b = 205 },
        { .r = 213, .g = 213, .b = 213 },
        { .r = 221, .g = 221, .b = 221 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 215, .g = 38, .b = 56 },
        { .r = 235, .g = 132, .b = 19 },
        { .r = 241, .g = 157, .b = 26 },
        { .r = 136, .g = 185, .b = 45 },
        { .r = 27, .g = 165, .b = 149 },
        { .r = 30, .g = 139, .b = 172 },
        { .r = 190, .g = 66, .b = 100 },
        { .r = 200, .g = 94, .b = 13 }
    }
};

#endif  /* BASE16_helios_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
