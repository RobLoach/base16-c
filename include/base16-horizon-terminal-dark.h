/**
 * Base16 Horizon Terminal Dark 
 * 
 * @author Michaël Ball (http://github.com/michael-ball/)
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

#ifndef BASE16_horizon_terminal_dark_H__
#define BASE16_horizon_terminal_dark_H__

/**
 * The Base16 Horizon Terminal Dark scheme.
 * 
 * By: Michaël Ball (http://github.com/michael-ball/)
 */
extern const base16_scheme base16_horizon_terminal_dark;

#endif  /* BASE16_horizon_terminal_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_horizon_terminal_dark_IMPLEMENTATION_ONCE
#define BASE16_horizon_terminal_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_horizon_terminal_dark = {
    .name = "Horizon Terminal Dark",
    .base = {
        { .r = 28, .g = 30, .b = 38 },
        { .r = 35, .g = 37, .b = 48 },
        { .r = 46, .g = 48, .b = 62 },
        { .r = 111, .g = 111, .b = 112 },
        { .r = 157, .g = 160, .b = 162 },
        { .r = 203, .g = 206, .b = 208 },
        { .r = 220, .g = 223, .b = 228 },
        { .r = 227, .g = 230, .b = 238 },
        { .r = 233, .g = 86, .b = 120 },
        { .r = 250, .g = 183, .b = 149 },
        { .r = 250, .g = 194, .b = 154 },
        { .r = 41, .g = 211, .b = 152 },
        { .r = 89, .g = 225, .b = 227 },
        { .r = 38, .g = 187, .b = 217 },
        { .r = 238, .g = 100, .b = 172 },
        { .r = 240, .g = 147, .b = 131 }
    }
};

#endif  /* BASE16_horizon_terminal_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
