/**
 * Base16 Atelier Heath Light 
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

#ifndef BASE16_atelier_heath_light_H__
#define BASE16_atelier_heath_light_H__

/**
 * The Base16 Atelier Heath Light scheme.
 *
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_heath_light;

#endif  /* BASE16_atelier_heath_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_heath_light_IMPLEMENTATION_ONCE
#define BASE16_atelier_heath_light_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_heath_light = {
    .name = "Atelier Heath Light",
    .base = {
        { .r = 247, .g = 243, .b = 247 },
        { .r = 216, .g = 202, .b = 216 },
        { .r = 171, .g = 155, .b = 171 },
        { .r = 158, .g = 143, .b = 158 },
        { .r = 119, .g = 105, .b = 119 },
        { .r = 105, .g = 93, .b = 105 },
        { .r = 41, .g = 35, .b = 41 },
        { .r = 27, .g = 24, .b = 27 },
        { .r = 202, .g = 64, .b = 43 },
        { .r = 166, .g = 89, .b = 38 },
        { .r = 187, .g = 138, .b = 53 },
        { .r = 145, .g = 139, .b = 59 },
        { .r = 21, .g = 147, .b = 147 },
        { .r = 81, .g = 106, .b = 236 },
        { .r = 123, .g = 89, .b = 192 },
        { .r = 204, .g = 51, .b = 204 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 247, .g = 243, .b = 247 },
        { .r = 247, .g = 243, .b = 247 },
        { .r = 202, .g = 64, .b = 43 },
        { .r = 187, .g = 138, .b = 53 },
        { .r = 145, .g = 139, .b = 59 },
        { .r = 21, .g = 147, .b = 147 },
        { .r = 81, .g = 106, .b = 236 },
        { .r = 123, .g = 89, .b = 192 }
    },
    .system = 16
};

#endif  /* BASE16_atelier_heath_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
