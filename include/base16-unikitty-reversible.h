/**
 * Base16 Unikitty Reversible 
 * 
 * @author Josh W Lewis (@joshwlewis)
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

#ifndef BASE16_unikitty_reversible_H__
#define BASE16_unikitty_reversible_H__

/**
 * The Base16 Unikitty Reversible scheme.
 * 
 * By: Josh W Lewis (@joshwlewis)
 */
extern const base16_scheme base16_unikitty_reversible;

#endif  /* BASE16_unikitty_reversible_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_unikitty_reversible_IMPLEMENTATION_ONCE
#define BASE16_unikitty_reversible_IMPLEMENTATION_ONCE

const base16_scheme base16_unikitty_reversible = {
    .name = "Unikitty Reversible",
    .base = {
        { .r = 46, .g = 42, .b = 49 },
        { .r = 75, .g = 72, .b = 78 },
        { .r = 105, .g = 102, .b = 107 },
        { .r = 135, .g = 133, .b = 137 },
        { .r = 165, .g = 163, .b = 166 },
        { .r = 195, .g = 194, .b = 196 },
        { .r = 225, .g = 224, .b = 225 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 216, .g = 19, .b = 127 },
        { .r = 214, .g = 84, .b = 7 },
        { .r = 220, .g = 138, .b = 14 },
        { .r = 23, .g = 173, .b = 152 },
        { .r = 20, .g = 155, .b = 218 },
        { .r = 120, .g = 100, .b = 250 },
        { .r = 179, .g = 60, .b = 232 },
        { .r = 212, .g = 26, .b = 205 }
    }
};

#endif  /* BASE16_unikitty_reversible_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
