/**
 * Base16 Atelier Dune 
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

#ifndef BASE16_atelier_dune_H__
#define BASE16_atelier_dune_H__

/**
 * The Base16 Atelier Dune scheme.
 * 
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_dune;

#endif  /* BASE16_atelier_dune_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_dune_IMPLEMENTATION_ONCE
#define BASE16_atelier_dune_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_dune = {
    .name = "Atelier Dune",
    .base = {
        { .r = 32, .g = 32, .b = 29 },
        { .r = 41, .g = 40, .b = 36 },
        { .r = 110, .g = 107, .b = 94 },
        { .r = 125, .g = 122, .b = 104 },
        { .r = 153, .g = 149, .b = 128 },
        { .r = 166, .g = 162, .b = 140 },
        { .r = 232, .g = 228, .b = 207 },
        { .r = 254, .g = 251, .b = 236 },
        { .r = 215, .g = 55, .b = 55 },
        { .r = 182, .g = 86, .b = 17 },
        { .r = 174, .g = 149, .b = 19 },
        { .r = 96, .g = 172, .b = 57 },
        { .r = 31, .g = 173, .b = 131 },
        { .r = 102, .g = 132, .b = 225 },
        { .r = 184, .g = 84, .b = 212 },
        { .r = 212, .g = 53, .b = 82 }
    }
};

#endif  /* BASE16_atelier_dune_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
