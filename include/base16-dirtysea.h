/**
 * Base16 dirtysea 
 * 
 * @author Kahlil (Kal) Hodgson
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

#ifndef BASE16_dirtysea_H__
#define BASE16_dirtysea_H__

/**
 * The Base16 dirtysea scheme.
 * 
 * By: Kahlil (Kal) Hodgson
 */
extern const base16_scheme base16_dirtysea;

#endif  /* BASE16_dirtysea_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_dirtysea_IMPLEMENTATION_ONCE
#define BASE16_dirtysea_IMPLEMENTATION_ONCE

const base16_scheme base16_dirtysea = {
    .name = "dirtysea",
    .base = {
        { .r = 224, .g = 224, .b = 224 },
        { .r = 208, .g = 218, .b = 208 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 112, .g = 112, .b = 112 },
        { .r = 32, .g = 32, .b = 32 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 248, .g = 248, .b = 248 },
        { .r = 196, .g = 217, .b = 196 },
        { .r = 132, .g = 0, .b = 0 },
        { .r = 0, .g = 101, .b = 101 },
        { .r = 117, .g = 91, .b = 0 },
        { .r = 115, .g = 0, .b = 115 },
        { .r = 117, .g = 91, .b = 0 },
        { .r = 0, .g = 115, .b = 0 },
        { .r = 0, .g = 0, .b = 144 },
        { .r = 117, .g = 91, .b = 0 }
    }
};

#endif  /* BASE16_dirtysea_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
