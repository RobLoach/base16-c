/**
 * Base16 Rosé Pine 
 * 
 * @author Emilia Dunfelt &lt;edun@dunfelt.se&gt;
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

#ifndef BASE16_rose_pine_H__
#define BASE16_rose_pine_H__

/**
 * The Base16 Rosé Pine scheme.
 * 
 * By: Emilia Dunfelt &lt;edun@dunfelt.se&gt;
 */
extern const base16_scheme base16_rose_pine;

#endif  /* BASE16_rose_pine_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_rose_pine_IMPLEMENTATION_ONCE
#define BASE16_rose_pine_IMPLEMENTATION_ONCE

const base16_scheme base16_rose_pine = {
    .name = "Rosé Pine",
    .base = {
        { .r = 25, .g = 23, .b = 36 },
        { .r = 31, .g = 29, .b = 46 },
        { .r = 38, .g = 35, .b = 58 },
        { .r = 110, .g = 106, .b = 134 },
        { .r = 144, .g = 140, .b = 170 },
        { .r = 224, .g = 222, .b = 244 },
        { .r = 224, .g = 222, .b = 244 },
        { .r = 82, .g = 79, .b = 103 },
        { .r = 235, .g = 111, .b = 146 },
        { .r = 246, .g = 193, .b = 119 },
        { .r = 235, .g = 188, .b = 186 },
        { .r = 49, .g = 116, .b = 143 },
        { .r = 156, .g = 207, .b = 216 },
        { .r = 196, .g = 167, .b = 231 },
        { .r = 246, .g = 193, .b = 119 },
        { .r = 82, .g = 79, .b = 103 }
    }
};

#endif  /* BASE16_rose_pine_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
