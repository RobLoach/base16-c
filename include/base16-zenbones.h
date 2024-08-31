/**
 * Base16 Zenbones 
 *
 * @author mcchrish
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

#ifndef BASE16_zenbones_H__
#define BASE16_zenbones_H__

/**
 * The Base16 Zenbones scheme.
 *
 * By: mcchrish
 */
extern const base16_scheme base16_zenbones;

#endif  /* BASE16_zenbones_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_zenbones_IMPLEMENTATION_ONCE
#define BASE16_zenbones_IMPLEMENTATION_ONCE

const base16_scheme base16_zenbones = {
    .name = "Zenbones",
    .base = {
        { .r = 25, .g = 25, .b = 25 },
        { .r = 222, .g = 110, .b = 124 },
        { .r = 129, .g = 155, .b = 105 },
        { .r = 183, .g = 126, .b = 100 },
        { .r = 96, .g = 153, .b = 192 },
        { .r = 178, .g = 121, .b = 167 },
        { .r = 102, .g = 165, .b = 173 },
        { .r = 187, .g = 187, .b = 187 },
        { .r = 61, .g = 56, .b = 57 },
        { .r = 232, .g = 131, .b = 143 },
        { .r = 139, .g = 174, .b = 104 },
        { .r = 214, .g = 140, .b = 103 },
        { .r = 97, .g = 171, .b = 218 },
        { .r = 207, .g = 134, .b = 193 },
        { .r = 101, .g = 184, .b = 193 },
        { .r = 142, .g = 142, .b = 142 }
    }
};

#endif  /* BASE16_zenbones_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
