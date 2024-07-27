/**
 * Base16 PhD 
 * 
 * @author Hennig Hasemann (http://leetless.de/vim.html)
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

#ifndef BASE16_phd_H__
#define BASE16_phd_H__

/**
 * The Base16 PhD scheme.
 * 
 * By: Hennig Hasemann (http://leetless.de/vim.html)
 */
extern const base16_scheme base16_phd;

#endif  /* BASE16_phd_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_phd_IMPLEMENTATION_ONCE
#define BASE16_phd_IMPLEMENTATION_ONCE

const base16_scheme base16_phd = {
    .name = "PhD",
    .base = {
        { .r = 6, .g = 18, .b = 41 },
        { .r = 42, .g = 52, .b = 72 },
        { .r = 77, .g = 86, .b = 102 },
        { .r = 113, .g = 120, .b = 133 },
        { .r = 154, .g = 153, .b = 163 },
        { .r = 184, .g = 187, .b = 194 },
        { .r = 219, .g = 221, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 208, .g = 115, .b = 70 },
        { .r = 240, .g = 160, .b = 0 },
        { .r = 251, .g = 212, .b = 97 },
        { .r = 153, .g = 191, .b = 82 },
        { .r = 114, .g = 185, .b = 191 },
        { .r = 82, .g = 153, .b = 191 },
        { .r = 153, .g = 137, .b = 204 },
        { .r = 176, .g = 128, .b = 96 }
    }
};

#endif  /* BASE16_phd_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
