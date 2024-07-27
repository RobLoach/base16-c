/**
 * Base16 Tokyo Night Dark 
 * 
 * @author Michaël Ball
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

#ifndef BASE16_tokyo_night_dark_H__
#define BASE16_tokyo_night_dark_H__

/**
 * The Base16 Tokyo Night Dark scheme.
 * 
 * By: Michaël Ball
 */
extern const base16_scheme base16_tokyo_night_dark;

#endif  /* BASE16_tokyo_night_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tokyo_night_dark_IMPLEMENTATION_ONCE
#define BASE16_tokyo_night_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_tokyo_night_dark = {
    .name = "Tokyo Night Dark",
    .base = {
        { .r = 26, .g = 27, .b = 38 },
        { .r = 22, .g = 22, .b = 30 },
        { .r = 47, .g = 53, .b = 73 },
        { .r = 68, .g = 75, .b = 106 },
        { .r = 120, .g = 124, .b = 153 },
        { .r = 169, .g = 177, .b = 214 },
        { .r = 203, .g = 204, .b = 209 },
        { .r = 213, .g = 214, .b = 219 },
        { .r = 192, .g = 202, .b = 245 },
        { .r = 169, .g = 177, .b = 214 },
        { .r = 13, .g = 185, .b = 215 },
        { .r = 158, .g = 206, .b = 106 },
        { .r = 180, .g = 249, .b = 248 },
        { .r = 42, .g = 195, .b = 222 },
        { .r = 187, .g = 154, .b = 247 },
        { .r = 247, .g = 118, .b = 142 }
    }
};

#endif  /* BASE16_tokyo_night_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
