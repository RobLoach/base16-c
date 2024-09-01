/**
 * Base16 Eva Dim 
 *
 * @author kjakapat (https://github.com/kjakapat)
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

#ifndef BASE16_eva_dim_H__
#define BASE16_eva_dim_H__

/**
 * The Base16 Eva Dim scheme.
 *
 * By: kjakapat (https://github.com/kjakapat)
 */
extern const base16_scheme base16_eva_dim;

#endif  /* BASE16_eva_dim_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_eva_dim_IMPLEMENTATION_ONCE
#define BASE16_eva_dim_IMPLEMENTATION_ONCE

const base16_scheme base16_eva_dim = {
    .name = "Eva Dim",
    .base = {
        { .r = 42, .g = 59, .b = 77 },
        { .r = 61, .g = 86, .b = 111 },
        { .r = 75, .g = 105, .b = 136 },
        { .r = 85, .g = 121, .b = 156 },
        { .r = 126, .g = 144, .b = 163 },
        { .r = 159, .g = 162, .b = 166 },
        { .r = 214, .g = 215, .b = 217 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 196, .g = 103, .b = 108 },
        { .r = 255, .g = 153, .b = 102 },
        { .r = 207, .g = 208, .b = 93 },
        { .r = 93, .g = 229, .b = 97 },
        { .r = 75, .g = 143, .b = 119 },
        { .r = 26, .g = 225, .b = 220 },
        { .r = 156, .g = 108, .b = 211 },
        { .r = 187, .g = 100, .b = 169 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 42, .g = 59, .b = 77 },
        { .r = 42, .g = 59, .b = 77 },
        { .r = 196, .g = 103, .b = 108 },
        { .r = 207, .g = 208, .b = 93 },
        { .r = 93, .g = 229, .b = 97 },
        { .r = 75, .g = 143, .b = 119 },
        { .r = 26, .g = 225, .b = 220 },
        { .r = 156, .g = 108, .b = 211 }
    },
    .system = 16
};

#endif  /* BASE16_eva_dim_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
