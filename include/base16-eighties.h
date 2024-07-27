/**
 * Base16 Eighties 
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

#ifndef BASE16_eighties_H__
#define BASE16_eighties_H__

/**
 * The Base16 Eighties scheme.
 * 
 * By: Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_eighties;

#endif  /* BASE16_eighties_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_eighties_IMPLEMENTATION_ONCE
#define BASE16_eighties_IMPLEMENTATION_ONCE

const base16_scheme base16_eighties = {
    .name = "Eighties",
    .base = {
        { .r = 45, .g = 45, .b = 45 },
        { .r = 57, .g = 57, .b = 57 },
        { .r = 81, .g = 81, .b = 81 },
        { .r = 116, .g = 115, .b = 105 },
        { .r = 160, .g = 159, .b = 147 },
        { .r = 211, .g = 208, .b = 200 },
        { .r = 232, .g = 230, .b = 223 },
        { .r = 242, .g = 240, .b = 236 },
        { .r = 242, .g = 119, .b = 122 },
        { .r = 249, .g = 145, .b = 87 },
        { .r = 255, .g = 204, .b = 102 },
        { .r = 153, .g = 204, .b = 153 },
        { .r = 102, .g = 204, .b = 204 },
        { .r = 102, .g = 153, .b = 204 },
        { .r = 204, .g = 153, .b = 204 },
        { .r = 210, .g = 123, .b = 83 }
    }
};

#endif  /* BASE16_eighties_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
