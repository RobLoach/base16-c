/**
 * Base16 Atelier Lakeside 
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

#ifndef BASE16_atelier_lakeside_H__
#define BASE16_atelier_lakeside_H__

/**
 * The Base16 Atelier Lakeside scheme.
 *
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_lakeside;

#endif  /* BASE16_atelier_lakeside_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_lakeside_IMPLEMENTATION_ONCE
#define BASE16_atelier_lakeside_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_lakeside = {
    .name = "Atelier Lakeside",
    .base = {
        { .r = 22, .g = 27, .b = 29 },
        { .r = 31, .g = 41, .b = 46 },
        { .r = 81, .g = 109, .b = 123 },
        { .r = 90, .g = 123, .b = 140 },
        { .r = 113, .g = 149, .b = 168 },
        { .r = 126, .g = 162, .b = 180 },
        { .r = 193, .g = 228, .b = 246 },
        { .r = 235, .g = 248, .b = 255 },
        { .r = 210, .g = 45, .b = 114 },
        { .r = 147, .g = 92, .b = 37 },
        { .r = 138, .g = 138, .b = 15 },
        { .r = 86, .g = 140, .b = 59 },
        { .r = 45, .g = 143, .b = 111 },
        { .r = 37, .g = 127, .b = 173 },
        { .r = 107, .g = 107, .b = 184 },
        { .r = 183, .g = 45, .b = 210 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 22, .g = 27, .b = 29 },
        { .r = 22, .g = 27, .b = 29 },
        { .r = 210, .g = 45, .b = 114 },
        { .r = 138, .g = 138, .b = 15 },
        { .r = 86, .g = 140, .b = 59 },
        { .r = 45, .g = 143, .b = 111 },
        { .r = 37, .g = 127, .b = 173 },
        { .r = 107, .g = 107, .b = 184 }
    },
    .system = 16
};

#endif  /* BASE16_atelier_lakeside_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
