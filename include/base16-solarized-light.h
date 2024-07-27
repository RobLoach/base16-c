/**
 * Base16 Solarized Light 
 * 
 * @author Ethan Schoonover (modified by aramisgithub)
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

#ifndef BASE16_solarized_light_H__
#define BASE16_solarized_light_H__

/**
 * The Base16 Solarized Light scheme.
 * 
 * By: Ethan Schoonover (modified by aramisgithub)
 */
extern const base16_scheme base16_solarized_light;

#endif  /* BASE16_solarized_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_solarized_light_IMPLEMENTATION_ONCE
#define BASE16_solarized_light_IMPLEMENTATION_ONCE

const base16_scheme base16_solarized_light = {
    .name = "Solarized Light",
    .base = {
        { .r = 253, .g = 246, .b = 227 },
        { .r = 238, .g = 232, .b = 213 },
        { .r = 147, .g = 161, .b = 161 },
        { .r = 131, .g = 148, .b = 150 },
        { .r = 101, .g = 123, .b = 131 },
        { .r = 88, .g = 110, .b = 117 },
        { .r = 7, .g = 54, .b = 66 },
        { .r = 0, .g = 43, .b = 54 },
        { .r = 220, .g = 50, .b = 47 },
        { .r = 203, .g = 75, .b = 22 },
        { .r = 181, .g = 137, .b = 0 },
        { .r = 133, .g = 153, .b = 0 },
        { .r = 42, .g = 161, .b = 152 },
        { .r = 38, .g = 139, .b = 210 },
        { .r = 108, .g = 113, .b = 196 },
        { .r = 211, .g = 54, .b = 130 }
    }
};

#endif  /* BASE16_solarized_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
