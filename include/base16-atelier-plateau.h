/**
 * Base16 Atelier Plateau 
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

#ifndef BASE16_atelier_plateau_H__
#define BASE16_atelier_plateau_H__

/**
 * The Base16 Atelier Plateau scheme.
 *
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_plateau;

#endif  /* BASE16_atelier_plateau_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_plateau_IMPLEMENTATION_ONCE
#define BASE16_atelier_plateau_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_plateau = {
    .name = "Atelier Plateau",
    .base = {
        { .r = 27, .g = 24, .b = 24 },
        { .r = 41, .g = 36, .b = 36 },
        { .r = 88, .g = 80, .b = 80 },
        { .r = 101, .g = 93, .b = 93 },
        { .r = 126, .g = 119, .b = 119 },
        { .r = 138, .g = 133, .b = 133 },
        { .r = 231, .g = 223, .b = 223 },
        { .r = 244, .g = 236, .b = 236 },
        { .r = 202, .g = 73, .b = 73 },
        { .r = 180, .g = 90, .b = 60 },
        { .r = 160, .g = 110, .b = 59 },
        { .r = 75, .g = 139, .b = 139 },
        { .r = 84, .g = 133, .b = 182 },
        { .r = 114, .g = 114, .b = 202 },
        { .r = 132, .g = 100, .b = 196 },
        { .r = 189, .g = 81, .b = 135 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 27, .g = 24, .b = 24 },
        { .r = 27, .g = 24, .b = 24 },
        { .r = 202, .g = 73, .b = 73 },
        { .r = 160, .g = 110, .b = 59 },
        { .r = 75, .g = 139, .b = 139 },
        { .r = 84, .g = 133, .b = 182 },
        { .r = 114, .g = 114, .b = 202 },
        { .r = 132, .g = 100, .b = 196 }
    },
    .system = 16
};

#endif  /* BASE16_atelier_plateau_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
