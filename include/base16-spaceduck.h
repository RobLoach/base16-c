/**
 * Base16 Spaceduck 
 * 
 * @author Guillermo Rodriguez (https://github.com/pineapplegiant), packaged by Gabriel Fontes (https://github.com/Misterio77)
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

#ifndef BASE16_spaceduck_H__
#define BASE16_spaceduck_H__

/**
 * The Base16 Spaceduck scheme.
 * 
 * By: Guillermo Rodriguez (https://github.com/pineapplegiant), packaged by Gabriel Fontes (https://github.com/Misterio77)
 */
extern const base16_scheme base16_spaceduck;

#endif  /* BASE16_spaceduck_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_spaceduck_IMPLEMENTATION_ONCE
#define BASE16_spaceduck_IMPLEMENTATION_ONCE

const base16_scheme base16_spaceduck = {
    .name = "Spaceduck",
    .base = {
        { .r = 22, .g = 23, .b = 45 },
        { .r = 27, .g = 28, .b = 54 },
        { .r = 48, .g = 54, .b = 95 },
        { .r = 104, .g = 111, .b = 154 },
        { .r = 129, .g = 133, .b = 150 },
        { .r = 236, .g = 240, .b = 193 },
        { .r = 193, .g = 195, .b = 204 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 227, .g = 52, .b = 0 },
        { .r = 227, .g = 148, .b = 0 },
        { .r = 242, .g = 206, .b = 0 },
        { .r = 92, .g = 204, .b = 150 },
        { .r = 0, .g = 163, .b = 204 },
        { .r = 122, .g = 92, .b = 204 },
        { .r = 179, .g = 161, .b = 230 },
        { .r = 206, .g = 111, .b = 143 }
    }
};

#endif  /* BASE16_spaceduck_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
