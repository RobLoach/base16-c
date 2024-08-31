/**
 * Base16 Atelier Forest Light 
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

#ifndef BASE16_atelier_forest_light_H__
#define BASE16_atelier_forest_light_H__

/**
 * The Base16 Atelier Forest Light scheme.
 *
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_forest_light;

#endif  /* BASE16_atelier_forest_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_forest_light_IMPLEMENTATION_ONCE
#define BASE16_atelier_forest_light_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_forest_light = {
    .name = "Atelier Forest Light",
    .base = {
        { .r = 241, .g = 239, .b = 238 },
        { .r = 230, .g = 226, .b = 224 },
        { .r = 168, .g = 161, .b = 159 },
        { .r = 156, .g = 148, .b = 145 },
        { .r = 118, .g = 110, .b = 107 },
        { .r = 104, .g = 97, .b = 94 },
        { .r = 44, .g = 36, .b = 33 },
        { .r = 27, .g = 25, .b = 24 },
        { .r = 242, .g = 44, .b = 64 },
        { .r = 223, .g = 83, .b = 32 },
        { .r = 195, .g = 132, .b = 24 },
        { .r = 123, .g = 151, .b = 38 },
        { .r = 61, .g = 151, .b = 184 },
        { .r = 64, .g = 126, .b = 231 },
        { .r = 102, .g = 102, .b = 234 },
        { .r = 195, .g = 63, .b = 243 }
    }
};

#endif  /* BASE16_atelier_forest_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
