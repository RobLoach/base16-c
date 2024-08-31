/**
 * Base16 Atlas 
 *
 * @author Alex Lende (https://ajlende.com)
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

#ifndef BASE16_atlas_H__
#define BASE16_atlas_H__

/**
 * The Base16 Atlas scheme.
 *
 * By: Alex Lende (https://ajlende.com)
 */
extern const base16_scheme base16_atlas;

#endif  /* BASE16_atlas_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atlas_IMPLEMENTATION_ONCE
#define BASE16_atlas_IMPLEMENTATION_ONCE

const base16_scheme base16_atlas = {
    .name = "Atlas",
    .base = {
        { .r = 0, .g = 38, .b = 53 },
        { .r = 0, .g = 56, .b = 77 },
        { .r = 81, .g = 127, .b = 141 },
        { .r = 108, .g = 139, .b = 145 },
        { .r = 134, .g = 150, .b = 150 },
        { .r = 161, .g = 161, .b = 154 },
        { .r = 230, .g = 230, .b = 220 },
        { .r = 250, .g = 250, .b = 248 },
        { .r = 255, .g = 90, .b = 103 },
        { .r = 240, .g = 142, .b = 72 },
        { .r = 255, .g = 204, .b = 27 },
        { .r = 127, .g = 192, .b = 110 },
        { .r = 93, .g = 215, .b = 185 },
        { .r = 20, .g = 116, .b = 126 },
        { .r = 154, .g = 112, .b = 164 },
        { .r = 196, .g = 48, .b = 96 }
    }
};

#endif  /* BASE16_atlas_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
