/**
 * Base16 Horizon Light 
 *
 * @author Michaël Ball (http://github.com/michael-ball/)
 *
 * Template by Rob Loach (https://robloach.net)
 * base16-h: https://github.com/robloach/base16-h
 */

#ifndef BASE16_COLOR_H__
#define BASE16_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct base16_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} base16_color;

#endif /* BASE16_COLOR_H__ */

#ifndef BASE16_SCHEME_H__
#define BASE16_SCHEME_H__

/**
 * A Base16 Scheme.
 */
typedef struct base16_scheme {
    const char *name; /** The name of the scheme. */
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    int system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_horizon_light_H__
#define BASE16_horizon_light_H__

/**
 * The Base16 Horizon Light scheme.
 *
 * By: Michaël Ball (http://github.com/michael-ball/)
 */
extern const base16_scheme base16_horizon_light;

#endif  /* BASE16_horizon_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_horizon_light_IMPLEMENTATION_ONCE
#define BASE16_horizon_light_IMPLEMENTATION_ONCE

const base16_scheme base16_horizon_light = {
    .name = "Horizon Light",
    .base = {
        { .r = 253, .g = 240, .b = 237 },
        { .r = 250, .g = 218, .b = 209 },
        { .r = 249, .g = 203, .b = 190 },
        { .r = 189, .g = 179, .b = 177 },
        { .r = 148, .g = 140, .b = 138 },
        { .r = 64, .g = 60, .b = 61 },
        { .r = 48, .g = 44, .b = 45 },
        { .r = 32, .g = 28, .b = 29 },
        { .r = 247, .g = 147, .b = 155 },
        { .r = 246, .g = 102, .b = 30 },
        { .r = 251, .g = 224, .b = 217 },
        { .r = 148, .g = 225, .b = 176 },
        { .r = 220, .g = 51, .b = 24 },
        { .r = 218, .g = 16, .b = 63 },
        { .r = 29, .g = 137, .b = 145 },
        { .r = 229, .g = 140, .b = 146 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 253, .g = 240, .b = 237 },
        { .r = 253, .g = 240, .b = 237 },
        { .r = 247, .g = 147, .b = 155 },
        { .r = 251, .g = 224, .b = 217 },
        { .r = 148, .g = 225, .b = 176 },
        { .r = 220, .g = 51, .b = 24 },
        { .r = 218, .g = 16, .b = 63 },
        { .r = 29, .g = 137, .b = 145 }
    },
    .system = 16
};

#endif  /* BASE16_horizon_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
