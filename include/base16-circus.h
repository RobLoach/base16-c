/**
 * Base16 Circus 
 * 
 * @author Stephan Boyer (https://github.com/stepchowfun) and Esther Wang (https://github.com/ewang12)
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

#ifndef BASE16_circus_H__
#define BASE16_circus_H__

/**
 * The Base16 Circus scheme.
 * 
 * By: Stephan Boyer (https://github.com/stepchowfun) and Esther Wang (https://github.com/ewang12)
 */
extern const base16_scheme base16_circus;

#endif  /* BASE16_circus_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_circus_IMPLEMENTATION_ONCE
#define BASE16_circus_IMPLEMENTATION_ONCE

const base16_scheme base16_circus = {
    .name = "Circus",
    .base = {
        { .r = 25, .g = 25, .b = 25 },
        { .r = 32, .g = 32, .b = 32 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 95, .g = 90, .b = 96 },
        { .r = 80, .g = 80, .b = 80 },
        { .r = 167, .g = 167, .b = 167 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 220, .g = 101, .b = 125 },
        { .r = 75, .g = 177, .b = 167 },
        { .r = 195, .g = 186, .b = 99 },
        { .r = 132, .g = 185, .b = 124 },
        { .r = 75, .g = 177, .b = 167 },
        { .r = 99, .g = 158, .b = 228 },
        { .r = 184, .g = 136, .b = 226 },
        { .r = 184, .g = 136, .b = 226 }
    }
};

#endif  /* BASE16_circus_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
