/**
 * Base16 Nord 
 *
 * @author arcticicestudio
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

#ifndef BASE16_nord_H__
#define BASE16_nord_H__

/**
 * The Base16 Nord scheme.
 *
 * By: arcticicestudio
 */
extern const base16_scheme base16_nord;

#endif  /* BASE16_nord_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_nord_IMPLEMENTATION_ONCE
#define BASE16_nord_IMPLEMENTATION_ONCE

const base16_scheme base16_nord = {
    .name = "Nord",
    .base = {
        { .r = 46, .g = 52, .b = 64 },
        { .r = 59, .g = 66, .b = 82 },
        { .r = 67, .g = 76, .b = 94 },
        { .r = 76, .g = 86, .b = 106 },
        { .r = 216, .g = 222, .b = 233 },
        { .r = 229, .g = 233, .b = 240 },
        { .r = 236, .g = 239, .b = 244 },
        { .r = 143, .g = 188, .b = 187 },
        { .r = 191, .g = 97, .b = 106 },
        { .r = 208, .g = 135, .b = 112 },
        { .r = 235, .g = 203, .b = 139 },
        { .r = 163, .g = 190, .b = 140 },
        { .r = 136, .g = 192, .b = 208 },
        { .r = 129, .g = 161, .b = 193 },
        { .r = 180, .g = 142, .b = 173 },
        { .r = 94, .g = 129, .b = 172 }
    }
};

#endif  /* BASE16_nord_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
