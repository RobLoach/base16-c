/**
 * Base16 Google Dark 
 *
 * @author Seth Wright (http://sethawright.com)
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

#ifndef BASE16_google_dark_H__
#define BASE16_google_dark_H__

/**
 * The Base16 Google Dark scheme.
 *
 * By: Seth Wright (http://sethawright.com)
 */
extern const base16_scheme base16_google_dark;

#endif  /* BASE16_google_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_google_dark_IMPLEMENTATION_ONCE
#define BASE16_google_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_google_dark = {
    .name = "Google Dark",
    .base = {
        { .r = 29, .g = 31, .b = 33 },
        { .r = 40, .g = 42, .b = 46 },
        { .r = 55, .g = 59, .b = 65 },
        { .r = 150, .g = 152, .b = 150 },
        { .r = 180, .g = 183, .b = 180 },
        { .r = 197, .g = 200, .b = 198 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 204, .g = 52, .b = 43 },
        { .r = 249, .g = 106, .b = 56 },
        { .r = 251, .g = 169, .b = 34 },
        { .r = 25, .g = 136, .b = 68 },
        { .r = 57, .g = 113, .b = 237 },
        { .r = 57, .g = 113, .b = 237 },
        { .r = 163, .g = 106, .b = 199 },
        { .r = 57, .g = 113, .b = 237 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 29, .g = 31, .b = 33 },
        { .r = 29, .g = 31, .b = 33 },
        { .r = 204, .g = 52, .b = 43 },
        { .r = 251, .g = 169, .b = 34 },
        { .r = 25, .g = 136, .b = 68 },
        { .r = 57, .g = 113, .b = 237 },
        { .r = 57, .g = 113, .b = 237 },
        { .r = 163, .g = 106, .b = 199 }
    },
    .system = 16
};

#endif  /* BASE16_google_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
