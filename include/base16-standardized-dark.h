/**
 * Base16 standardized-dark 
 *
 * @author ali (https://github.com/ali-githb/base16-standardized-scheme)
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

#ifndef BASE16_standardized_dark_H__
#define BASE16_standardized_dark_H__

/**
 * The Base16 standardized-dark scheme.
 *
 * By: ali (https://github.com/ali-githb/base16-standardized-scheme)
 */
extern const base16_scheme base16_standardized_dark;

#endif  /* BASE16_standardized_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_standardized_dark_IMPLEMENTATION_ONCE
#define BASE16_standardized_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_standardized_dark = {
    .name = "standardized-dark",
    .base = {
        { .r = 34, .g = 34, .b = 34 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 137, .g = 137, .b = 137 },
        { .r = 137, .g = 137, .b = 137 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 225, .g = 93, .b = 103 },
        { .r = 252, .g = 128, .b = 78 },
        { .r = 225, .g = 179, .b = 26 },
        { .r = 93, .g = 177, .b = 41 },
        { .r = 33, .g = 201, .b = 146 },
        { .r = 0, .g = 163, .b = 242 },
        { .r = 180, .g = 110, .b = 224 },
        { .r = 184, .g = 125, .b = 40 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 34, .g = 34, .b = 34 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 225, .g = 93, .b = 103 },
        { .r = 225, .g = 179, .b = 26 },
        { .r = 93, .g = 177, .b = 41 },
        { .r = 33, .g = 201, .b = 146 },
        { .r = 0, .g = 163, .b = 242 },
        { .r = 180, .g = 110, .b = 224 }
    },
    .system = 16
};

#endif  /* BASE16_standardized_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
