/**
 * Base16 selenized-dark 
 * 
 * @author Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
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

#ifndef BASE16_selenized_dark_H__
#define BASE16_selenized_dark_H__

/**
 * The Base16 selenized-dark scheme.
 * 
 * By: Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
 */
extern const base16_scheme base16_selenized_dark;

#endif  /* BASE16_selenized_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_selenized_dark_IMPLEMENTATION_ONCE
#define BASE16_selenized_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_selenized_dark = {
    .name = "selenized-dark",
    .base = {
        { .r = 16, .g = 60, .b = 72 },
        { .r = 24, .g = 73, .b = 86 },
        { .r = 45, .g = 91, .b = 105 },
        { .r = 114, .g = 137, .b = 143 },
        { .r = 114, .g = 137, .b = 143 },
        { .r = 173, .g = 188, .b = 188 },
        { .r = 202, .g = 216, .b = 217 },
        { .r = 202, .g = 216, .b = 217 },
        { .r = 250, .g = 87, .b = 80 },
        { .r = 237, .g = 134, .b = 73 },
        { .r = 219, .g = 179, .b = 45 },
        { .r = 117, .g = 185, .b = 56 },
        { .r = 65, .g = 199, .b = 185 },
        { .r = 70, .g = 149, .b = 247 },
        { .r = 175, .g = 136, .b = 235 },
        { .r = 242, .g = 117, .b = 190 }
    }
};

#endif  /* BASE16_selenized_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
