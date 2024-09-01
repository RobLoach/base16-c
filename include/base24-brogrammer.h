/**
 * Base24 Brogrammer 
 *
 * @author FredHappyface (https://github.com/fredHappyface)
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

#ifndef BASE16_brogrammer_H__
#define BASE16_brogrammer_H__

/**
 * The Base24 Brogrammer scheme.
 *
 * By: FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_brogrammer;

#endif  /* BASE16_brogrammer_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_brogrammer_IMPLEMENTATION_ONCE
#define BASE24_brogrammer_IMPLEMENTATION_ONCE

const base16_scheme base24_brogrammer = {
    .name = "Brogrammer",
    .base = {
        { .r = 19, .g = 19, .b = 19 },
        { .r = 31, .g = 31, .b = 31 },
        { .r = 42, .g = 49, .b = 65 },
        { .r = 52, .g = 61, .b = 80 },
        { .r = 214, .g = 218, .b = 228 },
        { .r = 193, .g = 200, .b = 215 },
        { .r = 227, .g = 230, .b = 237 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 247, .g = 17, .b = 24 },
        { .r = 236, .g = 185, .b = 15 },
        { .r = 15, .g = 128, .b = 213 },
        { .r = 44, .g = 197, .b = 93 },
        { .r = 15, .g = 128, .b = 213 },
        { .r = 42, .g = 132, .b = 210 },
        { .r = 78, .g = 89, .b = 183 },
        { .r = 123, .g = 8, .b = 12 },

        /* Base24 */
        { .r = 10, .g = 10, .b = 10 },
        { .r = 2, .g = 2, .b = 2 },
        { .r = 222, .g = 52, .b = 46 },
        { .r = 242, .g = 189, .b = 9 },
        { .r = 29, .g = 210, .b = 96 },
        { .r = 40, .g = 154, .b = 240 },
        { .r = 80, .g = 155, .b = 220 },
        { .r = 82, .g = 79, .b = 185 }
    },
    .system = 24
};

#endif  /* BASE24_brogrammer_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
