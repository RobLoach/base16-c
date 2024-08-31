/**
 * Base16 Edge Dark 
 *
 * @author cjayross (https://github.com/cjayross)
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

#ifndef BASE16_edge_dark_H__
#define BASE16_edge_dark_H__

/**
 * The Base16 Edge Dark scheme.
 *
 * By: cjayross (https://github.com/cjayross)
 */
extern const base16_scheme base16_edge_dark;

#endif  /* BASE16_edge_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_edge_dark_IMPLEMENTATION_ONCE
#define BASE16_edge_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_edge_dark = {
    .name = "Edge Dark",
    .base = {
        { .r = 38, .g = 39, .b = 41 },
        { .r = 136, .g = 144, .b = 159 },
        { .r = 183, .g = 190, .b = 201 },
        { .r = 62, .g = 66, .b = 73 },
        { .r = 115, .g = 179, .b = 231 },
        { .r = 183, .g = 190, .b = 201 },
        { .r = 211, .g = 144, .b = 231 },
        { .r = 62, .g = 66, .b = 73 },
        { .r = 231, .g = 113, .b = 113 },
        { .r = 231, .g = 113, .b = 113 },
        { .r = 219, .g = 183, .b = 116 },
        { .r = 161, .g = 191, .b = 120 },
        { .r = 94, .g = 186, .b = 165 },
        { .r = 115, .g = 179, .b = 231 },
        { .r = 211, .g = 144, .b = 231 },
        { .r = 94, .g = 186, .b = 165 }
    }
};

#endif  /* BASE16_edge_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
