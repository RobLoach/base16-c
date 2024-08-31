/**
 * Base16 Jabuti 
 *
 * @author https://github.com/notusknot
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

#ifndef BASE16_jabuti_H__
#define BASE16_jabuti_H__

/**
 * The Base16 Jabuti scheme.
 *
 * By: https://github.com/notusknot
 */
extern const base16_scheme base16_jabuti;

#endif  /* BASE16_jabuti_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_jabuti_IMPLEMENTATION_ONCE
#define BASE16_jabuti_IMPLEMENTATION_ONCE

const base16_scheme base16_jabuti = {
    .name = "Jabuti",
    .base = {
        { .r = 41, .g = 42, .b = 55 },
        { .r = 52, .g = 53, .b = 69 },
        { .r = 60, .g = 62, .b = 81 },
        { .r = 69, .g = 71, .b = 93 },
        { .r = 80, .g = 82, .b = 107 },
        { .r = 192, .g = 203, .b = 227 },
        { .r = 217, .g = 224, .b = 238 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 236, .g = 106, .b = 136 },
        { .r = 239, .g = 185, .b = 147 },
        { .r = 225, .g = 198, .b = 151 },
        { .r = 63, .g = 218, .b = 164 },
        { .r = 255, .g = 126, .b = 182 },
        { .r = 63, .g = 198, .b = 222 },
        { .r = 190, .g = 149, .b = 255 },
        { .r = 139, .g = 141, .b = 169 }
    }
};

#endif  /* BASE16_jabuti_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
