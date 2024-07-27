/**
 * Base16 Qualia 
 * 
 * @author isaacwhanson
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

#ifndef BASE16_qualia_H__
#define BASE16_qualia_H__

/**
 * The Base16 Qualia scheme.
 * 
 * By: isaacwhanson
 */
extern const base16_scheme base16_qualia;

#endif  /* BASE16_qualia_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_qualia_IMPLEMENTATION_ONCE
#define BASE16_qualia_IMPLEMENTATION_ONCE

const base16_scheme base16_qualia = {
    .name = "Qualia",
    .base = {
        { .r = 16, .g = 16, .b = 16 },
        { .r = 69, .g = 69, .b = 69 },
        { .r = 69, .g = 69, .b = 69 },
        { .r = 69, .g = 69, .b = 69 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 69, .g = 69, .b = 69 },
        { .r = 239, .g = 166, .b = 162 },
        { .r = 163, .g = 184, .b = 239 },
        { .r = 230, .g = 163, .b = 220 },
        { .r = 128, .g = 201, .b = 144 },
        { .r = 200, .g = 200, .b = 116 },
        { .r = 80, .g = 202, .b = 205 },
        { .r = 224, .g = 175, .b = 133 },
        { .r = 128, .g = 128, .b = 128 }
    }
};

#endif  /* BASE16_qualia_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
