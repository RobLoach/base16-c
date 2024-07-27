/**
 * Base16 Brogrammer 
 * 
 * @author Vik Ramanujam (http://github.com/piggyslasher)
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

#ifndef BASE16_brogrammer_H__
#define BASE16_brogrammer_H__

/**
 * The Base16 Brogrammer scheme.
 * 
 * By: Vik Ramanujam (http://github.com/piggyslasher)
 */
extern const base16_scheme base16_brogrammer;

#endif  /* BASE16_brogrammer_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_brogrammer_IMPLEMENTATION_ONCE
#define BASE16_brogrammer_IMPLEMENTATION_ONCE

const base16_scheme base16_brogrammer = {
    .name = "Brogrammer",
    .base = {
        { .r = 31, .g = 31, .b = 31 },
        { .r = 248, .g = 17, .b = 24 },
        { .r = 45, .g = 197, .b = 94 },
        { .r = 236, .g = 186, .b = 15 },
        { .r = 42, .g = 132, .b = 210 },
        { .r = 78, .g = 90, .b = 183 },
        { .r = 16, .g = 129, .b = 214 },
        { .r = 214, .g = 219, .b = 229 },
        { .r = 214, .g = 219, .b = 229 },
        { .r = 222, .g = 53, .b = 46 },
        { .r = 29, .g = 211, .b = 97 },
        { .r = 243, .g = 189, .b = 9 },
        { .r = 16, .g = 129, .b = 214 },
        { .r = 83, .g = 80, .b = 185 },
        { .r = 15, .g = 125, .b = 219 },
        { .r = 255, .g = 255, .b = 255 }
    }
};

#endif  /* BASE16_brogrammer_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
