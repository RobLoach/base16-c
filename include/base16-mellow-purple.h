/**
 * Base16 Mellow Purple 
 *
 * @author gidsi
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

#ifndef BASE16_mellow_purple_H__
#define BASE16_mellow_purple_H__

/**
 * The Base16 Mellow Purple scheme.
 *
 * By: gidsi
 */
extern const base16_scheme base16_mellow_purple;

#endif  /* BASE16_mellow_purple_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_mellow_purple_IMPLEMENTATION_ONCE
#define BASE16_mellow_purple_IMPLEMENTATION_ONCE

const base16_scheme base16_mellow_purple = {
    .name = "Mellow Purple",
    .base = {
        { .r = 30, .g = 5, .b = 40 },
        { .r = 26, .g = 9, .b = 45 },
        { .r = 51, .g = 19, .b = 84 },
        { .r = 50, .g = 15, .b = 85 },
        { .r = 135, .g = 53, .b = 130 },
        { .r = 255, .g = 238, .b = 255 },
        { .r = 255, .g = 238, .b = 255 },
        { .r = 248, .g = 192, .b = 255 },
        { .r = 0, .g = 217, .b = 233 },
        { .r = 170, .g = 0, .b = 163 },
        { .r = 149, .g = 90, .b = 231 },
        { .r = 5, .g = 203, .b = 13 },
        { .r = 185, .g = 0, .b = 177 },
        { .r = 85, .g = 0, .b = 104 },
        { .r = 137, .g = 145, .b = 187 },
        { .r = 77, .g = 111, .b = 255 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 30, .g = 5, .b = 40 },
        { .r = 30, .g = 5, .b = 40 },
        { .r = 0, .g = 217, .b = 233 },
        { .r = 149, .g = 90, .b = 231 },
        { .r = 5, .g = 203, .b = 13 },
        { .r = 185, .g = 0, .b = 177 },
        { .r = 85, .g = 0, .b = 104 },
        { .r = 137, .g = 145, .b = 187 }
    },
    .system = 16
};

#endif  /* BASE16_mellow_purple_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
