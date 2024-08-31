/**
 * Base16 Tokyo Night Moon 
 *
 * @author Ólafur Bjarki Bogason
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

#ifndef BASE16_tokyo_night_moon_H__
#define BASE16_tokyo_night_moon_H__

/**
 * The Base16 Tokyo Night Moon scheme.
 *
 * By: Ólafur Bjarki Bogason
 */
extern const base16_scheme base16_tokyo_night_moon;

#endif  /* BASE16_tokyo_night_moon_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tokyo_night_moon_IMPLEMENTATION_ONCE
#define BASE16_tokyo_night_moon_IMPLEMENTATION_ONCE

const base16_scheme base16_tokyo_night_moon = {
    .name = "Tokyo Night Moon",
    .base = {
        { .r = 34, .g = 36, .b = 54 },
        { .r = 30, .g = 32, .b = 48 },
        { .r = 45, .g = 63, .b = 118 },
        { .r = 99, .g = 109, .b = 166 },
        { .r = 130, .g = 139, .b = 184 },
        { .r = 59, .g = 66, .b = 97 },
        { .r = 130, .g = 139, .b = 184 },
        { .r = 200, .g = 211, .b = 245 },
        { .r = 255, .g = 117, .b = 127 },
        { .r = 255, .g = 199, .b = 119 },
        { .r = 255, .g = 199, .b = 119 },
        { .r = 195, .g = 232, .b = 141 },
        { .r = 134, .g = 225, .b = 252 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 252, .g = 167, .b = 234 },
        { .r = 197, .g = 59, .b = 83 }
    }
};

#endif  /* BASE16_tokyo_night_moon_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
