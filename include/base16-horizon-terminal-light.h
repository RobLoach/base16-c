/**
 * Base16 Horizon Terminal Light 
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

#ifndef BASE16_horizon_terminal_light_H__
#define BASE16_horizon_terminal_light_H__

/**
 * The Base16 Horizon Terminal Light scheme.
 * 
 * By: Michaël Ball (http://github.com/michael-ball/)
 */
extern const base16_scheme base16_horizon_terminal_light;

#endif  /* BASE16_horizon_terminal_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_horizon_terminal_light_IMPLEMENTATION_ONCE
#define BASE16_horizon_terminal_light_IMPLEMENTATION_ONCE

const base16_scheme base16_horizon_terminal_light = {
    .name = "Horizon Terminal Light",
    .base = {
        { .r = 253, .g = 240, .b = 237 },
        { .r = 250, .g = 218, .b = 209 },
        { .r = 249, .g = 203, .b = 190 },
        { .r = 189, .g = 179, .b = 177 },
        { .r = 148, .g = 140, .b = 138 },
        { .r = 64, .g = 60, .b = 61 },
        { .r = 48, .g = 44, .b = 45 },
        { .r = 32, .g = 28, .b = 29 },
        { .r = 233, .g = 86, .b = 120 },
        { .r = 249, .g = 206, .b = 195 },
        { .r = 250, .g = 218, .b = 209 },
        { .r = 41, .g = 211, .b = 152 },
        { .r = 89, .g = 225, .b = 227 },
        { .r = 38, .g = 187, .b = 217 },
        { .r = 238, .g = 100, .b = 172 },
        { .r = 249, .g = 203, .b = 190 }
    }
};

#endif  /* BASE16_horizon_terminal_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
