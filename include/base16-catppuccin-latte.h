/**
 * Base16 Catppuccin Latte 
 *
 * @author https://github.com/catppuccin/catppuccin
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

#ifndef BASE16_catppuccin_latte_H__
#define BASE16_catppuccin_latte_H__

/**
 * The Base16 Catppuccin Latte scheme.
 *
 * By: https://github.com/catppuccin/catppuccin
 */
extern const base16_scheme base16_catppuccin_latte;

#endif  /* BASE16_catppuccin_latte_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_catppuccin_latte_IMPLEMENTATION_ONCE
#define BASE16_catppuccin_latte_IMPLEMENTATION_ONCE

const base16_scheme base16_catppuccin_latte = {
    .name = "Catppuccin Latte",
    .base = {
        { .r = 239, .g = 241, .b = 245 },
        { .r = 230, .g = 233, .b = 239 },
        { .r = 204, .g = 208, .b = 218 },
        { .r = 188, .g = 192, .b = 204 },
        { .r = 172, .g = 176, .b = 190 },
        { .r = 76, .g = 79, .b = 105 },
        { .r = 220, .g = 138, .b = 120 },
        { .r = 114, .g = 135, .b = 253 },
        { .r = 210, .g = 15, .b = 57 },
        { .r = 254, .g = 100, .b = 11 },
        { .r = 223, .g = 142, .b = 29 },
        { .r = 64, .g = 160, .b = 43 },
        { .r = 23, .g = 146, .b = 153 },
        { .r = 30, .g = 102, .b = 245 },
        { .r = 136, .g = 57, .b = 239 },
        { .r = 221, .g = 120, .b = 120 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 239, .g = 241, .b = 245 },
        { .r = 239, .g = 241, .b = 245 },
        { .r = 210, .g = 15, .b = 57 },
        { .r = 223, .g = 142, .b = 29 },
        { .r = 64, .g = 160, .b = 43 },
        { .r = 23, .g = 146, .b = 153 },
        { .r = 30, .g = 102, .b = 245 },
        { .r = 136, .g = 57, .b = 239 }
    },
    .system = 16
};

#endif  /* BASE16_catppuccin_latte_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
