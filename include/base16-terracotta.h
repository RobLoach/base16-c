/**
 * Base16 Terracotta 
 * 
 * @author Alexander Rossell Hayes (https://github.com/rossellhayes)
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

#ifndef BASE16_terracotta_H__
#define BASE16_terracotta_H__

/**
 * The Base16 Terracotta scheme.
 * 
 * By: Alexander Rossell Hayes (https://github.com/rossellhayes)
 */
extern const base16_scheme base16_terracotta;

#endif  /* BASE16_terracotta_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_terracotta_IMPLEMENTATION_ONCE
#define BASE16_terracotta_IMPLEMENTATION_ONCE

const base16_scheme base16_terracotta = {
    .name = "Terracotta",
    .base = {
        { .r = 239, .g = 234, .b = 232 },
        { .r = 223, .g = 214, .b = 209 },
        { .r = 208, .g = 193, .b = 187 },
        { .r = 192, .g = 172, .b = 164 },
        { .r = 89, .g = 69, .b = 61 },
        { .r = 71, .g = 55, .b = 49 },
        { .r = 53, .g = 42, .b = 37 },
        { .r = 36, .g = 28, .b = 25 },
        { .r = 167, .g = 80, .b = 69 },
        { .r = 189, .g = 105, .b = 66 },
        { .r = 206, .g = 148, .b = 62 },
        { .r = 122, .g = 137, .b = 74 },
        { .r = 132, .g = 127, .b = 158 },
        { .r = 98, .g = 85, .b = 116 },
        { .r = 141, .g = 89, .b = 104 },
        { .r = 176, .g = 113, .b = 88 }
    }
};

#endif  /* BASE16_terracotta_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
