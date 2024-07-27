/**
 * Base16 standardized-light 
 * 
 * @author ali (https://github.com/ali-githb/base16-standardized-scheme)
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

#ifndef BASE16_standardized_light_H__
#define BASE16_standardized_light_H__

/**
 * The Base16 standardized-light scheme.
 * 
 * By: ali (https://github.com/ali-githb/base16-standardized-scheme)
 */
extern const base16_scheme base16_standardized_light;

#endif  /* BASE16_standardized_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_standardized_light_IMPLEMENTATION_ONCE
#define BASE16_standardized_light_IMPLEMENTATION_ONCE

const base16_scheme base16_standardized_light = {
    .name = "standardized-light",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 238, .g = 238, .b = 238 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 118, .g = 118, .b = 118 },
        { .r = 118, .g = 118, .b = 118 },
        { .r = 68, .g = 68, .b = 68 },
        { .r = 51, .g = 51, .b = 51 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 208, .g = 62, .b = 62 },
        { .r = 215, .g = 105, .b = 29 },
        { .r = 173, .g = 130, .b = 0 },
        { .r = 49, .g = 134, .b = 31 },
        { .r = 0, .g = 153, .b = 143 },
        { .r = 49, .g = 115, .b = 197 },
        { .r = 158, .g = 87, .b = 194 },
        { .r = 137, .g = 80, .b = 37 }
    }
};

#endif  /* BASE16_standardized_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
