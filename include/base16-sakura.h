/**
 * Base16 Sakura 
 * 
 * @author Misterio77 (http://github.com/Misterio77)
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

#ifndef BASE16_sakura_H__
#define BASE16_sakura_H__

/**
 * The Base16 Sakura scheme.
 * 
 * By: Misterio77 (http://github.com/Misterio77)
 */
extern const base16_scheme base16_sakura;

#endif  /* BASE16_sakura_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_sakura_IMPLEMENTATION_ONCE
#define BASE16_sakura_IMPLEMENTATION_ONCE

const base16_scheme base16_sakura = {
    .name = "Sakura",
    .base = {
        { .r = 254, .g = 237, .b = 243 },
        { .r = 248, .g = 226, .b = 231 },
        { .r = 224, .g = 204, .b = 209 },
        { .r = 117, .g = 95, .b = 100 },
        { .r = 102, .g = 80, .b = 85 },
        { .r = 86, .g = 68, .b = 72 },
        { .r = 66, .g = 56, .b = 58 },
        { .r = 51, .g = 41, .b = 43 },
        { .r = 223, .g = 45, .b = 82 },
        { .r = 246, .g = 102, .b = 30 },
        { .r = 194, .g = 148, .b = 97 },
        { .r = 46, .g = 145, .b = 109 },
        { .r = 29, .g = 137, .b = 145 },
        { .r = 0, .g = 110, .b = 147 },
        { .r = 94, .g = 33, .b = 128 },
        { .r = 186, .g = 13, .b = 53 }
    }
};

#endif  /* BASE16_sakura_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
