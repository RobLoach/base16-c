/**
 * Base16 Stella 
 * 
 * @author Shrimpram
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

#ifndef BASE16_stella_H__
#define BASE16_stella_H__

/**
 * The Base16 Stella scheme.
 * 
 * By: Shrimpram
 */
extern const base16_scheme base16_stella;

#endif  /* BASE16_stella_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_stella_IMPLEMENTATION_ONCE
#define BASE16_stella_IMPLEMENTATION_ONCE

const base16_scheme base16_stella = {
    .name = "Stella",
    .base = {
        { .r = 43, .g = 33, .b = 60 },
        { .r = 54, .g = 43, .b = 72 },
        { .r = 77, .g = 65, .b = 96 },
        { .r = 101, .g = 89, .b = 120 },
        { .r = 127, .g = 113, .b = 146 },
        { .r = 153, .g = 139, .b = 173 },
        { .r = 180, .g = 165, .b = 200 },
        { .r = 235, .g = 220, .b = 255 },
        { .r = 199, .g = 153, .b = 135 },
        { .r = 136, .g = 101, .b = 198 },
        { .r = 199, .g = 198, .b = 145 },
        { .r = 172, .g = 199, .b = 155 },
        { .r = 155, .g = 199, .b = 191 },
        { .r = 165, .g = 170, .b = 212 },
        { .r = 197, .g = 148, .b = 255 },
        { .r = 199, .g = 171, .b = 135 }
    }
};

#endif  /* BASE16_stella_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
