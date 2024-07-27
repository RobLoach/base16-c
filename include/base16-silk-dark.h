/**
 * Base16 Silk Dark 
 * 
 * @author Gabriel Fontes (https://github.com/Misterio77)
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

#ifndef BASE16_silk_dark_H__
#define BASE16_silk_dark_H__

/**
 * The Base16 Silk Dark scheme.
 * 
 * By: Gabriel Fontes (https://github.com/Misterio77)
 */
extern const base16_scheme base16_silk_dark;

#endif  /* BASE16_silk_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_silk_dark_IMPLEMENTATION_ONCE
#define BASE16_silk_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_silk_dark = {
    .name = "Silk Dark",
    .base = {
        { .r = 14, .g = 60, .b = 70 },
        { .r = 29, .g = 73, .b = 78 },
        { .r = 42, .g = 80, .b = 84 },
        { .r = 88, .g = 112, .b = 115 },
        { .r = 157, .g = 200, .b = 205 },
        { .r = 199, .g = 219, .b = 221 },
        { .r = 203, .g = 242, .b = 247 },
        { .r = 210, .g = 250, .b = 255 },
        { .r = 251, .g = 105, .b = 83 },
        { .r = 252, .g = 171, .b = 116 },
        { .r = 252, .g = 227, .b = 128 },
        { .r = 115, .g = 216, .b = 173 },
        { .r = 63, .g = 178, .b = 185 },
        { .r = 70, .g = 189, .b = 221 },
        { .r = 117, .g = 107, .b = 138 },
        { .r = 155, .g = 100, .b = 123 }
    }
};

#endif  /* BASE16_silk_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
