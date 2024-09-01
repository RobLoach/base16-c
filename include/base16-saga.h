/**
 * Base16 SAGA 
 *
 * @author https://github.com/SAGAtheme/SAGA
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

#ifndef BASE16_saga_H__
#define BASE16_saga_H__

/**
 * The Base16 SAGA scheme.
 *
 * By: https://github.com/SAGAtheme/SAGA
 */
extern const base16_scheme base16_saga;

#endif  /* BASE16_saga_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_saga_IMPLEMENTATION_ONCE
#define BASE16_saga_IMPLEMENTATION_ONCE

const base16_scheme base16_saga = {
    .name = "SAGA",
    .base = {
        { .r = 5, .g = 8, .b = 10 },
        { .r = 10, .g = 16, .b = 20 },
        { .r = 15, .g = 24, .b = 30 },
        { .r = 20, .g = 31, .b = 39 },
        { .r = 25, .g = 38, .b = 48 },
        { .r = 220, .g = 226, .b = 247 },
        { .r = 248, .g = 234, .b = 231 },
        { .r = 204, .g = 211, .b = 254 },
        { .r = 255, .g = 212, .b = 233 },
        { .r = 251, .g = 203, .b = 174 },
        { .r = 251, .g = 235, .b = 200 },
        { .r = 247, .g = 221, .b = 255 },
        { .r = 197, .g = 237, .b = 193 },
        { .r = 201, .g = 255, .b = 247 },
        { .r = 220, .g = 195, .b = 249 },
        { .r = 246, .g = 221, .b = 221 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 5, .g = 8, .b = 10 },
        { .r = 5, .g = 8, .b = 10 },
        { .r = 255, .g = 212, .b = 233 },
        { .r = 251, .g = 235, .b = 200 },
        { .r = 247, .g = 221, .b = 255 },
        { .r = 197, .g = 237, .b = 193 },
        { .r = 201, .g = 255, .b = 247 },
        { .r = 220, .g = 195, .b = 249 }
    },
    .system = 16
};

#endif  /* BASE16_saga_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
