/**
 * Base16 UwUnicorn 
 * 
 * @author Fernando Marques (https://github.com/RakkiUwU) and Gabriel Fontes (https://github.com/Misterio77)
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

#ifndef BASE16_uwunicorn_H__
#define BASE16_uwunicorn_H__

/**
 * The Base16 UwUnicorn scheme.
 * 
 * By: Fernando Marques (https://github.com/RakkiUwU) and Gabriel Fontes (https://github.com/Misterio77)
 */
extern const base16_scheme base16_uwunicorn;

#endif  /* BASE16_uwunicorn_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_uwunicorn_IMPLEMENTATION_ONCE
#define BASE16_uwunicorn_IMPLEMENTATION_ONCE

const base16_scheme base16_uwunicorn = {
    .name = "UwUnicorn",
    .base = {
        { .r = 36, .g = 27, .b = 38 },
        { .r = 47, .g = 42, .b = 63 },
        { .r = 70, .g = 53, .b = 74 },
        { .r = 108, .g = 60, .b = 178 },
        { .r = 126, .g = 95, .b = 131 },
        { .r = 238, .g = 213, .b = 217 },
        { .r = 217, .g = 194, .b = 198 },
        { .r = 228, .g = 204, .b = 208 },
        { .r = 135, .g = 123, .b = 182 },
        { .r = 222, .g = 91, .b = 68 },
        { .r = 168, .g = 74, .b = 115 },
        { .r = 201, .g = 101, .b = 191 },
        { .r = 156, .g = 95, .b = 206 },
        { .r = 106, .g = 158, .b = 181 },
        { .r = 120, .g = 163, .b = 143 },
        { .r = 163, .g = 160, .b = 121 }
    }
};

#endif  /* BASE16_uwunicorn_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
