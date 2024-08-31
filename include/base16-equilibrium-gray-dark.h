/**
 * Base16 Equilibrium Gray Dark 
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

#ifndef BASE16_equilibrium_gray_dark_H__
#define BASE16_equilibrium_gray_dark_H__

/**
 * The Base16 Equilibrium Gray Dark scheme.
 *
 * By: Carlo Abelli
 */
extern const base16_scheme base16_equilibrium_gray_dark;

#endif  /* BASE16_equilibrium_gray_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_equilibrium_gray_dark_IMPLEMENTATION_ONCE
#define BASE16_equilibrium_gray_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_equilibrium_gray_dark = {
    .name = "Equilibrium Gray Dark",
    .base = {
        { .r = 17, .g = 17, .b = 17 },
        { .r = 27, .g = 27, .b = 27 },
        { .r = 38, .g = 38, .b = 38 },
        { .r = 119, .g = 119, .b = 119 },
        { .r = 145, .g = 145, .b = 145 },
        { .r = 171, .g = 171, .b = 171 },
        { .r = 198, .g = 198, .b = 198 },
        { .r = 226, .g = 226, .b = 226 },
        { .r = 240, .g = 67, .b = 57 },
        { .r = 223, .g = 89, .b = 35 },
        { .r = 187, .g = 136, .b = 1 },
        { .r = 127, .g = 139, .b = 0 },
        { .r = 0, .g = 148, .b = 139 },
        { .r = 0, .g = 141, .b = 209 },
        { .r = 106, .g = 127, .b = 210 },
        { .r = 227, .g = 72, .b = 142 }
    }
};

#endif  /* BASE16_equilibrium_gray_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
