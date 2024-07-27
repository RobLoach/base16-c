/**
 * Base16 Fruit Soda 
 * 
 * @author jozip
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

#ifndef BASE16_fruit_soda_H__
#define BASE16_fruit_soda_H__

/**
 * The Base16 Fruit Soda scheme.
 * 
 * By: jozip
 */
extern const base16_scheme base16_fruit_soda;

#endif  /* BASE16_fruit_soda_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_fruit_soda_IMPLEMENTATION_ONCE
#define BASE16_fruit_soda_IMPLEMENTATION_ONCE

const base16_scheme base16_fruit_soda = {
    .name = "Fruit Soda",
    .base = {
        { .r = 241, .g = 236, .b = 241 },
        { .r = 224, .g = 222, .b = 224 },
        { .r = 216, .g = 213, .b = 213 },
        { .r = 181, .g = 180, .b = 182 },
        { .r = 151, .g = 149, .b = 152 },
        { .r = 81, .g = 81, .b = 81 },
        { .r = 71, .g = 69, .b = 69 },
        { .r = 45, .g = 44, .b = 44 },
        { .r = 254, .g = 62, .b = 49 },
        { .r = 254, .g = 109, .b = 8 },
        { .r = 247, .g = 226, .b = 3 },
        { .r = 71, .g = 247, .b = 76 },
        { .r = 15, .g = 156, .b = 253 },
        { .r = 41, .g = 49, .b = 223 },
        { .r = 97, .g = 31, .b = 206 },
        { .r = 177, .g = 111, .b = 64 }
    }
};

#endif  /* BASE16_fruit_soda_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
