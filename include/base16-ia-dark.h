/**
 * Base16 iA Dark 
 * 
 * @author iA Inc. (modified by aramisgithub)
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

#ifndef BASE16_ia_dark_H__
#define BASE16_ia_dark_H__

/**
 * The Base16 iA Dark scheme.
 * 
 * By: iA Inc. (modified by aramisgithub)
 */
extern const base16_scheme base16_ia_dark;

#endif  /* BASE16_ia_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_ia_dark_IMPLEMENTATION_ONCE
#define BASE16_ia_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_ia_dark = {
    .name = "iA Dark",
    .base = {
        { .r = 26, .g = 26, .b = 26 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 29, .g = 65, .b = 77 },
        { .r = 118, .g = 118, .b = 118 },
        { .r = 184, .g = 184, .b = 184 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 248, .g = 248, .b = 248 },
        { .r = 216, .g = 133, .b = 104 },
        { .r = 216, .g = 104, .b = 104 },
        { .r = 185, .g = 147, .b = 83 },
        { .r = 131, .g = 164, .b = 113 },
        { .r = 124, .g = 156, .b = 174 },
        { .r = 142, .g = 204, .b = 221 },
        { .r = 185, .g = 142, .b = 178 },
        { .r = 139, .g = 108, .b = 55 }
    }
};

#endif  /* BASE16_ia_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
