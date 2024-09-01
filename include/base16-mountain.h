/**
 * Base16 Mountain 
 *
 * @author gnsfujiwara (https://github.com/gnsfujiwara)
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

#ifndef BASE16_mountain_H__
#define BASE16_mountain_H__

/**
 * The Base16 Mountain scheme.
 *
 * By: gnsfujiwara (https://github.com/gnsfujiwara)
 */
extern const base16_scheme base16_mountain;

#endif  /* BASE16_mountain_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_mountain_IMPLEMENTATION_ONCE
#define BASE16_mountain_IMPLEMENTATION_ONCE

const base16_scheme base16_mountain = {
    .name = "Mountain",
    .base = {
        { .r = 15, .g = 15, .b = 15 },
        { .r = 25, .g = 25, .b = 25 },
        { .r = 38, .g = 38, .b = 38 },
        { .r = 76, .g = 76, .b = 76 },
        { .r = 172, .g = 138, .b = 140 },
        { .r = 202, .g = 202, .b = 202 },
        { .r = 231, .g = 231, .b = 231 },
        { .r = 240, .g = 240, .b = 240 },
        { .r = 172, .g = 138, .b = 140 },
        { .r = 206, .g = 177, .b = 136 },
        { .r = 172, .g = 169, .b = 138 },
        { .r = 138, .g = 172, .b = 139 },
        { .r = 138, .g = 171, .b = 172 },
        { .r = 143, .g = 138, .b = 172 },
        { .r = 172, .g = 138, .b = 172 },
        { .r = 172, .g = 138, .b = 140 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 15, .g = 15, .b = 15 },
        { .r = 15, .g = 15, .b = 15 },
        { .r = 172, .g = 138, .b = 140 },
        { .r = 172, .g = 169, .b = 138 },
        { .r = 138, .g = 172, .b = 139 },
        { .r = 138, .g = 171, .b = 172 },
        { .r = 143, .g = 138, .b = 172 },
        { .r = 172, .g = 138, .b = 172 }
    },
    .system = 16
};

#endif  /* BASE16_mountain_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
