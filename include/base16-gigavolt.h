/**
 * Base16 Gigavolt 
 * 
 * @author Aidan Swope (http://github.com/Whillikers)
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

#ifndef BASE16_gigavolt_H__
#define BASE16_gigavolt_H__

/**
 * The Base16 Gigavolt scheme.
 * 
 * By: Aidan Swope (http://github.com/Whillikers)
 */
extern const base16_scheme base16_gigavolt;

#endif  /* BASE16_gigavolt_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gigavolt_IMPLEMENTATION_ONCE
#define BASE16_gigavolt_IMPLEMENTATION_ONCE

const base16_scheme base16_gigavolt = {
    .name = "Gigavolt",
    .base = {
        { .r = 32, .g = 33, .b = 38 },
        { .r = 45, .g = 48, .b = 61 },
        { .r = 90, .g = 87, .b = 110 },
        { .r = 161, .g = 210, .b = 230 },
        { .r = 202, .g = 211, .b = 255 },
        { .r = 233, .g = 231, .b = 225 },
        { .r = 239, .g = 240, .b = 249 },
        { .r = 242, .g = 251, .b = 255 },
        { .r = 255, .g = 102, .b = 26 },
        { .r = 25, .g = 249, .b = 136 },
        { .r = 255, .g = 220, .b = 45 },
        { .r = 242, .g = 230, .b = 169 },
        { .r = 251, .g = 106, .b = 203 },
        { .r = 64, .g = 191, .b = 255 },
        { .r = 174, .g = 148, .b = 249 },
        { .r = 97, .g = 135, .b = 255 }
    }
};

#endif  /* BASE16_gigavolt_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
