/**
 * Base16 Heetch Light 
 *
 * @author Geoffrey Teale (tealeg@gmail.com)
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

#ifndef BASE16_heetch_light_H__
#define BASE16_heetch_light_H__

/**
 * The Base16 Heetch Light scheme.
 *
 * By: Geoffrey Teale (tealeg@gmail.com)
 */
extern const base16_scheme base16_heetch_light;

#endif  /* BASE16_heetch_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_heetch_light_IMPLEMENTATION_ONCE
#define BASE16_heetch_light_IMPLEMENTATION_ONCE

const base16_scheme base16_heetch_light = {
    .name = "Heetch Light",
    .base = {
        { .r = 254, .g = 255, .b = 255 },
        { .r = 57, .g = 37, .b = 81 },
        { .r = 123, .g = 109, .b = 139 },
        { .r = 156, .g = 146, .b = 168 },
        { .r = 221, .g = 214, .b = 229 },
        { .r = 90, .g = 73, .b = 110 },
        { .r = 71, .g = 5, .b = 70 },
        { .r = 25, .g = 1, .b = 52 },
        { .r = 39, .g = 217, .b = 213 },
        { .r = 189, .g = 182, .b = 197 },
        { .r = 91, .g = 162, .b = 182 },
        { .r = 248, .g = 0, .b = 89 },
        { .r = 195, .g = 54, .b = 120 },
        { .r = 71, .g = 249, .b = 245 },
        { .r = 189, .g = 1, .b = 82 },
        { .r = 222, .g = 218, .b = 226 }
    }
};

#endif  /* BASE16_heetch_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
