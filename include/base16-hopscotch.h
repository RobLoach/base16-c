/**
 * Base16 Hopscotch 
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

#ifndef BASE16_hopscotch_H__
#define BASE16_hopscotch_H__

/**
 * The Base16 Hopscotch scheme.
 * 
 * By: Jan T. Sott
 */
extern const base16_scheme base16_hopscotch;

#endif  /* BASE16_hopscotch_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_hopscotch_IMPLEMENTATION_ONCE
#define BASE16_hopscotch_IMPLEMENTATION_ONCE

const base16_scheme base16_hopscotch = {
    .name = "Hopscotch",
    .base = {
        { .r = 50, .g = 41, .b = 49 },
        { .r = 67, .g = 59, .b = 66 },
        { .r = 92, .g = 84, .b = 91 },
        { .r = 121, .g = 115, .b = 121 },
        { .r = 152, .g = 148, .b = 152 },
        { .r = 185, .g = 181, .b = 184 },
        { .r = 213, .g = 211, .b = 213 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 221, .g = 70, .b = 76 },
        { .r = 253, .g = 139, .b = 25 },
        { .r = 253, .g = 204, .b = 89 },
        { .r = 143, .g = 193, .b = 62 },
        { .r = 20, .g = 155, .b = 147 },
        { .r = 18, .g = 144, .b = 191 },
        { .r = 200, .g = 94, .b = 124 },
        { .r = 179, .g = 53, .b = 8 }
    }
};

#endif  /* BASE16_hopscotch_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
