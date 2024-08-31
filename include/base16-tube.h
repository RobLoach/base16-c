/**
 * Base16 London Tube 
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

#ifndef BASE16_tube_H__
#define BASE16_tube_H__

/**
 * The Base16 London Tube scheme.
 *
 * By: Jan T. Sott
 */
extern const base16_scheme base16_tube;

#endif  /* BASE16_tube_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tube_IMPLEMENTATION_ONCE
#define BASE16_tube_IMPLEMENTATION_ONCE

const base16_scheme base16_tube = {
    .name = "London Tube",
    .base = {
        { .r = 35, .g = 31, .b = 32 },
        { .r = 28, .g = 63, .b = 149 },
        { .r = 90, .g = 87, .b = 88 },
        { .r = 115, .g = 113, .b = 113 },
        { .r = 149, .g = 156, .b = 161 },
        { .r = 217, .g = 216, .b = 216 },
        { .r = 231, .g = 231, .b = 232 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 238, .g = 46, .b = 36 },
        { .r = 243, .g = 134, .b = 161 },
        { .r = 255, .g = 210, .b = 4 },
        { .r = 0, .g = 133, .b = 62 },
        { .r = 133, .g = 206, .b = 188 },
        { .r = 0, .g = 157, .b = 220 },
        { .r = 152, .g = 0, .b = 93 },
        { .r = 176, .g = 97, .b = 16 }
    }
};

#endif  /* BASE16_tube_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
