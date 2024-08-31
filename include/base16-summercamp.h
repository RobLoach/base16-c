/**
 * Base16 summercamp 
 *
 * @author zoe firi (zoefiri.github.io)
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

#ifndef BASE16_summercamp_H__
#define BASE16_summercamp_H__

/**
 * The Base16 summercamp scheme.
 *
 * By: zoe firi (zoefiri.github.io)
 */
extern const base16_scheme base16_summercamp;

#endif  /* BASE16_summercamp_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_summercamp_IMPLEMENTATION_ONCE
#define BASE16_summercamp_IMPLEMENTATION_ONCE

const base16_scheme base16_summercamp = {
    .name = "summercamp",
    .base = {
        { .r = 28, .g = 24, .b = 16 },
        { .r = 42, .g = 38, .b = 28 },
        { .r = 58, .g = 53, .b = 39 },
        { .r = 80, .g = 75, .b = 56 },
        { .r = 95, .g = 91, .b = 69 },
        { .r = 115, .g = 110, .b = 85 },
        { .r = 186, .g = 182, .b = 150 },
        { .r = 248, .g = 245, .b = 222 },
        { .r = 227, .g = 81, .b = 66 },
        { .r = 251, .g = 161, .b = 27 },
        { .r = 242, .g = 255, .b = 39 },
        { .r = 92, .g = 235, .b = 90 },
        { .r = 90, .g = 235, .b = 188 },
        { .r = 72, .g = 155, .b = 240 },
        { .r = 255, .g = 128, .b = 128 },
        { .r = 246, .g = 155, .b = 231 }
    }
};

#endif  /* BASE16_summercamp_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
