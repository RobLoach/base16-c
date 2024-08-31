/**
 * Base16 Hardcore 
 *
 * @author Chris Caller
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

#ifndef BASE16_hardcore_H__
#define BASE16_hardcore_H__

/**
 * The Base16 Hardcore scheme.
 *
 * By: Chris Caller
 */
extern const base16_scheme base16_hardcore;

#endif  /* BASE16_hardcore_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_hardcore_IMPLEMENTATION_ONCE
#define BASE16_hardcore_IMPLEMENTATION_ONCE

const base16_scheme base16_hardcore = {
    .name = "Hardcore",
    .base = {
        { .r = 33, .g = 33, .b = 33 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 53, .g = 53, .b = 53 },
        { .r = 74, .g = 74, .b = 74 },
        { .r = 112, .g = 112, .b = 112 },
        { .r = 205, .g = 205, .b = 205 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 249, .g = 38, .b = 114 },
        { .r = 253, .g = 151, .b = 31 },
        { .r = 230, .g = 219, .b = 116 },
        { .r = 166, .g = 226, .b = 46 },
        { .r = 112, .g = 131, .b = 135 },
        { .r = 102, .g = 217, .b = 239 },
        { .r = 158, .g = 111, .b = 254 },
        { .r = 232, .g = 184, .b = 130 }
    }
};

#endif  /* BASE16_hardcore_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
