/**
 * Base16 Measured Light 
 *
 * @author Measured (https://measured.co)
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

#ifndef BASE16_measured_light_H__
#define BASE16_measured_light_H__

/**
 * The Base16 Measured Light scheme.
 *
 * By: Measured (https://measured.co)
 */
extern const base16_scheme base16_measured_light;

#endif  /* BASE16_measured_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_measured_light_IMPLEMENTATION_ONCE
#define BASE16_measured_light_IMPLEMENTATION_ONCE

const base16_scheme base16_measured_light = {
    .name = "Measured Light",
    .base = {
        { .r = 253, .g = 249, .b = 245 },
        { .r = 249, .g = 245, .b = 241 },
        { .r = 255, .g = 234, .b = 218 },
        { .r = 90, .g = 90, .b = 90 },
        { .r = 64, .g = 64, .b = 64 },
        { .r = 41, .g = 41, .b = 41 },
        { .r = 24, .g = 24, .b = 24 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 172, .g = 31, .b = 53 },
        { .r = 173, .g = 86, .b = 1 },
        { .r = 100, .g = 90, .b = 0 },
        { .r = 12, .g = 104, .b = 12 },
        { .r = 1, .g = 113, .b = 111 },
        { .r = 1, .g = 88, .b = 173 },
        { .r = 102, .g = 69, .b = 194 },
        { .r = 168, .g = 26, .b = 102 }
    }
};

#endif  /* BASE16_measured_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
