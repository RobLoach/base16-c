/**
 * Base16 Silk Light 
 *
 * @author Gabriel Fontes (https://github.com/Misterio77)
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

#ifndef BASE16_silk_light_H__
#define BASE16_silk_light_H__

/**
 * The Base16 Silk Light scheme.
 *
 * By: Gabriel Fontes (https://github.com/Misterio77)
 */
extern const base16_scheme base16_silk_light;

#endif  /* BASE16_silk_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_silk_light_IMPLEMENTATION_ONCE
#define BASE16_silk_light_IMPLEMENTATION_ONCE

const base16_scheme base16_silk_light = {
    .name = "Silk Light",
    .base = {
        { .r = 233, .g = 241, .b = 239 },
        { .r = 204, .g = 212, .b = 211 },
        { .r = 144, .g = 183, .b = 182 },
        { .r = 92, .g = 120, .b = 123 },
        { .r = 75, .g = 91, .b = 95 },
        { .r = 56, .g = 81, .b = 86 },
        { .r = 14, .g = 60, .b = 70 },
        { .r = 210, .g = 250, .b = 255 },
        { .r = 207, .g = 67, .b = 46 },
        { .r = 210, .g = 127, .b = 70 },
        { .r = 207, .g = 173, .b = 37 },
        { .r = 108, .g = 163, .b = 140 },
        { .r = 50, .g = 156, .b = 162 },
        { .r = 57, .g = 170, .b = 201 },
        { .r = 110, .g = 101, .b = 130 },
        { .r = 134, .g = 83, .b = 105 }
    }
};

#endif  /* BASE16_silk_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
