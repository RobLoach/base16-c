/**
 * Base16 Railscasts 
 *
 * @author Ryan Bates (http://railscasts.com)
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

#ifndef BASE16_railscasts_H__
#define BASE16_railscasts_H__

/**
 * The Base16 Railscasts scheme.
 *
 * By: Ryan Bates (http://railscasts.com)
 */
extern const base16_scheme base16_railscasts;

#endif  /* BASE16_railscasts_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_railscasts_IMPLEMENTATION_ONCE
#define BASE16_railscasts_IMPLEMENTATION_ONCE

const base16_scheme base16_railscasts = {
    .name = "Railscasts",
    .base = {
        { .r = 43, .g = 43, .b = 43 },
        { .r = 39, .g = 41, .b = 53 },
        { .r = 58, .g = 64, .b = 85 },
        { .r = 90, .g = 100, .b = 126 },
        { .r = 212, .g = 207, .b = 201 },
        { .r = 230, .g = 225, .b = 220 },
        { .r = 244, .g = 241, .b = 237 },
        { .r = 249, .g = 247, .b = 243 },
        { .r = 218, .g = 73, .b = 57 },
        { .r = 204, .g = 120, .b = 51 },
        { .r = 255, .g = 198, .b = 109 },
        { .r = 165, .g = 194, .b = 97 },
        { .r = 81, .g = 159, .b = 80 },
        { .r = 109, .g = 156, .b = 190 },
        { .r = 182, .g = 179, .b = 235 },
        { .r = 188, .g = 148, .b = 88 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 43, .g = 43, .b = 43 },
        { .r = 43, .g = 43, .b = 43 },
        { .r = 218, .g = 73, .b = 57 },
        { .r = 255, .g = 198, .b = 109 },
        { .r = 165, .g = 194, .b = 97 },
        { .r = 81, .g = 159, .b = 80 },
        { .r = 109, .g = 156, .b = 190 },
        { .r = 182, .g = 179, .b = 235 }
    },
    .system = 16
};

#endif  /* BASE16_railscasts_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
