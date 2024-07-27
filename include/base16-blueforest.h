/**
 * Base16 Blue Forest 
 * 
 * @author alonsodomin (https://github.com/alonsodomin)
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

#ifndef BASE16_blueforest_H__
#define BASE16_blueforest_H__

/**
 * The Base16 Blue Forest scheme.
 * 
 * By: alonsodomin (https://github.com/alonsodomin)
 */
extern const base16_scheme base16_blueforest;

#endif  /* BASE16_blueforest_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_blueforest_IMPLEMENTATION_ONCE
#define BASE16_blueforest_IMPLEMENTATION_ONCE

const base16_scheme base16_blueforest = {
    .name = "Blue Forest",
    .base = {
        { .r = 20, .g = 31, .b = 46 },
        { .r = 30, .g = 92, .b = 30 },
        { .r = 39, .g = 62, .b = 92 },
        { .r = 160, .g = 255, .b = 160 },
        { .r = 30, .g = 92, .b = 30 },
        { .r = 255, .g = 204, .b = 51 },
        { .r = 145, .g = 204, .b = 255 },
        { .r = 55, .g = 87, .b = 128 },
        { .r = 255, .g = 250, .b = 177 },
        { .r = 255, .g = 128, .b = 128 },
        { .r = 145, .g = 204, .b = 255 },
        { .r = 128, .g = 255, .b = 128 },
        { .r = 128, .g = 255, .b = 128 },
        { .r = 162, .g = 207, .b = 245 },
        { .r = 0, .g = 153, .b = 255 },
        { .r = 231, .g = 231, .b = 231 }
    }
};

#endif  /* BASE16_blueforest_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
