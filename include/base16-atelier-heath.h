/**
 * Base16 Atelier Heath 
 * 
 * @author Bram de Haan (http://atelierbramdehaan.nl)
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

#ifndef BASE16_atelier_heath_H__
#define BASE16_atelier_heath_H__

/**
 * The Base16 Atelier Heath scheme.
 * 
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_heath;

#endif  /* BASE16_atelier_heath_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_heath_IMPLEMENTATION_ONCE
#define BASE16_atelier_heath_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_heath = {
    .name = "Atelier Heath",
    .base = {
        { .r = 27, .g = 24, .b = 27 },
        { .r = 41, .g = 35, .b = 41 },
        { .r = 105, .g = 93, .b = 105 },
        { .r = 119, .g = 105, .b = 119 },
        { .r = 158, .g = 143, .b = 158 },
        { .r = 171, .g = 155, .b = 171 },
        { .r = 216, .g = 202, .b = 216 },
        { .r = 247, .g = 243, .b = 247 },
        { .r = 202, .g = 64, .b = 43 },
        { .r = 166, .g = 89, .b = 38 },
        { .r = 187, .g = 138, .b = 53 },
        { .r = 145, .g = 139, .b = 59 },
        { .r = 21, .g = 147, .b = 147 },
        { .r = 81, .g = 106, .b = 236 },
        { .r = 123, .g = 89, .b = 192 },
        { .r = 204, .g = 51, .b = 204 }
    }
};

#endif  /* BASE16_atelier_heath_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
