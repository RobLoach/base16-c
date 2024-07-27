/**
 * Base16 Cupcake 
 * 
 * @author Chris Kempson (http://chriskempson.com)
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

#ifndef BASE16_cupcake_H__
#define BASE16_cupcake_H__

/**
 * The Base16 Cupcake scheme.
 * 
 * By: Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_cupcake;

#endif  /* BASE16_cupcake_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_cupcake_IMPLEMENTATION_ONCE
#define BASE16_cupcake_IMPLEMENTATION_ONCE

const base16_scheme base16_cupcake = {
    .name = "Cupcake",
    .base = {
        { .r = 251, .g = 241, .b = 242 },
        { .r = 242, .g = 241, .b = 244 },
        { .r = 216, .g = 213, .b = 221 },
        { .r = 191, .g = 185, .b = 198 },
        { .r = 165, .g = 157, .b = 175 },
        { .r = 139, .g = 129, .b = 152 },
        { .r = 114, .g = 103, .b = 126 },
        { .r = 88, .g = 80, .b = 98 },
        { .r = 213, .g = 126, .b = 133 },
        { .r = 235, .g = 183, .b = 144 },
        { .r = 220, .g = 177, .b = 108 },
        { .r = 163, .g = 179, .b = 103 },
        { .r = 105, .g = 169, .b = 167 },
        { .r = 114, .g = 151, .b = 185 },
        { .r = 187, .g = 153, .b = 180 },
        { .r = 186, .g = 165, .b = 140 }
    }
};

#endif  /* BASE16_cupcake_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
