/**
 * Base16 ShadeSmear Light 
 *
 * @author Kyle Giammarco (http://kyle.giammar.co)
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

#ifndef BASE16_shadesmear_light_H__
#define BASE16_shadesmear_light_H__

/**
 * The Base16 ShadeSmear Light scheme.
 *
 * By: Kyle Giammarco (http://kyle.giammar.co)
 */
extern const base16_scheme base16_shadesmear_light;

#endif  /* BASE16_shadesmear_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_shadesmear_light_IMPLEMENTATION_ONCE
#define BASE16_shadesmear_light_IMPLEMENTATION_ONCE

const base16_scheme base16_shadesmear_light = {
    .name = "ShadeSmear Light",
    .base = {
        { .r = 219, .g = 219, .b = 219 },
        { .r = 228, .g = 228, .b = 228 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 78, .g = 78, .b = 78 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 35, .g = 35, .b = 35 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 228, .g = 228, .b = 228 },
        { .r = 204, .g = 84, .b = 80 },
        { .r = 166, .g = 66, .b = 112 },
        { .r = 48, .g = 120, .b = 120 },
        { .r = 113, .g = 152, .b = 59 },
        { .r = 197, .g = 125, .b = 66 },
        { .r = 55, .g = 99, .b = 136 },
        { .r = 215, .g = 171, .b = 84 },
        { .r = 109, .g = 109, .b = 109 }
    }
};

#endif  /* BASE16_shadesmear_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
