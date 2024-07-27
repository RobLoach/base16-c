/**
 * Base16 Black Metal (Khold) 
 * 
 * @author metalelf0 (https://github.com/metalelf0)
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

#ifndef BASE16_black_metal_khold_H__
#define BASE16_black_metal_khold_H__

/**
 * The Base16 Black Metal (Khold) scheme.
 * 
 * By: metalelf0 (https://github.com/metalelf0)
 */
extern const base16_scheme base16_black_metal_khold;

#endif  /* BASE16_black_metal_khold_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_black_metal_khold_IMPLEMENTATION_ONCE
#define BASE16_black_metal_khold_IMPLEMENTATION_ONCE

const base16_scheme base16_black_metal_khold = {
    .name = "Black Metal (Khold)",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 18, .g = 18, .b = 18 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 51, .g = 51, .b = 51 },
        { .r = 153, .g = 153, .b = 153 },
        { .r = 193, .g = 193, .b = 193 },
        { .r = 153, .g = 153, .b = 153 },
        { .r = 193, .g = 193, .b = 193 },
        { .r = 95, .g = 135, .b = 135 },
        { .r = 170, .g = 170, .b = 170 },
        { .r = 151, .g = 75, .b = 70 },
        { .r = 236, .g = 238, .b = 227 },
        { .r = 170, .g = 170, .b = 170 },
        { .r = 136, .g = 136, .b = 136 },
        { .r = 153, .g = 153, .b = 153 },
        { .r = 68, .g = 68, .b = 68 }
    }
};

#endif  /* BASE16_black_metal_khold_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
