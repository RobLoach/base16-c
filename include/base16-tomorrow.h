/**
 * Base16 Tomorrow 
 *
 * @author Chris Kempson (http://chriskempson.com)
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

#ifndef BASE16_tomorrow_H__
#define BASE16_tomorrow_H__

/**
 * The Base16 Tomorrow scheme.
 *
 * By: Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_tomorrow;

#endif  /* BASE16_tomorrow_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tomorrow_IMPLEMENTATION_ONCE
#define BASE16_tomorrow_IMPLEMENTATION_ONCE

const base16_scheme base16_tomorrow = {
    .name = "Tomorrow",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 214, .g = 214, .b = 214 },
        { .r = 142, .g = 144, .b = 140 },
        { .r = 150, .g = 152, .b = 150 },
        { .r = 77, .g = 77, .b = 76 },
        { .r = 40, .g = 42, .b = 46 },
        { .r = 29, .g = 31, .b = 33 },
        { .r = 200, .g = 40, .b = 41 },
        { .r = 245, .g = 135, .b = 31 },
        { .r = 234, .g = 183, .b = 0 },
        { .r = 113, .g = 140, .b = 0 },
        { .r = 62, .g = 153, .b = 159 },
        { .r = 66, .g = 113, .b = 174 },
        { .r = 137, .g = 89, .b = 168 },
        { .r = 163, .g = 104, .b = 90 }
    }
};

#endif  /* BASE16_tomorrow_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
