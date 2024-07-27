/**
 * Base16 Equilibrium Light 
 * 
 * @author Carlo Abelli
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

#ifndef BASE16_equilibrium_light_H__
#define BASE16_equilibrium_light_H__

/**
 * The Base16 Equilibrium Light scheme.
 * 
 * By: Carlo Abelli
 */
extern const base16_scheme base16_equilibrium_light;

#endif  /* BASE16_equilibrium_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_equilibrium_light_IMPLEMENTATION_ONCE
#define BASE16_equilibrium_light_IMPLEMENTATION_ONCE

const base16_scheme base16_equilibrium_light = {
    .name = "Equilibrium Light",
    .base = {
        { .r = 245, .g = 240, .b = 231 },
        { .r = 231, .g = 226, .b = 217 },
        { .r = 216, .g = 212, .b = 203 },
        { .r = 115, .g = 119, .b = 127 },
        { .r = 90, .g = 95, .b = 102 },
        { .r = 67, .g = 71, .b = 78 },
        { .r = 44, .g = 49, .b = 56 },
        { .r = 24, .g = 28, .b = 34 },
        { .r = 208, .g = 32, .b = 35 },
        { .r = 191, .g = 62, .b = 5 },
        { .r = 157, .g = 111, .b = 0 },
        { .r = 99, .g = 114, .b = 0 },
        { .r = 0, .g = 122, .b = 114 },
        { .r = 0, .g = 115, .b = 181 },
        { .r = 78, .g = 102, .b = 182 },
        { .r = 196, .g = 39, .b = 117 }
    }
};

#endif  /* BASE16_equilibrium_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
