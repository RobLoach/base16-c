/**
 * Base16 Eva 
 * 
 * @author kjakapat (https://github.com/kjakapat)
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

#ifndef BASE16_eva_H__
#define BASE16_eva_H__

/**
 * The Base16 Eva scheme.
 * 
 * By: kjakapat (https://github.com/kjakapat)
 */
extern const base16_scheme base16_eva;

#endif  /* BASE16_eva_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_eva_IMPLEMENTATION_ONCE
#define BASE16_eva_IMPLEMENTATION_ONCE

const base16_scheme base16_eva = {
    .name = "Eva",
    .base = {
        { .r = 42, .g = 59, .b = 77 },
        { .r = 61, .g = 86, .b = 111 },
        { .r = 75, .g = 105, .b = 136 },
        { .r = 85, .g = 121, .b = 156 },
        { .r = 126, .g = 144, .b = 163 },
        { .r = 159, .g = 162, .b = 166 },
        { .r = 214, .g = 215, .b = 217 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 196, .g = 103, .b = 108 },
        { .r = 255, .g = 153, .b = 102 },
        { .r = 255, .g = 255, .b = 102 },
        { .r = 102, .g = 255, .b = 102 },
        { .r = 75, .g = 143, .b = 119 },
        { .r = 21, .g = 244, .b = 238 },
        { .r = 156, .g = 108, .b = 211 },
        { .r = 187, .g = 100, .b = 169 }
    }
};

#endif  /* BASE16_eva_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
