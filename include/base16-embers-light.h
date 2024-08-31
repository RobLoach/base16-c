/**
 * Base16 Embers Light 
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

#ifndef BASE16_embers_light_H__
#define BASE16_embers_light_H__

/**
 * The Base16 Embers Light scheme.
 *
 * By: Jannik Siebert (https://github.com/janniks)
 */
extern const base16_scheme base16_embers_light;

#endif  /* BASE16_embers_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_embers_light_IMPLEMENTATION_ONCE
#define BASE16_embers_light_IMPLEMENTATION_ONCE

const base16_scheme base16_embers_light = {
    .name = "Embers Light",
    .base = {
        { .r = 209, .g = 214, .b = 219 },
        { .r = 174, .g = 182, .b = 190 },
        { .r = 144, .g = 154, .b = 163 },
        { .r = 117, .g = 128, .b = 138 },
        { .r = 71, .g = 80, .b = 90 },
        { .r = 50, .g = 59, .b = 67 },
        { .r = 32, .g = 38, .b = 44 },
        { .r = 15, .g = 19, .b = 22 },
        { .r = 87, .g = 109, .b = 130 },
        { .r = 87, .g = 130, .b = 130 },
        { .r = 87, .g = 130, .b = 109 },
        { .r = 109, .g = 130, .b = 87 },
        { .r = 130, .g = 109, .b = 87 },
        { .r = 130, .g = 87, .b = 109 },
        { .r = 109, .g = 87, .b = 130 },
        { .r = 87, .g = 87, .b = 130 }
    }
};

#endif  /* BASE16_embers_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
