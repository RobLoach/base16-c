/**
 * Base16 selenized-light 
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

#ifndef BASE16_selenized_light_H__
#define BASE16_selenized_light_H__

/**
 * The Base16 selenized-light scheme.
 *
 * By: Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
 */
extern const base16_scheme base16_selenized_light;

#endif  /* BASE16_selenized_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_selenized_light_IMPLEMENTATION_ONCE
#define BASE16_selenized_light_IMPLEMENTATION_ONCE

const base16_scheme base16_selenized_light = {
    .name = "selenized-light",
    .base = {
        { .r = 251, .g = 243, .b = 219 },
        { .r = 236, .g = 227, .b = 204 },
        { .r = 213, .g = 205, .b = 182 },
        { .r = 144, .g = 153, .b = 149 },
        { .r = 144, .g = 153, .b = 149 },
        { .r = 83, .g = 103, .b = 109 },
        { .r = 58, .g = 77, .b = 83 },
        { .r = 58, .g = 77, .b = 83 },
        { .r = 204, .g = 23, .b = 41 },
        { .r = 188, .g = 88, .b = 25 },
        { .r = 167, .g = 131, .b = 0 },
        { .r = 66, .g = 139, .b = 0 },
        { .r = 0, .g = 151, .b = 138 },
        { .r = 0, .g = 109, .b = 206 },
        { .r = 130, .g = 93, .b = 192 },
        { .r = 196, .g = 67, .b = 146 }
    }
};

#endif  /* BASE16_selenized_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
