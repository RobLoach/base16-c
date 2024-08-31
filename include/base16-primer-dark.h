/**
 * Base16 Primer Dark 
 *
 * @author Jimmy Lin
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

#ifndef BASE16_primer_dark_H__
#define BASE16_primer_dark_H__

/**
 * The Base16 Primer Dark scheme.
 *
 * By: Jimmy Lin
 */
extern const base16_scheme base16_primer_dark;

#endif  /* BASE16_primer_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_primer_dark_IMPLEMENTATION_ONCE
#define BASE16_primer_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_primer_dark = {
    .name = "Primer Dark",
    .base = {
        { .r = 1, .g = 4, .b = 9 },
        { .r = 33, .g = 38, .b = 45 },
        { .r = 48, .g = 54, .b = 61 },
        { .r = 72, .g = 79, .b = 88 },
        { .r = 139, .g = 148, .b = 158 },
        { .r = 177, .g = 186, .b = 196 },
        { .r = 201, .g = 209, .b = 217 },
        { .r = 240, .g = 246, .b = 252 },
        { .r = 255, .g = 123, .b = 114 },
        { .r = 240, .g = 136, .b = 62 },
        { .r = 210, .g = 153, .b = 34 },
        { .r = 63, .g = 185, .b = 80 },
        { .r = 165, .g = 214, .b = 255 },
        { .r = 88, .g = 166, .b = 255 },
        { .r = 247, .g = 120, .b = 186 },
        { .r = 189, .g = 86, .b = 29 }
    }
};

#endif  /* BASE16_primer_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
