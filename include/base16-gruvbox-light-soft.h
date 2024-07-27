/**
 * Base16 Gruvbox light, soft 
 * 
 * @author Dawid Kurek (dawikur@gmail.com), morhetz (https://github.com/morhetz/gruvbox)
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

#ifndef BASE16_gruvbox_light_soft_H__
#define BASE16_gruvbox_light_soft_H__

/**
 * The Base16 Gruvbox light, soft scheme.
 * 
 * By: Dawid Kurek (dawikur@gmail.com), morhetz (https://github.com/morhetz/gruvbox)
 */
extern const base16_scheme base16_gruvbox_light_soft;

#endif  /* BASE16_gruvbox_light_soft_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gruvbox_light_soft_IMPLEMENTATION_ONCE
#define BASE16_gruvbox_light_soft_IMPLEMENTATION_ONCE

const base16_scheme base16_gruvbox_light_soft = {
    .name = "Gruvbox light, soft",
    .base = {
        { .r = 242, .g = 229, .b = 188 },
        { .r = 235, .g = 219, .b = 178 },
        { .r = 213, .g = 196, .b = 161 },
        { .r = 189, .g = 174, .b = 147 },
        { .r = 102, .g = 92, .b = 84 },
        { .r = 80, .g = 73, .b = 69 },
        { .r = 60, .g = 56, .b = 54 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 157, .g = 0, .b = 6 },
        { .r = 175, .g = 58, .b = 3 },
        { .r = 181, .g = 118, .b = 20 },
        { .r = 121, .g = 116, .b = 14 },
        { .r = 66, .g = 123, .b = 88 },
        { .r = 7, .g = 102, .b = 120 },
        { .r = 143, .g = 63, .b = 113 },
        { .r = 214, .g = 93, .b = 14 }
    }
};

#endif  /* BASE16_gruvbox_light_soft_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
