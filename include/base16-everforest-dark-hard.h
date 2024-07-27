/**
 * Base16 Everforest Dark Hard 
 * 
 * @author Oskar Liew (https://github.com/OskarLiew)
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

#ifndef BASE16_everforest_dark_hard_H__
#define BASE16_everforest_dark_hard_H__

/**
 * The Base16 Everforest Dark Hard scheme.
 * 
 * By: Oskar Liew (https://github.com/OskarLiew)
 */
extern const base16_scheme base16_everforest_dark_hard;

#endif  /* BASE16_everforest_dark_hard_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_everforest_dark_hard_IMPLEMENTATION_ONCE
#define BASE16_everforest_dark_hard_IMPLEMENTATION_ONCE

const base16_scheme base16_everforest_dark_hard = {
    .name = "Everforest Dark Hard",
    .base = {
        { .r = 39, .g = 46, .b = 51 },
        { .r = 46, .g = 56, .b = 60 },
        { .r = 65, .g = 75, .b = 80 },
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
        { .r = 76, .g = 55, .b = 67 }
    }
};

#endif  /* BASE16_everforest_dark_hard_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
