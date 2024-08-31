/**
 * Base16 Precious Dark Fifteen 
 *
 * @author 4lex4 &lt;4lex49@zoho.com&gt;
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

#ifndef BASE16_precious_dark_fifteen_H__
#define BASE16_precious_dark_fifteen_H__

/**
 * The Base16 Precious Dark Fifteen scheme.
 *
 * By: 4lex4 &lt;4lex49@zoho.com&gt;
 */
extern const base16_scheme base16_precious_dark_fifteen;

#endif  /* BASE16_precious_dark_fifteen_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_precious_dark_fifteen_IMPLEMENTATION_ONCE
#define BASE16_precious_dark_fifteen_IMPLEMENTATION_ONCE

const base16_scheme base16_precious_dark_fifteen = {
    .name = "Precious Dark Fifteen",
    .base = {
        { .r = 35, .g = 38, .b = 43 },
        { .r = 48, .g = 51, .b = 55 },
        { .r = 62, .g = 64, .b = 68 },
        { .r = 137, .g = 137, .b = 137 },
        { .r = 171, .g = 170, .b = 168 },
        { .r = 186, .g = 185, .b = 182 },
        { .r = 186, .g = 185, .b = 182 },
        { .r = 186, .g = 185, .b = 182 },
        { .r = 255, .g = 135, .b = 130 },
        { .r = 233, .g = 152, .b = 87 },
        { .r = 207, .g = 165, .b = 70 },
        { .r = 149, .g = 182, .b = 89 },
        { .r = 66, .g = 189, .b = 167 },
        { .r = 102, .g = 176, .b = 239 },
        { .r = 183, .g = 153, .b = 255 },
        { .r = 243, .g = 130, .b = 216 }
    }
};

#endif  /* BASE16_precious_dark_fifteen_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
