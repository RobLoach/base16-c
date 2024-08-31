/**
 * Base16 Default Dark 
 *
 * @author Chris Kempson (http://chriskempson.com)
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

#ifndef BASE16_default_dark_H__
#define BASE16_default_dark_H__

/**
 * The Base16 Default Dark scheme.
 *
 * By: Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_default_dark;

#endif  /* BASE16_default_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_default_dark_IMPLEMENTATION_ONCE
#define BASE16_default_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_default_dark = {
    .name = "Default Dark",
    .base = {
        { .r = 24, .g = 24, .b = 24 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 56, .g = 56, .b = 56 },
        { .r = 88, .g = 88, .b = 88 },
        { .r = 184, .g = 184, .b = 184 },
        { .r = 216, .g = 216, .b = 216 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 248, .g = 248, .b = 248 },
        { .r = 171, .g = 70, .b = 66 },
        { .r = 220, .g = 150, .b = 86 },
        { .r = 247, .g = 202, .b = 136 },
        { .r = 161, .g = 181, .b = 108 },
        { .r = 134, .g = 193, .b = 185 },
        { .r = 124, .g = 175, .b = 194 },
        { .r = 186, .g = 139, .b = 175 },
        { .r = 161, .g = 105, .b = 70 }
    }
};

#endif  /* BASE16_default_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
