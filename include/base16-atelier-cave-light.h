/**
 * Base16 Atelier Cave Light 
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

#ifndef BASE16_atelier_cave_light_H__
#define BASE16_atelier_cave_light_H__

/**
 * The Base16 Atelier Cave Light scheme.
 *
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_cave_light;

#endif  /* BASE16_atelier_cave_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_cave_light_IMPLEMENTATION_ONCE
#define BASE16_atelier_cave_light_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_cave_light = {
    .name = "Atelier Cave Light",
    .base = {
        { .r = 239, .g = 236, .b = 244 },
        { .r = 226, .g = 223, .b = 231 },
        { .r = 139, .g = 135, .b = 146 },
        { .r = 126, .g = 120, .b = 135 },
        { .r = 101, .g = 95, .b = 109 },
        { .r = 88, .g = 82, .b = 96 },
        { .r = 38, .g = 35, .b = 42 },
        { .r = 25, .g = 23, .b = 28 },
        { .r = 190, .g = 70, .b = 120 },
        { .r = 170, .g = 87, .b = 60 },
        { .r = 160, .g = 110, .b = 59 },
        { .r = 42, .g = 146, .b = 146 },
        { .r = 57, .g = 139, .b = 198 },
        { .r = 87, .g = 109, .b = 219 },
        { .r = 149, .g = 90, .b = 231 },
        { .r = 191, .g = 64, .b = 191 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 239, .g = 236, .b = 244 },
        { .r = 239, .g = 236, .b = 244 },
        { .r = 190, .g = 70, .b = 120 },
        { .r = 160, .g = 110, .b = 59 },
        { .r = 42, .g = 146, .b = 146 },
        { .r = 57, .g = 139, .b = 198 },
        { .r = 87, .g = 109, .b = 219 },
        { .r = 149, .g = 90, .b = 231 }
    },
    .system = 16
};

#endif  /* BASE16_atelier_cave_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
