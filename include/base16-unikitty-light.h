/**
 * Base16 Unikitty Light 
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

#ifndef BASE16_unikitty_light_H__
#define BASE16_unikitty_light_H__

/**
 * The Base16 Unikitty Light scheme.
 * 
 * By: Josh W Lewis (@joshwlewis)
 */
extern const base16_scheme base16_unikitty_light;

#endif  /* BASE16_unikitty_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_unikitty_light_IMPLEMENTATION_ONCE
#define BASE16_unikitty_light_IMPLEMENTATION_ONCE

const base16_scheme base16_unikitty_light = {
    .name = "Unikitty Light",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 225, .g = 225, .b = 226 },
        { .r = 196, .g = 195, .b = 197 },
        { .r = 167, .g = 165, .b = 168 },
        { .r = 137, .g = 135, .b = 139 },
        { .r = 108, .g = 105, .b = 110 },
        { .r = 79, .g = 75, .b = 81 },
        { .r = 50, .g = 45, .b = 52 },
        { .r = 216, .g = 19, .b = 127 },
        { .r = 214, .g = 84, .b = 7 },
        { .r = 220, .g = 138, .b = 14 },
        { .r = 23, .g = 173, .b = 152 },
        { .r = 20, .g = 155, .b = 218 },
        { .r = 119, .g = 93, .b = 255 },
        { .r = 170, .g = 23, .b = 230 },
        { .r = 224, .g = 19, .b = 208 }
    }
};

#endif  /* BASE16_unikitty_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
