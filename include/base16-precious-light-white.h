/**
 * Base16 Precious Light White 
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

#ifndef BASE16_precious_light_white_H__
#define BASE16_precious_light_white_H__

/**
 * The Base16 Precious Light White scheme.
 * 
 * By: 4lex4 &lt;4lex49@zoho.com&gt;
 */
extern const base16_scheme base16_precious_light_white;

#endif  /* BASE16_precious_light_white_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_precious_light_white_IMPLEMENTATION_ONCE
#define BASE16_precious_light_white_IMPLEMENTATION_ONCE

const base16_scheme base16_precious_light_white = {
    .name = "Precious Light White",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 237, .g = 237, .b = 237 },
        { .r = 219, .g = 219, .b = 219 },
        { .r = 132, .g = 132, .b = 132 },
        { .r = 99, .g = 99, .b = 99 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 175, .g = 73, .b = 71 },
        { .r = 160, .g = 87, .b = 13 },
        { .r = 135, .g = 101, .b = 0 },
        { .r = 85, .g = 115, .b = 1 },
        { .r = 8, .g = 119, .b = 103 },
        { .r = 24, .g = 109, .b = 170 },
        { .r = 123, .g = 78, .b = 203 },
        { .r = 169, .g = 62, .b = 147 }
    }
};

#endif  /* BASE16_precious_light_white_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
