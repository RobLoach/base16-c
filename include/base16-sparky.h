/**
 * Base16 Sparky 
 * 
 * @author Leila Sother (https://github.com/mixcoac)
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

#ifndef BASE16_sparky_H__
#define BASE16_sparky_H__

/**
 * The Base16 Sparky scheme.
 * 
 * By: Leila Sother (https://github.com/mixcoac)
 */
extern const base16_scheme base16_sparky;

#endif  /* BASE16_sparky_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_sparky_IMPLEMENTATION_ONCE
#define BASE16_sparky_IMPLEMENTATION_ONCE

const base16_scheme base16_sparky = {
    .name = "Sparky",
    .base = {
        { .r = 7, .g = 43, .b = 49 },
        { .r = 0, .g = 49, .b = 60 },
        { .r = 0, .g = 60, .b = 70 },
        { .r = 0, .g = 59, .b = 73 },
        { .r = 0, .g = 119, .b = 139 },
        { .r = 244, .g = 245, .b = 240 },
        { .r = 245, .g = 245, .b = 241 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 88, .b = 93 },
        { .r = 255, .g = 143, .b = 28 },
        { .r = 251, .g = 221, .b = 64 },
        { .r = 120, .g = 214, .b = 75 },
        { .r = 45, .g = 204, .b = 211 },
        { .r = 70, .g = 152, .b = 203 },
        { .r = 213, .g = 158, .b = 215 },
        { .r = 155, .g = 112, .b = 77 }
    }
};

#endif  /* BASE16_sparky_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
