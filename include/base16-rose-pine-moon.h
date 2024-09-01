/**
 * Base16 Rosé Pine Moon 
 *
 * @author Emilia Dunfelt &lt;edun@dunfelt.se&gt;
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

#ifndef BASE16_rose_pine_moon_H__
#define BASE16_rose_pine_moon_H__

/**
 * The Base16 Rosé Pine Moon scheme.
 *
 * By: Emilia Dunfelt &lt;edun@dunfelt.se&gt;
 */
extern const base16_scheme base16_rose_pine_moon;

#endif  /* BASE16_rose_pine_moon_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_rose_pine_moon_IMPLEMENTATION_ONCE
#define BASE16_rose_pine_moon_IMPLEMENTATION_ONCE

const base16_scheme base16_rose_pine_moon = {
    .name = "Rosé Pine Moon",
    .base = {
        { .r = 35, .g = 33, .b = 54 },
        { .r = 42, .g = 39, .b = 63 },
        { .r = 57, .g = 53, .b = 82 },
        { .r = 110, .g = 106, .b = 134 },
        { .r = 144, .g = 140, .b = 170 },
        { .r = 224, .g = 222, .b = 244 },
        { .r = 224, .g = 222, .b = 244 },
        { .r = 86, .g = 82, .b = 110 },
        { .r = 235, .g = 111, .b = 146 },
        { .r = 246, .g = 193, .b = 119 },
        { .r = 234, .g = 154, .b = 151 },
        { .r = 62, .g = 143, .b = 176 },
        { .r = 156, .g = 207, .b = 216 },
        { .r = 196, .g = 167, .b = 231 },
        { .r = 246, .g = 193, .b = 119 },
        { .r = 86, .g = 82, .b = 110 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 35, .g = 33, .b = 54 },
        { .r = 35, .g = 33, .b = 54 },
        { .r = 235, .g = 111, .b = 146 },
        { .r = 234, .g = 154, .b = 151 },
        { .r = 62, .g = 143, .b = 176 },
        { .r = 156, .g = 207, .b = 216 },
        { .r = 196, .g = 167, .b = 231 },
        { .r = 246, .g = 193, .b = 119 }
    },
    .system = 16
};

#endif  /* BASE16_rose_pine_moon_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
