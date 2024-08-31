/**
 * Base16 Rebecca 
 *
 * @author Victor Borja (http://github.com/vic) based on Rebecca Theme (http://github.com/vic/rebecca-theme)
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

#ifndef BASE16_rebecca_H__
#define BASE16_rebecca_H__

/**
 * The Base16 Rebecca scheme.
 *
 * By: Victor Borja (http://github.com/vic) based on Rebecca Theme (http://github.com/vic/rebecca-theme)
 */
extern const base16_scheme base16_rebecca;

#endif  /* BASE16_rebecca_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_rebecca_IMPLEMENTATION_ONCE
#define BASE16_rebecca_IMPLEMENTATION_ONCE

const base16_scheme base16_rebecca = {
    .name = "Rebecca",
    .base = {
        { .r = 41, .g = 42, .b = 68 },
        { .r = 102, .g = 51, .b = 153 },
        { .r = 56, .g = 58, .b = 98 },
        { .r = 102, .g = 102, .b = 153 },
        { .r = 160, .g = 160, .b = 197 },
        { .r = 241, .g = 239, .b = 248 },
        { .r = 204, .g = 204, .b = 255 },
        { .r = 83, .g = 73, .b = 93 },
        { .r = 160, .g = 160, .b = 197 },
        { .r = 239, .g = 228, .b = 161 },
        { .r = 174, .g = 129, .b = 255 },
        { .r = 109, .g = 254, .b = 223 },
        { .r = 142, .g = 174, .b = 224 },
        { .r = 45, .g = 224, .b = 167 },
        { .r = 122, .g = 165, .b = 255 },
        { .r = 255, .g = 121, .b = 198 }
    }
};

#endif  /* BASE16_rebecca_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
