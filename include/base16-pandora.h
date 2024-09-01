/**
 * Base16 pandora 
 *
 * @author Cassandra Fox
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

#ifndef BASE16_pandora_H__
#define BASE16_pandora_H__

/**
 * The Base16 pandora scheme.
 *
 * By: Cassandra Fox
 */
extern const base16_scheme base16_pandora;

#endif  /* BASE16_pandora_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_pandora_IMPLEMENTATION_ONCE
#define BASE16_pandora_IMPLEMENTATION_ONCE

const base16_scheme base16_pandora = {
    .name = "pandora",
    .base = {
        { .r = 19, .g = 18, .b = 19 },
        { .r = 47, .g = 24, .b = 35 },
        { .r = 71, .g = 34, .b = 52 },
        { .r = 255, .g = 190, .b = 227 },
        { .r = 155, .g = 42, .b = 70 },
        { .r = 241, .g = 92, .b = 153 },
        { .r = 129, .g = 80, .b = 106 },
        { .r = 99, .g = 34, .b = 39 },
        { .r = 176, .g = 11, .b = 105 },
        { .r = 255, .g = 145, .b = 83 },
        { .r = 255, .g = 204, .b = 0 },
        { .r = 157, .g = 223, .b = 105 },
        { .r = 113, .g = 76, .b = 166 },
        { .r = 0, .g = 128, .b = 128 },
        { .r = 162, .g = 64, .b = 48 },
        { .r = 162, .g = 64, .b = 48 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 19, .g = 18, .b = 19 },
        { .r = 19, .g = 18, .b = 19 },
        { .r = 176, .g = 11, .b = 105 },
        { .r = 255, .g = 204, .b = 0 },
        { .r = 157, .g = 223, .b = 105 },
        { .r = 113, .g = 76, .b = 166 },
        { .r = 0, .g = 128, .b = 128 },
        { .r = 162, .g = 64, .b = 48 }
    },
    .system = 16
};

#endif  /* BASE16_pandora_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
