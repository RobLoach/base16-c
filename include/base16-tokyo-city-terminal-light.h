/**
 * Base16 Tokyo City Terminal Light 
 *
 * @author Michaël Ball
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

#ifndef BASE16_tokyo_city_terminal_light_H__
#define BASE16_tokyo_city_terminal_light_H__

/**
 * The Base16 Tokyo City Terminal Light scheme.
 *
 * By: Michaël Ball
 */
extern const base16_scheme base16_tokyo_city_terminal_light;

#endif  /* BASE16_tokyo_city_terminal_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tokyo_city_terminal_light_IMPLEMENTATION_ONCE
#define BASE16_tokyo_city_terminal_light_IMPLEMENTATION_ONCE

const base16_scheme base16_tokyo_city_terminal_light = {
    .name = "Tokyo City Terminal Light",
    .base = {
        { .r = 251, .g = 251, .b = 253 },
        { .r = 246, .g = 246, .b = 248 },
        { .r = 216, .g = 226, .b = 236 },
        { .r = 183, .g = 197, .b = 211 },
        { .r = 82, .g = 98, .b = 112 },
        { .r = 40, .g = 50, .b = 58 },
        { .r = 29, .g = 37, .b = 44 },
        { .r = 23, .g = 29, .b = 35 },
        { .r = 140, .g = 67, .b = 81 },
        { .r = 150, .g = 80, .b = 39 },
        { .r = 143, .g = 94, .b = 21 },
        { .r = 51, .g = 99, .b = 92 },
        { .r = 15, .g = 75, .b = 110 },
        { .r = 52, .g = 84, .b = 138 },
        { .r = 90, .g = 74, .b = 120 },
        { .r = 126, .g = 81, .b = 64 }
    }
};

#endif  /* BASE16_tokyo_city_terminal_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
