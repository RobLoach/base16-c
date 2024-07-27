/**
 * Base16 Tokyo City Terminal Dark 
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

#ifndef BASE16_tokyo_city_terminal_dark_H__
#define BASE16_tokyo_city_terminal_dark_H__

/**
 * The Base16 Tokyo City Terminal Dark scheme.
 * 
 * By: Michaël Ball
 */
extern const base16_scheme base16_tokyo_city_terminal_dark;

#endif  /* BASE16_tokyo_city_terminal_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tokyo_city_terminal_dark_IMPLEMENTATION_ONCE
#define BASE16_tokyo_city_terminal_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_tokyo_city_terminal_dark = {
    .name = "Tokyo City Terminal Dark",
    .base = {
        { .r = 23, .g = 29, .b = 35 },
        { .r = 29, .g = 37, .b = 44 },
        { .r = 40, .g = 50, .b = 58 },
        { .r = 82, .g = 98, .b = 112 },
        { .r = 183, .g = 197, .b = 211 },
        { .r = 216, .g = 226, .b = 236 },
        { .r = 246, .g = 246, .b = 248 },
        { .r = 251, .g = 251, .b = 253 },
        { .r = 217, .g = 84, .b = 104 },
        { .r = 255, .g = 158, .b = 100 },
        { .r = 235, .g = 191, .b = 131 },
        { .r = 139, .g = 212, .b = 156 },
        { .r = 112, .g = 225, .b = 232 },
        { .r = 83, .g = 154, .b = 252 },
        { .r = 182, .g = 45, .b = 101 },
        { .r = 221, .g = 157, .b = 130 }
    }
};

#endif  /* BASE16_tokyo_city_terminal_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
