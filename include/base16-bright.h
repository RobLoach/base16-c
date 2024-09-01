/**
 * Base16 Bright 
 *
 * @author Chris Kempson (http://chriskempson.com)
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

#ifndef BASE16_bright_H__
#define BASE16_bright_H__

/**
 * The Base16 Bright scheme.
 *
 * By: Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_bright;

#endif  /* BASE16_bright_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_bright_IMPLEMENTATION_ONCE
#define BASE16_bright_IMPLEMENTATION_ONCE

const base16_scheme base16_bright = {
    .name = "Bright",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 80, .g = 80, .b = 80 },
        { .r = 176, .g = 176, .b = 176 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 245, .g = 245, .b = 245 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 251, .g = 1, .b = 32 },
        { .r = 252, .g = 109, .b = 36 },
        { .r = 253, .g = 163, .b = 49 },
        { .r = 161, .g = 198, .b = 89 },
        { .r = 118, .g = 199, .b = 183 },
        { .r = 111, .g = 179, .b = 210 },
        { .r = 211, .g = 129, .b = 195 },
        { .r = 190, .g = 100, .b = 60 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 251, .g = 1, .b = 32 },
        { .r = 253, .g = 163, .b = 49 },
        { .r = 161, .g = 198, .b = 89 },
        { .r = 118, .g = 199, .b = 183 },
        { .r = 111, .g = 179, .b = 210 },
        { .r = 211, .g = 129, .b = 195 }
    },
    .system = 16
};

#endif  /* BASE16_bright_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
