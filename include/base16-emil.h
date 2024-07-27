/**
 * Base16 emil 
 * 
 * @author limelier
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

#ifndef BASE16_emil_H__
#define BASE16_emil_H__

/**
 * The Base16 emil scheme.
 * 
 * By: limelier
 */
extern const base16_scheme base16_emil;

#endif  /* BASE16_emil_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_emil_IMPLEMENTATION_ONCE
#define BASE16_emil_IMPLEMENTATION_ONCE

const base16_scheme base16_emil = {
    .name = "emil",
    .base = {
        { .r = 239, .g = 239, .b = 239 },
        { .r = 190, .g = 190, .b = 210 },
        { .r = 158, .g = 158, .b = 175 },
        { .r = 124, .g = 124, .b = 152 },
        { .r = 80, .g = 80, .b = 99 },
        { .r = 49, .g = 49, .b = 69 },
        { .r = 34, .g = 34, .b = 58 },
        { .r = 26, .g = 26, .b = 47 },
        { .r = 244, .g = 57, .b = 121 },
        { .r = 210, .g = 42, .b = 139 },
        { .r = 255, .g = 102, .b = 155 },
        { .r = 0, .g = 115, .b = 168 },
        { .r = 33, .g = 85, .b = 214 },
        { .r = 71, .g = 19, .b = 151 },
        { .r = 105, .g = 22, .b = 182 },
        { .r = 141, .g = 23, .b = 165 }
    }
};

#endif  /* BASE16_emil_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
