/**
 * Base16 Shapeshifter 
 *
 * @author Tyler Benziger (http://tybenz.com)
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

#ifndef BASE16_shapeshifter_H__
#define BASE16_shapeshifter_H__

/**
 * The Base16 Shapeshifter scheme.
 *
 * By: Tyler Benziger (http://tybenz.com)
 */
extern const base16_scheme base16_shapeshifter;

#endif  /* BASE16_shapeshifter_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_shapeshifter_IMPLEMENTATION_ONCE
#define BASE16_shapeshifter_IMPLEMENTATION_ONCE

const base16_scheme base16_shapeshifter = {
    .name = "Shapeshifter",
    .base = {
        { .r = 249, .g = 249, .b = 249 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 171, .g = 171, .b = 171 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 52, .g = 52, .b = 52 },
        { .r = 16, .g = 32, .b = 21 },
        { .r = 4, .g = 4, .b = 4 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 233, .g = 47, .b = 47 },
        { .r = 224, .g = 148, .b = 72 },
        { .r = 221, .g = 221, .b = 19 },
        { .r = 14, .g = 216, .b = 57 },
        { .r = 35, .g = 237, .b = 218 },
        { .r = 59, .g = 72, .b = 227 },
        { .r = 249, .g = 150, .b = 226 },
        { .r = 105, .g = 84, .b = 45 }
    }
};

#endif  /* BASE16_shapeshifter_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
