/**
 * Base16 Measured Dark 
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

#ifndef BASE16_measured_dark_H__
#define BASE16_measured_dark_H__

/**
 * The Base16 Measured Dark scheme.
 * 
 * By: Measured (https://measured.co)
 */
extern const base16_scheme base16_measured_dark;

#endif  /* BASE16_measured_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_measured_dark_IMPLEMENTATION_ONCE
#define BASE16_measured_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_measured_dark = {
    .name = "Measured Dark",
    .base = {
        { .r = 0, .g = 33, .b = 31 },
        { .r = 0, .g = 58, .b = 56 },
        { .r = 0, .g = 84, .b = 83 },
        { .r = 171, .g = 171, .b = 171 },
        { .r = 195, .g = 195, .b = 195 },
        { .r = 220, .g = 220, .b = 220 },
        { .r = 239, .g = 239, .b = 239 },
        { .r = 245, .g = 245, .b = 245 },
        { .r = 206, .g = 126, .b = 142 },
        { .r = 220, .g = 163, .b = 124 },
        { .r = 191, .g = 172, .b = 78 },
        { .r = 86, .g = 193, .b = 111 },
        { .r = 98, .g = 192, .b = 190 },
        { .r = 136, .g = 176, .b = 218 },
        { .r = 179, .g = 155, .b = 224 },
        { .r = 216, .g = 154, .b = 186 }
    }
};

#endif  /* BASE16_measured_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
