/**
 * Base16 Atelier Seaside 
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
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

#ifndef BASE16_atelier_seaside_H__
#define BASE16_atelier_seaside_H__

/**
 * The Base16 Atelier Seaside scheme.
 *
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_seaside;

#endif  /* BASE16_atelier_seaside_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_seaside_IMPLEMENTATION_ONCE
#define BASE16_atelier_seaside_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_seaside = {
    .name = "Atelier Seaside",
    .base = {
        { .r = 19, .g = 21, .b = 19 },
        { .r = 36, .g = 41, .b = 36 },
        { .r = 94, .g = 110, .b = 94 },
        { .r = 104, .g = 125, .b = 104 },
        { .r = 128, .g = 153, .b = 128 },
        { .r = 140, .g = 166, .b = 140 },
        { .r = 207, .g = 232, .b = 207 },
        { .r = 244, .g = 251, .b = 244 },
        { .r = 230, .g = 25, .b = 60 },
        { .r = 135, .g = 113, .b = 29 },
        { .r = 152, .g = 152, .b = 27 },
        { .r = 41, .g = 163, .b = 41 },
        { .r = 25, .g = 153, .b = 179 },
        { .r = 61, .g = 98, .b = 245 },
        { .r = 173, .g = 43, .b = 238 },
        { .r = 230, .g = 25, .b = 195 }
    }
};

#endif  /* BASE16_atelier_seaside_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
