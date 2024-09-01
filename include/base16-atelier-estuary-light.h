/**
 * Base16 Atelier Estuary Light 
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
 *
 * Template by Rob Loach (https://robloach.net)
 * base16-h: https://github.com/robloach/base16-h
 */

#ifndef BASE16_COLOR_H__
#define BASE16_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct base16_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} base16_color;

#endif /* BASE16_COLOR_H__ */

#ifndef BASE16_SCHEME_H__
#define BASE16_SCHEME_H__

/**
 * A Base16 Scheme.
 */
typedef struct base16_scheme {
    const char *name; /** The name of the scheme. */
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    int system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_atelier_estuary_light_H__
#define BASE16_atelier_estuary_light_H__

/**
 * The Base16 Atelier Estuary Light scheme.
 *
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_estuary_light;

#endif  /* BASE16_atelier_estuary_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_estuary_light_IMPLEMENTATION_ONCE
#define BASE16_atelier_estuary_light_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_estuary_light = {
    .name = "Atelier Estuary Light",
    .base = {
        { .r = 244, .g = 243, .b = 236 },
        { .r = 231, .g = 230, .b = 223 },
        { .r = 146, .g = 145, .b = 129 },
        { .r = 135, .g = 133, .b = 115 },
        { .r = 108, .g = 107, .b = 90 },
        { .r = 95, .g = 94, .b = 78 },
        { .r = 48, .g = 47, .b = 39 },
        { .r = 34, .g = 34, .b = 27 },
        { .r = 186, .g = 98, .b = 54 },
        { .r = 174, .g = 115, .b = 19 },
        { .r = 165, .g = 152, .b = 13 },
        { .r = 125, .g = 151, .b = 38 },
        { .r = 91, .g = 157, .b = 72 },
        { .r = 54, .g = 161, .b = 102 },
        { .r = 95, .g = 145, .b = 130 },
        { .r = 157, .g = 108, .b = 124 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 244, .g = 243, .b = 236 },
        { .r = 244, .g = 243, .b = 236 },
        { .r = 186, .g = 98, .b = 54 },
        { .r = 165, .g = 152, .b = 13 },
        { .r = 125, .g = 151, .b = 38 },
        { .r = 91, .g = 157, .b = 72 },
        { .r = 54, .g = 161, .b = 102 },
        { .r = 95, .g = 145, .b = 130 }
    },
    .system = 16
};

#endif  /* BASE16_atelier_estuary_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
