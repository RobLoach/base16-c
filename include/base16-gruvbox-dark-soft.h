/**
 * Base16 Gruvbox dark, soft 
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

#ifndef BASE16_gruvbox_dark_soft_H__
#define BASE16_gruvbox_dark_soft_H__

/**
 * The Base16 Gruvbox dark, soft scheme.
 *
 * By: Dawid Kurek (dawikur@gmail.com), morhetz (https://github.com/morhetz/gruvbox)
 */
extern const base16_scheme base16_gruvbox_dark_soft;

#endif  /* BASE16_gruvbox_dark_soft_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gruvbox_dark_soft_IMPLEMENTATION_ONCE
#define BASE16_gruvbox_dark_soft_IMPLEMENTATION_ONCE

const base16_scheme base16_gruvbox_dark_soft = {
    .name = "Gruvbox dark, soft",
    .base = {
        { .r = 50, .g = 48, .b = 47 },
        { .r = 60, .g = 56, .b = 54 },
        { .r = 80, .g = 73, .b = 69 },
        { .r = 102, .g = 92, .b = 84 },
        { .r = 189, .g = 174, .b = 147 },
        { .r = 213, .g = 196, .b = 161 },
        { .r = 235, .g = 219, .b = 178 },
        { .r = 251, .g = 241, .b = 199 },
        { .r = 251, .g = 73, .b = 52 },
        { .r = 254, .g = 128, .b = 25 },
        { .r = 250, .g = 189, .b = 47 },
        { .r = 184, .g = 187, .b = 38 },
        { .r = 142, .g = 192, .b = 124 },
        { .r = 131, .g = 165, .b = 152 },
        { .r = 211, .g = 134, .b = 155 },
        { .r = 214, .g = 93, .b = 14 }
    }
};

#endif  /* BASE16_gruvbox_dark_soft_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
