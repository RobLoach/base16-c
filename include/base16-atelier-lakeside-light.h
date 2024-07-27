/**
 * Base16 Atelier Lakeside Light 
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

#ifndef BASE16_atelier_lakeside_light_H__
#define BASE16_atelier_lakeside_light_H__

/**
 * The Base16 Atelier Lakeside Light scheme.
 * 
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_lakeside_light;

#endif  /* BASE16_atelier_lakeside_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_lakeside_light_IMPLEMENTATION_ONCE
#define BASE16_atelier_lakeside_light_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_lakeside_light = {
    .name = "Atelier Lakeside Light",
    .base = {
        { .r = 235, .g = 248, .b = 255 },
        { .r = 193, .g = 228, .b = 246 },
        { .r = 126, .g = 162, .b = 180 },
        { .r = 113, .g = 149, .b = 168 },
        { .r = 90, .g = 123, .b = 140 },
        { .r = 81, .g = 109, .b = 123 },
        { .r = 31, .g = 41, .b = 46 },
        { .r = 22, .g = 27, .b = 29 },
        { .r = 210, .g = 45, .b = 114 },
        { .r = 147, .g = 92, .b = 37 },
        { .r = 138, .g = 138, .b = 15 },
        { .r = 86, .g = 140, .b = 59 },
        { .r = 45, .g = 143, .b = 111 },
        { .r = 37, .g = 127, .b = 173 },
        { .r = 107, .g = 107, .b = 184 },
        { .r = 183, .g = 45, .b = 210 }
    }
};

#endif  /* BASE16_atelier_lakeside_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
