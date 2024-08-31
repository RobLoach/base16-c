/**
 * Base16 Pico 
 *
 * @author PICO-8 (http://www.lexaloffle.com/pico-8.php)
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

#ifndef BASE16_pico_H__
#define BASE16_pico_H__

/**
 * The Base16 Pico scheme.
 *
 * By: PICO-8 (http://www.lexaloffle.com/pico-8.php)
 */
extern const base16_scheme base16_pico;

#endif  /* BASE16_pico_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_pico_IMPLEMENTATION_ONCE
#define BASE16_pico_IMPLEMENTATION_ONCE

const base16_scheme base16_pico = {
    .name = "Pico",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 29, .g = 43, .b = 83 },
        { .r = 126, .g = 37, .b = 83 },
        { .r = 0, .g = 135, .b = 81 },
        { .r = 171, .g = 82, .b = 54 },
        { .r = 95, .g = 87, .b = 79 },
        { .r = 194, .g = 195, .b = 199 },
        { .r = 255, .g = 241, .b = 232 },
        { .r = 255, .g = 0, .b = 77 },
        { .r = 255, .g = 163, .b = 0 },
        { .r = 255, .g = 240, .b = 36 },
        { .r = 0, .g = 231, .b = 86 },
        { .r = 41, .g = 173, .b = 255 },
        { .r = 131, .g = 118, .b = 156 },
        { .r = 255, .g = 119, .b = 168 },
        { .r = 255, .g = 204, .b = 170 }
    }
};

#endif  /* BASE16_pico_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
