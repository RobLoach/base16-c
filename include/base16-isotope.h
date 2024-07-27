/**
 * Base16 Isotope 
 * 
 * @author Jan T. Sott
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

#ifndef BASE16_isotope_H__
#define BASE16_isotope_H__

/**
 * The Base16 Isotope scheme.
 * 
 * By: Jan T. Sott
 */
extern const base16_scheme base16_isotope;

#endif  /* BASE16_isotope_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_isotope_IMPLEMENTATION_ONCE
#define BASE16_isotope_IMPLEMENTATION_ONCE

const base16_scheme base16_isotope = {
    .name = "Isotope",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 64, .g = 64, .b = 64 },
        { .r = 96, .g = 96, .b = 96 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 0, .b = 0 },
        { .r = 255, .g = 153, .b = 0 },
        { .r = 255, .g = 0, .b = 153 },
        { .r = 51, .g = 255, .b = 0 },
        { .r = 0, .g = 255, .b = 255 },
        { .r = 0, .g = 102, .b = 255 },
        { .r = 204, .g = 0, .b = 255 },
        { .r = 51, .g = 0, .b = 255 }
    }
};

#endif  /* BASE16_isotope_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
