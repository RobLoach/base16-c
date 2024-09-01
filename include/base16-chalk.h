/**
 * Base16 Chalk 
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

#ifndef BASE16_chalk_H__
#define BASE16_chalk_H__

/**
 * The Base16 Chalk scheme.
 *
 * By: Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_chalk;

#endif  /* BASE16_chalk_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_chalk_IMPLEMENTATION_ONCE
#define BASE16_chalk_IMPLEMENTATION_ONCE

const base16_scheme base16_chalk = {
    .name = "Chalk",
    .base = {
        { .r = 21, .g = 21, .b = 21 },
        { .r = 32, .g = 32, .b = 32 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 80, .g = 80, .b = 80 },
        { .r = 176, .g = 176, .b = 176 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 245, .g = 245, .b = 245 },
        { .r = 251, .g = 159, .b = 177 },
        { .r = 237, .g = 169, .b = 135 },
        { .r = 221, .g = 178, .b = 111 },
        { .r = 172, .g = 194, .b = 103 },
        { .r = 18, .g = 207, .b = 192 },
        { .r = 111, .g = 194, .b = 239 },
        { .r = 225, .g = 163, .b = 238 },
        { .r = 222, .g = 175, .b = 143 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 21, .g = 21, .b = 21 },
        { .r = 21, .g = 21, .b = 21 },
        { .r = 251, .g = 159, .b = 177 },
        { .r = 221, .g = 178, .b = 111 },
        { .r = 172, .g = 194, .b = 103 },
        { .r = 18, .g = 207, .b = 192 },
        { .r = 111, .g = 194, .b = 239 },
        { .r = 225, .g = 163, .b = 238 }
    },
    .system = 16
};

#endif  /* BASE16_chalk_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
