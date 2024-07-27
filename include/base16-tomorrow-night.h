/**
 * Base16 Tomorrow Night 
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

#ifndef BASE16_tomorrow_night_H__
#define BASE16_tomorrow_night_H__

/**
 * The Base16 Tomorrow Night scheme.
 * 
 * By: Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_tomorrow_night;

#endif  /* BASE16_tomorrow_night_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tomorrow_night_IMPLEMENTATION_ONCE
#define BASE16_tomorrow_night_IMPLEMENTATION_ONCE

const base16_scheme base16_tomorrow_night = {
    .name = "Tomorrow Night",
    .base = {
        { .r = 29, .g = 31, .b = 33 },
        { .r = 40, .g = 42, .b = 46 },
        { .r = 55, .g = 59, .b = 65 },
        { .r = 150, .g = 152, .b = 150 },
        { .r = 180, .g = 183, .b = 180 },
        { .r = 197, .g = 200, .b = 198 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 204, .g = 102, .b = 102 },
        { .r = 222, .g = 147, .b = 95 },
        { .r = 240, .g = 198, .b = 116 },
        { .r = 181, .g = 189, .b = 104 },
        { .r = 138, .g = 190, .b = 183 },
        { .r = 129, .g = 162, .b = 190 },
        { .r = 178, .g = 148, .b = 187 },
        { .r = 163, .g = 104, .b = 90 }
    }
};

#endif  /* BASE16_tomorrow_night_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
