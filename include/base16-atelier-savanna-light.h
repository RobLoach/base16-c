/**
 * Base16 Atelier Savanna Light 
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

#ifndef BASE16_atelier_savanna_light_H__
#define BASE16_atelier_savanna_light_H__

/**
 * The Base16 Atelier Savanna Light scheme.
 *
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_savanna_light;

#endif  /* BASE16_atelier_savanna_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_savanna_light_IMPLEMENTATION_ONCE
#define BASE16_atelier_savanna_light_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_savanna_light = {
    .name = "Atelier Savanna Light",
    .base = {
        { .r = 236, .g = 244, .b = 238 },
        { .r = 223, .g = 231, .b = 226 },
        { .r = 135, .g = 146, .b = 138 },
        { .r = 120, .g = 135, .b = 125 },
        { .r = 95, .g = 109, .b = 100 },
        { .r = 82, .g = 96, .b = 87 },
        { .r = 35, .g = 42, .b = 37 },
        { .r = 23, .g = 28, .b = 25 },
        { .r = 177, .g = 97, .b = 57 },
        { .r = 159, .g = 113, .b = 60 },
        { .r = 160, .g = 126, .b = 59 },
        { .r = 72, .g = 153, .b = 99 },
        { .r = 28, .g = 154, .b = 160 },
        { .r = 71, .g = 140, .b = 144 },
        { .r = 85, .g = 133, .b = 155 },
        { .r = 134, .g = 116, .b = 105 }
    }
};

#endif  /* BASE16_atelier_savanna_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
