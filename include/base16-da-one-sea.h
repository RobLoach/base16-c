/**
 * Base16 Da One Sea 
 * 
 * @author NNB (https://github.com/NNBnh)
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

#ifndef BASE16_da_one_sea_H__
#define BASE16_da_one_sea_H__

/**
 * The Base16 Da One Sea scheme.
 * 
 * By: NNB (https://github.com/NNBnh)
 */
extern const base16_scheme base16_da_one_sea;

#endif  /* BASE16_da_one_sea_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_da_one_sea_IMPLEMENTATION_ONCE
#define BASE16_da_one_sea_IMPLEMENTATION_ONCE

const base16_scheme base16_da_one_sea = {
    .name = "Da One Sea",
    .base = {
        { .r = 34, .g = 39, .b = 61 },
        { .r = 55, .g = 64, .b = 89 },
        { .r = 82, .g = 88, .b = 102 },
        { .r = 135, .g = 141, .b = 150 },
        { .r = 200, .g = 200, .b = 200 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 250, .g = 120, .b = 131 },
        { .r = 255, .g = 195, .b = 135 },
        { .r = 255, .g = 148, .b = 112 },
        { .r = 152, .g = 195, .b = 121 },
        { .r = 138, .g = 245, .b = 255 },
        { .r = 107, .g = 184, .b = 255 },
        { .r = 231, .g = 153, .b = 255 },
        { .r = 179, .g = 104, .b = 79 }
    }
};

#endif  /* BASE16_da_one_sea_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
