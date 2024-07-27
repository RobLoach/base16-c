/**
 * Base16 lime 
 * 
 * @author limelier
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

#ifndef BASE16_lime_H__
#define BASE16_lime_H__

/**
 * The Base16 lime scheme.
 * 
 * By: limelier
 */
extern const base16_scheme base16_lime;

#endif  /* BASE16_lime_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_lime_IMPLEMENTATION_ONCE
#define BASE16_lime_IMPLEMENTATION_ONCE

const base16_scheme base16_lime = {
    .name = "lime",
    .base = {
        { .r = 26, .g = 26, .b = 47 },
        { .r = 32, .g = 32, .b = 48 },
        { .r = 42, .g = 42, .b = 63 },
        { .r = 49, .g = 49, .b = 64 },
        { .r = 81, .g = 81, .b = 85 },
        { .r = 129, .g = 129, .b = 117 },
        { .r = 255, .g = 242, .b = 209 },
        { .r = 255, .g = 248, .b = 225 },
        { .r = 255, .g = 102, .b = 42 },
        { .r = 255, .g = 119, .b = 58 },
        { .r = 255, .g = 209, .b = 94 },
        { .r = 140, .g = 217, .b = 124 },
        { .r = 76, .g = 173, .b = 131 },
        { .r = 43, .g = 146, .b = 111 },
        { .r = 27, .g = 130, .b = 95 },
        { .r = 180, .g = 217, .b = 124 }
    }
};

#endif  /* BASE16_lime_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
