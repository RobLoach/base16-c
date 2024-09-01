/**
 * Base16 Mocha 
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

#ifndef BASE16_mocha_H__
#define BASE16_mocha_H__

/**
 * The Base16 Mocha scheme.
 *
 * By: Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_mocha;

#endif  /* BASE16_mocha_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_mocha_IMPLEMENTATION_ONCE
#define BASE16_mocha_IMPLEMENTATION_ONCE

const base16_scheme base16_mocha = {
    .name = "Mocha",
    .base = {
        { .r = 59, .g = 50, .b = 40 },
        { .r = 83, .g = 70, .b = 54 },
        { .r = 100, .g = 82, .b = 64 },
        { .r = 126, .g = 112, .b = 90 },
        { .r = 184, .g = 175, .b = 173 },
        { .r = 208, .g = 200, .b = 198 },
        { .r = 233, .g = 225, .b = 221 },
        { .r = 245, .g = 238, .b = 235 },
        { .r = 203, .g = 96, .b = 119 },
        { .r = 210, .g = 139, .b = 113 },
        { .r = 244, .g = 188, .b = 135 },
        { .r = 190, .g = 181, .b = 91 },
        { .r = 123, .g = 189, .b = 164 },
        { .r = 138, .g = 179, .b = 181 },
        { .r = 168, .g = 155, .b = 185 },
        { .r = 187, .g = 149, .b = 132 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 59, .g = 50, .b = 40 },
        { .r = 59, .g = 50, .b = 40 },
        { .r = 203, .g = 96, .b = 119 },
        { .r = 244, .g = 188, .b = 135 },
        { .r = 190, .g = 181, .b = 91 },
        { .r = 123, .g = 189, .b = 164 },
        { .r = 138, .g = 179, .b = 181 },
        { .r = 168, .g = 155, .b = 185 }
    },
    .system = 16
};

#endif  /* BASE16_mocha_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
