/**
 * Base16 darkmoss 
 *
 * @author Gabriel Avanzi (https://github.com/avanzzzi)
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

#ifndef BASE16_darkmoss_H__
#define BASE16_darkmoss_H__

/**
 * The Base16 darkmoss scheme.
 *
 * By: Gabriel Avanzi (https://github.com/avanzzzi)
 */
extern const base16_scheme base16_darkmoss;

#endif  /* BASE16_darkmoss_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_darkmoss_IMPLEMENTATION_ONCE
#define BASE16_darkmoss_IMPLEMENTATION_ONCE

const base16_scheme base16_darkmoss = {
    .name = "darkmoss",
    .base = {
        { .r = 23, .g = 30, .b = 31 },
        { .r = 37, .g = 44, .b = 45 },
        { .r = 55, .g = 60, .b = 61 },
        { .r = 85, .g = 94, .b = 95 },
        { .r = 129, .g = 143, .b = 128 },
        { .r = 199, .g = 199, .b = 165 },
        { .r = 227, .g = 227, .b = 200 },
        { .r = 225, .g = 234, .b = 239 },
        { .r = 255, .g = 70, .b = 88 },
        { .r = 230, .g = 219, .b = 116 },
        { .r = 253, .g = 177, .b = 31 },
        { .r = 73, .g = 145, .b = 128 },
        { .r = 102, .g = 217, .b = 239 },
        { .r = 73, .g = 128, .b = 145 },
        { .r = 155, .g = 192, .b = 200 },
        { .r = 210, .g = 123, .b = 83 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 23, .g = 30, .b = 31 },
        { .r = 23, .g = 30, .b = 31 },
        { .r = 255, .g = 70, .b = 88 },
        { .r = 253, .g = 177, .b = 31 },
        { .r = 73, .g = 145, .b = 128 },
        { .r = 102, .g = 217, .b = 239 },
        { .r = 73, .g = 128, .b = 145 },
        { .r = 155, .g = 192, .b = 200 }
    },
    .system = 16
};

#endif  /* BASE16_darkmoss_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
