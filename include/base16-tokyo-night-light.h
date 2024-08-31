/**
 * Base16 Tokyo Night Light 
 *
 * @author Michaël Ball
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

#ifndef BASE16_tokyo_night_light_H__
#define BASE16_tokyo_night_light_H__

/**
 * The Base16 Tokyo Night Light scheme.
 *
 * By: Michaël Ball
 */
extern const base16_scheme base16_tokyo_night_light;

#endif  /* BASE16_tokyo_night_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tokyo_night_light_IMPLEMENTATION_ONCE
#define BASE16_tokyo_night_light_IMPLEMENTATION_ONCE

const base16_scheme base16_tokyo_night_light = {
    .name = "Tokyo Night Light",
    .base = {
        { .r = 213, .g = 214, .b = 219 },
        { .r = 203, .g = 204, .b = 209 },
        { .r = 223, .g = 224, .b = 229 },
        { .r = 150, .g = 153, .b = 163 },
        { .r = 76, .g = 80, .b = 94 },
        { .r = 52, .g = 59, .b = 89 },
        { .r = 26, .g = 27, .b = 38 },
        { .r = 26, .g = 27, .b = 38 },
        { .r = 52, .g = 59, .b = 88 },
        { .r = 150, .g = 80, .b = 39 },
        { .r = 22, .g = 103, .b = 117 },
        { .r = 72, .g = 94, .b = 48 },
        { .r = 62, .g = 105, .b = 104 },
        { .r = 52, .g = 84, .b = 138 },
        { .r = 90, .g = 74, .b = 120 },
        { .r = 140, .g = 67, .b = 81 }
    }
};

#endif  /* BASE16_tokyo_night_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
