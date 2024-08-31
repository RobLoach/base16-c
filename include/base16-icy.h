/**
 * Base16 Icy Dark 
 *
 * @author icyphox (https://icyphox.ga)
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

#ifndef BASE16_icy_H__
#define BASE16_icy_H__

/**
 * The Base16 Icy Dark scheme.
 *
 * By: icyphox (https://icyphox.ga)
 */
extern const base16_scheme base16_icy;

#endif  /* BASE16_icy_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_icy_IMPLEMENTATION_ONCE
#define BASE16_icy_IMPLEMENTATION_ONCE

const base16_scheme base16_icy = {
    .name = "Icy Dark",
    .base = {
        { .r = 2, .g = 16, .b = 18 },
        { .r = 3, .g = 22, .b = 25 },
        { .r = 4, .g = 31, .b = 35 },
        { .r = 5, .g = 46, .b = 52 },
        { .r = 6, .g = 64, .b = 72 },
        { .r = 9, .g = 91, .b = 103 },
        { .r = 12, .g = 124, .b = 140 },
        { .r = 16, .g = 156, .b = 176 },
        { .r = 22, .g = 193, .b = 217 },
        { .r = 179, .g = 235, .b = 242 },
        { .r = 128, .g = 222, .b = 234 },
        { .r = 77, .g = 208, .b = 225 },
        { .r = 38, .g = 198, .b = 218 },
        { .r = 0, .g = 188, .b = 212 },
        { .r = 0, .g = 172, .b = 193 },
        { .r = 0, .g = 151, .b = 167 }
    }
};

#endif  /* BASE16_icy_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
