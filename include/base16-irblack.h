/**
 * Base16 IR Black 
 *
 * @author Timothée Poisot (http://timotheepoisot.fr)
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

#ifndef BASE16_irblack_H__
#define BASE16_irblack_H__

/**
 * The Base16 IR Black scheme.
 *
 * By: Timothée Poisot (http://timotheepoisot.fr)
 */
extern const base16_scheme base16_irblack;

#endif  /* BASE16_irblack_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_irblack_IMPLEMENTATION_ONCE
#define BASE16_irblack_IMPLEMENTATION_ONCE

const base16_scheme base16_irblack = {
    .name = "IR Black",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 36, .g = 36, .b = 34 },
        { .r = 72, .g = 72, .b = 68 },
        { .r = 108, .g = 108, .b = 102 },
        { .r = 145, .g = 143, .b = 136 },
        { .r = 181, .g = 179, .b = 170 },
        { .r = 217, .g = 215, .b = 204 },
        { .r = 253, .g = 251, .b = 238 },
        { .r = 255, .g = 108, .b = 96 },
        { .r = 233, .g = 192, .b = 98 },
        { .r = 255, .g = 255, .b = 182 },
        { .r = 168, .g = 255, .b = 96 },
        { .r = 198, .g = 197, .b = 254 },
        { .r = 150, .g = 203, .b = 254 },
        { .r = 255, .g = 115, .b = 253 },
        { .r = 177, .g = 138, .b = 61 }
    }
};

#endif  /* BASE16_irblack_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
