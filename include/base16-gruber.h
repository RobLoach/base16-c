/**
 * Base16 Gruber 
 *
 * @author Patel, Nimai &lt;nimai.m.patel@gmail.com&gt;, colors from www.github.com/rexim/gruber-darker-theme
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

#ifndef BASE16_gruber_H__
#define BASE16_gruber_H__

/**
 * The Base16 Gruber scheme.
 *
 * By: Patel, Nimai &lt;nimai.m.patel@gmail.com&gt;, colors from www.github.com/rexim/gruber-darker-theme
 */
extern const base16_scheme base16_gruber;

#endif  /* BASE16_gruber_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gruber_IMPLEMENTATION_ONCE
#define BASE16_gruber_IMPLEMENTATION_ONCE

const base16_scheme base16_gruber = {
    .name = "Gruber",
    .base = {
        { .r = 24, .g = 24, .b = 24 },
        { .r = 69, .g = 61, .b = 65 },
        { .r = 72, .g = 72, .b = 72 },
        { .r = 82, .g = 73, .b = 78 },
        { .r = 228, .g = 228, .b = 239 },
        { .r = 244, .g = 244, .b = 255 },
        { .r = 245, .g = 245, .b = 245 },
        { .r = 228, .g = 228, .b = 239 },
        { .r = 244, .g = 56, .b = 65 },
        { .r = 199, .g = 60, .b = 63 },
        { .r = 255, .g = 221, .b = 51 },
        { .r = 115, .g = 201, .b = 54 },
        { .r = 149, .g = 169, .b = 159 },
        { .r = 150, .g = 166, .b = 200 },
        { .r = 158, .g = 149, .b = 199 },
        { .r = 204, .g = 140, .b = 60 }
    }
};

#endif  /* BASE16_gruber_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
