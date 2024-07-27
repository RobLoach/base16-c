/**
 * Base16 Still Alive 
 * 
 * @author Derrick McKee (derrick.mckee@gmail.com)
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

#ifndef BASE16_still_alive_H__
#define BASE16_still_alive_H__

/**
 * The Base16 Still Alive scheme.
 * 
 * By: Derrick McKee (derrick.mckee@gmail.com)
 */
extern const base16_scheme base16_still_alive;

#endif  /* BASE16_still_alive_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_still_alive_IMPLEMENTATION_ONCE
#define BASE16_still_alive_IMPLEMENTATION_ONCE

const base16_scheme base16_still_alive = {
    .name = "Still Alive",
    .base = {
        { .r = 240, .g = 240, .b = 240 },
        { .r = 240, .g = 216, .b = 72 },
        { .r = 255, .g = 240, .b = 24 },
        { .r = 240, .g = 24, .b = 24 },
        { .r = 240, .g = 0, .b = 0 },
        { .r = 216, .g = 0, .b = 0 },
        { .r = 72, .g = 144, .b = 0 },
        { .r = 48, .g = 168, .b = 96 },
        { .r = 72, .g = 120, .b = 48 },
        { .r = 24, .g = 48, .b = 72 },
        { .r = 66, .g = 99, .b = 149 },
        { .r = 92, .g = 92, .b = 106 },
        { .r = 44, .g = 60, .b = 87 },
        { .r = 0, .g = 24, .b = 120 },
        { .r = 144, .g = 0, .b = 0 },
        { .r = 20, .g = 12, .b = 13 }
    }
};

#endif  /* BASE16_still_alive_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
