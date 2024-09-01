/**
 * Base16 Equilibrium Gray Light 
 *
 * @author Carlo Abelli
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

#ifndef BASE16_equilibrium_gray_light_H__
#define BASE16_equilibrium_gray_light_H__

/**
 * The Base16 Equilibrium Gray Light scheme.
 *
 * By: Carlo Abelli
 */
extern const base16_scheme base16_equilibrium_gray_light;

#endif  /* BASE16_equilibrium_gray_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_equilibrium_gray_light_IMPLEMENTATION_ONCE
#define BASE16_equilibrium_gray_light_IMPLEMENTATION_ONCE

const base16_scheme base16_equilibrium_gray_light = {
    .name = "Equilibrium Gray Light",
    .base = {
        { .r = 241, .g = 241, .b = 241 },
        { .r = 226, .g = 226, .b = 226 },
        { .r = 212, .g = 212, .b = 212 },
        { .r = 119, .g = 119, .b = 119 },
        { .r = 94, .g = 94, .b = 94 },
        { .r = 71, .g = 71, .b = 71 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 27, .g = 27, .b = 27 },
        { .r = 208, .g = 32, .b = 35 },
        { .r = 191, .g = 62, .b = 5 },
        { .r = 157, .g = 111, .b = 0 },
        { .r = 99, .g = 114, .b = 0 },
        { .r = 0, .g = 122, .b = 114 },
        { .r = 0, .g = 115, .b = 181 },
        { .r = 78, .g = 102, .b = 182 },
        { .r = 196, .g = 39, .b = 117 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 241, .g = 241, .b = 241 },
        { .r = 241, .g = 241, .b = 241 },
        { .r = 208, .g = 32, .b = 35 },
        { .r = 157, .g = 111, .b = 0 },
        { .r = 99, .g = 114, .b = 0 },
        { .r = 0, .g = 122, .b = 114 },
        { .r = 0, .g = 115, .b = 181 },
        { .r = 78, .g = 102, .b = 182 }
    },
    .system = 16
};

#endif  /* BASE16_equilibrium_gray_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
