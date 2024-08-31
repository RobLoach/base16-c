/**
 * Base16 Kanagawa 
 *
 * @author Tommaso Laurenzi (https://github.com/rebelot)
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

#ifndef BASE16_kanagawa_H__
#define BASE16_kanagawa_H__

/**
 * The Base16 Kanagawa scheme.
 *
 * By: Tommaso Laurenzi (https://github.com/rebelot)
 */
extern const base16_scheme base16_kanagawa;

#endif  /* BASE16_kanagawa_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_kanagawa_IMPLEMENTATION_ONCE
#define BASE16_kanagawa_IMPLEMENTATION_ONCE

const base16_scheme base16_kanagawa = {
    .name = "Kanagawa",
    .base = {
        { .r = 31, .g = 31, .b = 40 },
        { .r = 22, .g = 22, .b = 29 },
        { .r = 34, .g = 50, .b = 73 },
        { .r = 84, .g = 84, .b = 109 },
        { .r = 114, .g = 113, .b = 105 },
        { .r = 220, .g = 215, .b = 186 },
        { .r = 200, .g = 192, .b = 147 },
        { .r = 113, .g = 124, .b = 124 },
        { .r = 195, .g = 64, .b = 67 },
        { .r = 255, .g = 160, .b = 102 },
        { .r = 192, .g = 163, .b = 110 },
        { .r = 118, .g = 148, .b = 106 },
        { .r = 106, .g = 149, .b = 137 },
        { .r = 126, .g = 156, .b = 216 },
        { .r = 149, .g = 127, .b = 184 },
        { .r = 210, .g = 126, .b = 153 }
    }
};

#endif  /* BASE16_kanagawa_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
