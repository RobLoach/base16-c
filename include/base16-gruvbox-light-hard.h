/**
 * Base16 Gruvbox light, hard 
 *
 * @author Dawid Kurek (dawikur@gmail.com), morhetz (https://github.com/morhetz/gruvbox)
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

#ifndef BASE16_gruvbox_light_hard_H__
#define BASE16_gruvbox_light_hard_H__

/**
 * The Base16 Gruvbox light, hard scheme.
 *
 * By: Dawid Kurek (dawikur@gmail.com), morhetz (https://github.com/morhetz/gruvbox)
 */
extern const base16_scheme base16_gruvbox_light_hard;

#endif  /* BASE16_gruvbox_light_hard_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gruvbox_light_hard_IMPLEMENTATION_ONCE
#define BASE16_gruvbox_light_hard_IMPLEMENTATION_ONCE

const base16_scheme base16_gruvbox_light_hard = {
    .name = "Gruvbox light, hard",
    .base = {
        { .r = 249, .g = 245, .b = 215 },
        { .r = 235, .g = 219, .b = 178 },
        { .r = 213, .g = 196, .b = 161 },
        { .r = 189, .g = 174, .b = 147 },
        { .r = 102, .g = 92, .b = 84 },
        { .r = 80, .g = 73, .b = 69 },
        { .r = 60, .g = 56, .b = 54 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 157, .g = 0, .b = 6 },
        { .r = 175, .g = 58, .b = 3 },
        { .r = 181, .g = 118, .b = 20 },
        { .r = 121, .g = 116, .b = 14 },
        { .r = 66, .g = 123, .b = 88 },
        { .r = 7, .g = 102, .b = 120 },
        { .r = 143, .g = 63, .b = 113 },
        { .r = 214, .g = 93, .b = 14 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 249, .g = 245, .b = 215 },
        { .r = 249, .g = 245, .b = 215 },
        { .r = 157, .g = 0, .b = 6 },
        { .r = 181, .g = 118, .b = 20 },
        { .r = 121, .g = 116, .b = 14 },
        { .r = 66, .g = 123, .b = 88 },
        { .r = 7, .g = 102, .b = 120 },
        { .r = 143, .g = 63, .b = 113 }
    },
    .system = 16
};

#endif  /* BASE16_gruvbox_light_hard_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
