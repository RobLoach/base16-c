/**
 * Base16 vice 
 * 
 * @author Thomas Leon Highbaugh thighbaugh@zoho.com
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

#ifndef BASE16_vice_H__
#define BASE16_vice_H__

/**
 * The Base16 vice scheme.
 * 
 * By: Thomas Leon Highbaugh thighbaugh@zoho.com
 */
extern const base16_scheme base16_vice;

#endif  /* BASE16_vice_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_vice_IMPLEMENTATION_ONCE
#define BASE16_vice_IMPLEMENTATION_ONCE

const base16_scheme base16_vice = {
    .name = "vice",
    .base = {
        { .r = 23, .g = 25, .b = 30 },
        { .r = 34, .g = 38, .b = 45 },
        { .r = 60, .g = 63, .b = 76 },
        { .r = 56, .g = 58, .b = 71 },
        { .r = 85, .g = 94, .b = 112 },
        { .r = 139, .g = 156, .b = 190 },
        { .r = 178, .g = 191, .b = 217 },
        { .r = 244, .g = 244, .b = 247 },
        { .r = 255, .g = 41, .b = 168 },
        { .r = 133, .g = 255, .b = 224 },
        { .r = 240, .g = 255, .b = 170 },
        { .r = 11, .g = 173, .b = 255 },
        { .r = 130, .g = 101, .b = 255 },
        { .r = 0, .g = 234, .b = 255 },
        { .r = 0, .g = 246, .b = 217 },
        { .r = 255, .g = 61, .b = 129 }
    }
};

#endif  /* BASE16_vice_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
