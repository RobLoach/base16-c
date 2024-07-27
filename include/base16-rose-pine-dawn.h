/**
 * Base16 Rosé Pine Dawn 
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

#ifndef BASE16_rose_pine_dawn_H__
#define BASE16_rose_pine_dawn_H__

/**
 * The Base16 Rosé Pine Dawn scheme.
 * 
 * By: Emilia Dunfelt &lt;edun@dunfelt.se&gt;
 */
extern const base16_scheme base16_rose_pine_dawn;

#endif  /* BASE16_rose_pine_dawn_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_rose_pine_dawn_IMPLEMENTATION_ONCE
#define BASE16_rose_pine_dawn_IMPLEMENTATION_ONCE

const base16_scheme base16_rose_pine_dawn = {
    .name = "Rosé Pine Dawn",
    .base = {
        { .r = 250, .g = 244, .b = 237 },
        { .r = 255, .g = 250, .b = 243 },
        { .r = 242, .g = 233, .b = 222 },
        { .r = 152, .g = 147, .b = 165 },
        { .r = 121, .g = 117, .b = 147 },
        { .r = 87, .g = 82, .b = 121 },
        { .r = 87, .g = 82, .b = 121 },
        { .r = 206, .g = 202, .b = 205 },
        { .r = 180, .g = 99, .b = 122 },
        { .r = 234, .g = 157, .b = 52 },
        { .r = 215, .g = 130, .b = 126 },
        { .r = 40, .g = 105, .b = 131 },
        { .r = 86, .g = 148, .b = 159 },
        { .r = 144, .g = 122, .b = 169 },
        { .r = 234, .g = 157, .b = 52 },
        { .r = 206, .g = 202, .b = 205 }
    }
};

#endif  /* BASE16_rose_pine_dawn_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
