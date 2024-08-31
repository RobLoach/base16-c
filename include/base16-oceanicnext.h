/**
 * Base16 OceanicNext 
 *
 * @author https://github.com/voronianski/oceanic-next-color-scheme
 *
 * Template by Rob Loach (https://robloach.net)
 * base16-h: https://github.com/robloach/base16-h
 */

#ifndef BASE16_H__
#define BASE16_H__

/**
 * A single color used for Base16.
 */
typedef struct base16_scheme_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} base16_scheme_color;

/**
 * A Base16 Scheme.
 */
typedef struct base16_scheme {
    const char *name; /** The name of the scheme. */
    base16_scheme_color base[16]; /** An array of the base16 colors for the scheme. */
} base16_scheme;

#endif  /* BASE16_H__ */

#ifndef BASE16_oceanicnext_H__
#define BASE16_oceanicnext_H__

/**
 * The Base16 OceanicNext scheme.
 *
 * By: https://github.com/voronianski/oceanic-next-color-scheme
 */
extern const base16_scheme base16_oceanicnext;

#endif  /* BASE16_oceanicnext_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_oceanicnext_IMPLEMENTATION_ONCE
#define BASE16_oceanicnext_IMPLEMENTATION_ONCE

const base16_scheme base16_oceanicnext = {
    .name = "OceanicNext",
    .base = {
        { .r = 27, .g = 43, .b = 52 },
        { .r = 52, .g = 61, .b = 70 },
        { .r = 79, .g = 91, .b = 102 },
        { .r = 101, .g = 115, .b = 126 },
        { .r = 167, .g = 173, .b = 186 },
        { .r = 192, .g = 197, .b = 206 },
        { .r = 205, .g = 211, .b = 222 },
        { .r = 216, .g = 222, .b = 233 },
        { .r = 236, .g = 95, .b = 103 },
        { .r = 249, .g = 145, .b = 87 },
        { .r = 250, .g = 200, .b = 99 },
        { .r = 153, .g = 199, .b = 148 },
        { .r = 95, .g = 179, .b = 179 },
        { .r = 102, .g = 153, .b = 204 },
        { .r = 197, .g = 148, .b = 197 },
        { .r = 171, .g = 121, .b = 103 }
    }
};

#endif  /* BASE16_oceanicnext_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
