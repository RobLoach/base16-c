/**
 * Base16 Brewer 
 *
 * @author Timothée Poisot (http://github.com/tpoisot)
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

#ifndef BASE16_brewer_H__
#define BASE16_brewer_H__

/**
 * The Base16 Brewer scheme.
 *
 * By: Timothée Poisot (http://github.com/tpoisot)
 */
extern const base16_scheme base16_brewer;

#endif  /* BASE16_brewer_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_brewer_IMPLEMENTATION_ONCE
#define BASE16_brewer_IMPLEMENTATION_ONCE

const base16_scheme base16_brewer = {
    .name = "Brewer",
    .base = {
        { .r = 12, .g = 13, .b = 14 },
        { .r = 46, .g = 47, .b = 48 },
        { .r = 81, .g = 82, .b = 83 },
        { .r = 115, .g = 116, .b = 117 },
        { .r = 149, .g = 150, .b = 151 },
        { .r = 183, .g = 184, .b = 185 },
        { .r = 218, .g = 219, .b = 220 },
        { .r = 252, .g = 253, .b = 254 },
        { .r = 227, .g = 26, .b = 28 },
        { .r = 230, .g = 85, .b = 13 },
        { .r = 220, .g = 160, .b = 96 },
        { .r = 49, .g = 163, .b = 84 },
        { .r = 128, .g = 177, .b = 211 },
        { .r = 49, .g = 130, .b = 189 },
        { .r = 117, .g = 107, .b = 177 },
        { .r = 177, .g = 89, .b = 40 }
    }
};

#endif  /* BASE16_brewer_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
