/**
 * Base16 Atelier Seaside Light 
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

#ifndef BASE16_atelier_seaside_light_H__
#define BASE16_atelier_seaside_light_H__

/**
 * The Base16 Atelier Seaside Light scheme.
 *
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_seaside_light;

#endif  /* BASE16_atelier_seaside_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_seaside_light_IMPLEMENTATION_ONCE
#define BASE16_atelier_seaside_light_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_seaside_light = {
    .name = "Atelier Seaside Light",
    .base = {
        { .r = 244, .g = 251, .b = 244 },
        { .r = 207, .g = 232, .b = 207 },
        { .r = 140, .g = 166, .b = 140 },
        { .r = 128, .g = 153, .b = 128 },
        { .r = 104, .g = 125, .b = 104 },
        { .r = 94, .g = 110, .b = 94 },
        { .r = 36, .g = 41, .b = 36 },
        { .r = 19, .g = 21, .b = 19 },
        { .r = 230, .g = 25, .b = 60 },
        { .r = 135, .g = 113, .b = 29 },
        { .r = 152, .g = 152, .b = 27 },
        { .r = 41, .g = 163, .b = 41 },
        { .r = 25, .g = 153, .b = 179 },
        { .r = 61, .g = 98, .b = 245 },
        { .r = 173, .g = 43, .b = 238 },
        { .r = 230, .g = 25, .b = 195 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 244, .g = 251, .b = 244 },
        { .r = 244, .g = 251, .b = 244 },
        { .r = 230, .g = 25, .b = 60 },
        { .r = 152, .g = 152, .b = 27 },
        { .r = 41, .g = 163, .b = 41 },
        { .r = 25, .g = 153, .b = 179 },
        { .r = 61, .g = 98, .b = 245 },
        { .r = 173, .g = 43, .b = 238 }
    },
    .system = 16
};

#endif  /* BASE16_atelier_seaside_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
