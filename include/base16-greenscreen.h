/**
 * Base16 Green Screen 
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

#ifndef BASE16_greenscreen_H__
#define BASE16_greenscreen_H__

/**
 * The Base16 Green Screen scheme.
 *
 * By: Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_greenscreen;

#endif  /* BASE16_greenscreen_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_greenscreen_IMPLEMENTATION_ONCE
#define BASE16_greenscreen_IMPLEMENTATION_ONCE

const base16_scheme base16_greenscreen = {
    .name = "Green Screen",
    .base = {
        { .r = 0, .g = 17, .b = 0 },
        { .r = 0, .g = 51, .b = 0 },
        { .r = 0, .g = 85, .b = 0 },
        { .r = 0, .g = 119, .b = 0 },
        { .r = 0, .g = 153, .b = 0 },
        { .r = 0, .g = 187, .b = 0 },
        { .r = 0, .g = 221, .b = 0 },
        { .r = 0, .g = 255, .b = 0 },
        { .r = 0, .g = 119, .b = 0 },
        { .r = 0, .g = 153, .b = 0 },
        { .r = 0, .g = 119, .b = 0 },
        { .r = 0, .g = 187, .b = 0 },
        { .r = 0, .g = 85, .b = 0 },
        { .r = 0, .g = 153, .b = 0 },
        { .r = 0, .g = 187, .b = 0 },
        { .r = 0, .g = 85, .b = 0 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 17, .b = 0 },
        { .r = 0, .g = 17, .b = 0 },
        { .r = 0, .g = 119, .b = 0 },
        { .r = 0, .g = 119, .b = 0 },
        { .r = 0, .g = 187, .b = 0 },
        { .r = 0, .g = 85, .b = 0 },
        { .r = 0, .g = 153, .b = 0 },
        { .r = 0, .g = 187, .b = 0 }
    },
    .system = 16
};

#endif  /* BASE16_greenscreen_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
