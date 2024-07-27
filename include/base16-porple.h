/**
 * Base16 Porple 
 * 
 * @author Niek den Breeje (https://github.com/AuditeMarlow)
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

#ifndef BASE16_porple_H__
#define BASE16_porple_H__

/**
 * The Base16 Porple scheme.
 * 
 * By: Niek den Breeje (https://github.com/AuditeMarlow)
 */
extern const base16_scheme base16_porple;

#endif  /* BASE16_porple_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_porple_IMPLEMENTATION_ONCE
#define BASE16_porple_IMPLEMENTATION_ONCE

const base16_scheme base16_porple = {
    .name = "Porple",
    .base = {
        { .r = 41, .g = 44, .b = 54 },
        { .r = 51, .g = 51, .b = 68 },
        { .r = 71, .g = 65, .b = 96 },
        { .r = 101, .g = 86, .b = 138 },
        { .r = 184, .g = 184, .b = 184 },
        { .r = 216, .g = 216, .b = 216 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 248, .g = 248, .b = 248 },
        { .r = 248, .g = 69, .b = 71 },
        { .r = 210, .g = 142, .b = 93 },
        { .r = 239, .g = 161, .b = 107 },
        { .r = 149, .g = 199, .b = 111 },
        { .r = 100, .g = 135, .b = 143 },
        { .r = 132, .g = 133, .b = 206 },
        { .r = 183, .g = 73, .b = 137 },
        { .r = 152, .g = 104, .b = 65 }
    }
};

#endif  /* BASE16_porple_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
