/**
 * Base16 Colors 
 * 
 * @author mrmrs (http://clrs.cc)
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

#ifndef BASE16_colors_H__
#define BASE16_colors_H__

/**
 * The Base16 Colors scheme.
 * 
 * By: mrmrs (http://clrs.cc)
 */
extern const base16_scheme base16_colors;

#endif  /* BASE16_colors_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_colors_IMPLEMENTATION_ONCE
#define BASE16_colors_IMPLEMENTATION_ONCE

const base16_scheme base16_colors = {
    .name = "Colors",
    .base = {
        { .r = 17, .g = 17, .b = 17 },
        { .r = 51, .g = 51, .b = 51 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 119, .g = 119, .b = 119 },
        { .r = 153, .g = 153, .b = 153 },
        { .r = 187, .g = 187, .b = 187 },
        { .r = 221, .g = 221, .b = 221 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 65, .b = 54 },
        { .r = 255, .g = 133, .b = 27 },
        { .r = 255, .g = 220, .b = 0 },
        { .r = 46, .g = 204, .b = 64 },
        { .r = 127, .g = 219, .b = 255 },
        { .r = 0, .g = 116, .b = 217 },
        { .r = 177, .g = 13, .b = 201 },
        { .r = 133, .g = 20, .b = 75 }
    }
};

#endif  /* BASE16_colors_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
