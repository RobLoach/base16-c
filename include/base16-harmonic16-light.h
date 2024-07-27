/**
 * Base16 Harmonic16 Light 
 * 
 * @author Jannik Siebert (https://github.com/janniks)
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

#ifndef BASE16_harmonic16_light_H__
#define BASE16_harmonic16_light_H__

/**
 * The Base16 Harmonic16 Light scheme.
 * 
 * By: Jannik Siebert (https://github.com/janniks)
 */
extern const base16_scheme base16_harmonic16_light;

#endif  /* BASE16_harmonic16_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_harmonic16_light_IMPLEMENTATION_ONCE
#define BASE16_harmonic16_light_IMPLEMENTATION_ONCE

const base16_scheme base16_harmonic16_light = {
    .name = "Harmonic16 Light",
    .base = {
        { .r = 247, .g = 249, .b = 251 },
        { .r = 229, .g = 235, .b = 241 },
        { .r = 203, .g = 214, .b = 226 },
        { .r = 170, .g = 188, .b = 206 },
        { .r = 98, .g = 126, .b = 153 },
        { .r = 64, .g = 92, .b = 121 },
        { .r = 34, .g = 59, .b = 84 },
        { .r = 11, .g = 28, .b = 44 },
        { .r = 191, .g = 139, .b = 86 },
        { .r = 191, .g = 191, .b = 86 },
        { .r = 139, .g = 191, .b = 86 },
        { .r = 86, .g = 191, .b = 139 },
        { .r = 86, .g = 139, .b = 191 },
        { .r = 139, .g = 86, .b = 191 },
        { .r = 191, .g = 86, .b = 139 },
        { .r = 191, .g = 86, .b = 86 }
    }
};

#endif  /* BASE16_harmonic16_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
