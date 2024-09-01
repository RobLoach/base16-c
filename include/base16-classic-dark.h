/**
 * Base16 Classic Dark 
 *
 * @author Jason Heeris (http://heeris.id.au)
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

#ifndef BASE16_classic_dark_H__
#define BASE16_classic_dark_H__

/**
 * The Base16 Classic Dark scheme.
 *
 * By: Jason Heeris (http://heeris.id.au)
 */
extern const base16_scheme base16_classic_dark;

#endif  /* BASE16_classic_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_classic_dark_IMPLEMENTATION_ONCE
#define BASE16_classic_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_classic_dark = {
    .name = "Classic Dark",
    .base = {
        { .r = 21, .g = 21, .b = 21 },
        { .r = 32, .g = 32, .b = 32 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 80, .g = 80, .b = 80 },
        { .r = 176, .g = 176, .b = 176 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 245, .g = 245, .b = 245 },
        { .r = 172, .g = 65, .b = 66 },
        { .r = 210, .g = 132, .b = 69 },
        { .r = 244, .g = 191, .b = 117 },
        { .r = 144, .g = 169, .b = 89 },
        { .r = 117, .g = 181, .b = 170 },
        { .r = 106, .g = 159, .b = 181 },
        { .r = 170, .g = 117, .b = 159 },
        { .r = 143, .g = 85, .b = 54 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 21, .g = 21, .b = 21 },
        { .r = 21, .g = 21, .b = 21 },
        { .r = 172, .g = 65, .b = 66 },
        { .r = 244, .g = 191, .b = 117 },
        { .r = 144, .g = 169, .b = 89 },
        { .r = 117, .g = 181, .b = 170 },
        { .r = 106, .g = 159, .b = 181 },
        { .r = 170, .g = 117, .b = 159 }
    },
    .system = 16
};

#endif  /* BASE16_classic_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
