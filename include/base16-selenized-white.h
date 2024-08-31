/**
 * Base16 selenized-white 
 *
 * @author Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
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

#ifndef BASE16_selenized_white_H__
#define BASE16_selenized_white_H__

/**
 * The Base16 selenized-white scheme.
 *
 * By: Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
 */
extern const base16_scheme base16_selenized_white;

#endif  /* BASE16_selenized_white_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_selenized_white_IMPLEMENTATION_ONCE
#define BASE16_selenized_white_IMPLEMENTATION_ONCE

const base16_scheme base16_selenized_white = {
    .name = "selenized-white",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 235, .g = 235, .b = 235 },
        { .r = 205, .g = 205, .b = 205 },
        { .r = 135, .g = 135, .b = 135 },
        { .r = 135, .g = 135, .b = 135 },
        { .r = 71, .g = 71, .b = 71 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 191, .g = 0, .b = 0 },
        { .r = 186, .g = 55, .b = 0 },
        { .r = 175, .g = 133, .b = 0 },
        { .r = 0, .g = 132, .b = 0 },
        { .r = 0, .g = 154, .b = 138 },
        { .r = 0, .g = 84, .b = 207 },
        { .r = 107, .g = 64, .b = 195 },
        { .r = 221, .g = 15, .b = 157 }
    }
};

#endif  /* BASE16_selenized_white_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
