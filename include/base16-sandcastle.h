/**
 * Base16 Sandcastle 
 *
 * @author George Essig (https://github.com/gessig)
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

#ifndef BASE16_sandcastle_H__
#define BASE16_sandcastle_H__

/**
 * The Base16 Sandcastle scheme.
 *
 * By: George Essig (https://github.com/gessig)
 */
extern const base16_scheme base16_sandcastle;

#endif  /* BASE16_sandcastle_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_sandcastle_IMPLEMENTATION_ONCE
#define BASE16_sandcastle_IMPLEMENTATION_ONCE

const base16_scheme base16_sandcastle = {
    .name = "Sandcastle",
    .base = {
        { .r = 40, .g = 44, .b = 52 },
        { .r = 44, .g = 50, .b = 59 },
        { .r = 62, .g = 68, .b = 81 },
        { .r = 102, .g = 92, .b = 84 },
        { .r = 146, .g = 131, .b = 116 },
        { .r = 168, .g = 153, .b = 132 },
        { .r = 213, .g = 196, .b = 161 },
        { .r = 253, .g = 244, .b = 193 },
        { .r = 131, .g = 165, .b = 152 },
        { .r = 160, .g = 126, .b = 59 },
        { .r = 160, .g = 126, .b = 59 },
        { .r = 82, .g = 139, .b = 139 },
        { .r = 131, .g = 165, .b = 152 },
        { .r = 131, .g = 165, .b = 152 },
        { .r = 215, .g = 95, .b = 95 },
        { .r = 168, .g = 115, .b = 34 }
    }
};

#endif  /* BASE16_sandcastle_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
