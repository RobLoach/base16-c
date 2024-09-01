/**
 * Base16 Grayscale Dark 
 *
 * @author Alexandre Gavioli (https://github.com/Alexx2/)
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

#ifndef BASE16_grayscale_dark_H__
#define BASE16_grayscale_dark_H__

/**
 * The Base16 Grayscale Dark scheme.
 *
 * By: Alexandre Gavioli (https://github.com/Alexx2/)
 */
extern const base16_scheme base16_grayscale_dark;

#endif  /* BASE16_grayscale_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_grayscale_dark_IMPLEMENTATION_ONCE
#define BASE16_grayscale_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_grayscale_dark = {
    .name = "Grayscale Dark",
    .base = {
        { .r = 16, .g = 16, .b = 16 },
        { .r = 37, .g = 37, .b = 37 },
        { .r = 70, .g = 70, .b = 70 },
        { .r = 82, .g = 82, .b = 82 },
        { .r = 171, .g = 171, .b = 171 },
        { .r = 185, .g = 185, .b = 185 },
        { .r = 227, .g = 227, .b = 227 },
        { .r = 247, .g = 247, .b = 247 },
        { .r = 124, .g = 124, .b = 124 },
        { .r = 153, .g = 153, .b = 153 },
        { .r = 160, .g = 160, .b = 160 },
        { .r = 142, .g = 142, .b = 142 },
        { .r = 134, .g = 134, .b = 134 },
        { .r = 104, .g = 104, .b = 104 },
        { .r = 116, .g = 116, .b = 116 },
        { .r = 94, .g = 94, .b = 94 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 16, .g = 16, .b = 16 },
        { .r = 16, .g = 16, .b = 16 },
        { .r = 124, .g = 124, .b = 124 },
        { .r = 160, .g = 160, .b = 160 },
        { .r = 142, .g = 142, .b = 142 },
        { .r = 134, .g = 134, .b = 134 },
        { .r = 104, .g = 104, .b = 104 },
        { .r = 116, .g = 116, .b = 116 }
    },
    .system = 16
};

#endif  /* BASE16_grayscale_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
