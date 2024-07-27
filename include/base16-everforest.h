/**
 * Base16 Everforest 
 * 
 * @author Sainnhe Park (https://github.com/sainnhe)
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

#ifndef BASE16_everforest_H__
#define BASE16_everforest_H__

/**
 * The Base16 Everforest scheme.
 * 
 * By: Sainnhe Park (https://github.com/sainnhe)
 */
extern const base16_scheme base16_everforest;

#endif  /* BASE16_everforest_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_everforest_IMPLEMENTATION_ONCE
#define BASE16_everforest_IMPLEMENTATION_ONCE

const base16_scheme base16_everforest = {
    .name = "Everforest",
    .base = {
        { .r = 47, .g = 56, .b = 62 },
        { .r = 55, .g = 66, .b = 71 },
        { .r = 74, .g = 85, .b = 91 },
        { .r = 133, .g = 146, .b = 137 },
        { .r = 157, .g = 169, .b = 160 },
        { .r = 211, .g = 198, .b = 170 },
        { .r = 228, .g = 225, .b = 205 },
        { .r = 253, .g = 246, .b = 227 },
        { .r = 127, .g = 187, .b = 179 },
        { .r = 214, .g = 153, .b = 182 },
        { .r = 219, .g = 188, .b = 127 },
        { .r = 131, .g = 192, .b = 146 },
        { .r = 230, .g = 152, .b = 117 },
        { .r = 167, .g = 192, .b = 128 },
        { .r = 230, .g = 126, .b = 128 },
        { .r = 234, .g = 237, .b = 200 }
    }
};

#endif  /* BASE16_everforest_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
