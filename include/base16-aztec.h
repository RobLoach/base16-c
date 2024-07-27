/**
 * Base16 Aztec 
 * 
 * @author TheNeverMan (github.com/TheNeverMan)
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

#ifndef BASE16_aztec_H__
#define BASE16_aztec_H__

/**
 * The Base16 Aztec scheme.
 * 
 * By: TheNeverMan (github.com/TheNeverMan)
 */
extern const base16_scheme base16_aztec;

#endif  /* BASE16_aztec_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_aztec_IMPLEMENTATION_ONCE
#define BASE16_aztec_IMPLEMENTATION_ONCE

const base16_scheme base16_aztec = {
    .name = "Aztec",
    .base = {
        { .r = 16, .g = 22, .b = 0 },
        { .r = 26, .g = 30, .b = 1 },
        { .r = 36, .g = 38, .b = 4 },
        { .r = 46, .g = 46, .b = 5 },
        { .r = 255, .g = 209, .b = 41 },
        { .r = 255, .g = 218, .b = 81 },
        { .r = 255, .g = 225, .b = 120 },
        { .r = 255, .g = 235, .b = 160 },
        { .r = 238, .g = 46, .b = 0 },
        { .r = 238, .g = 136, .b = 0 },
        { .r = 238, .g = 187, .b = 0 },
        { .r = 99, .g = 217, .b = 50 },
        { .r = 61, .g = 148, .b = 165 },
        { .r = 91, .g = 74, .b = 159 },
        { .r = 136, .g = 62, .b = 159 },
        { .r = 169, .g = 40, .b = 185 }
    }
};

#endif  /* BASE16_aztec_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
