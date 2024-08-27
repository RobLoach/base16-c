/**
 * Base16 Terracotta Dark 
 * 
 * @author Alexander Rossell Hayes (https://github.com/rossellhayes)
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

#ifndef BASE16_terracotta_dark_H__
#define BASE16_terracotta_dark_H__

/**
 * The Base16 Terracotta Dark scheme.
 * 
 * By: Alexander Rossell Hayes (https://github.com/rossellhayes)
 */
extern const base16_scheme base16_terracotta_dark;

#endif  /* BASE16_terracotta_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_terracotta_dark_IMPLEMENTATION_ONCE
#define BASE16_terracotta_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_terracotta_dark = {
    .name = "Terracotta Dark",
    .base = {
        { .r = 36, .g = 29, .b = 26 },
        { .r = 54, .g = 43, .b = 39 },
        { .r = 71, .g = 57, .b = 51 },
        { .r = 89, .g = 71, .b = 64 },
        { .r = 167, .g = 142, .b = 132 },
        { .r = 184, .g = 165, .b = 157 },
        { .r = 202, .g = 187, .b = 181 },
        { .r = 220, .g = 210, .b = 206 },
        { .r = 246, .g = 153, .b = 143 },
        { .r = 255, .g = 168, .b = 136 },
        { .r = 255, .g = 195, .b = 122 },
        { .r = 182, .g = 198, .b = 138 },
        { .r = 192, .g = 188, .b = 219 },
        { .r = 176, .g = 164, .b = 195 },
        { .r = 216, .g = 162, .b = 176 },
        { .r = 241, .g = 174, .b = 151 }
    }
};

#endif  /* BASE16_terracotta_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
