/**
 * Base16 Embers 
 *
 * @author Jannik Siebert (https://github.com/janniks)
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

#ifndef BASE16_embers_H__
#define BASE16_embers_H__

/**
 * The Base16 Embers scheme.
 *
 * By: Jannik Siebert (https://github.com/janniks)
 */
extern const base16_scheme base16_embers;

#endif  /* BASE16_embers_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_embers_IMPLEMENTATION_ONCE
#define BASE16_embers_IMPLEMENTATION_ONCE

const base16_scheme base16_embers = {
    .name = "Embers",
    .base = {
        { .r = 22, .g = 19, .b = 15 },
        { .r = 44, .g = 38, .b = 32 },
        { .r = 67, .g = 59, .b = 50 },
        { .r = 90, .g = 80, .b = 71 },
        { .r = 138, .g = 128, .b = 117 },
        { .r = 163, .g = 154, .b = 144 },
        { .r = 190, .g = 182, .b = 174 },
        { .r = 219, .g = 214, .b = 209 },
        { .r = 130, .g = 109, .b = 87 },
        { .r = 130, .g = 130, .b = 87 },
        { .r = 109, .g = 130, .b = 87 },
        { .r = 87, .g = 130, .b = 109 },
        { .r = 87, .g = 109, .b = 130 },
        { .r = 109, .g = 87, .b = 130 },
        { .r = 130, .g = 87, .b = 109 },
        { .r = 130, .g = 87, .b = 87 }
    }
};

#endif  /* BASE16_embers_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
