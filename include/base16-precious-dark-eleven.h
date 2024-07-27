/**
 * Base16 Precious Dark Eleven 
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

#ifndef BASE16_precious_dark_eleven_H__
#define BASE16_precious_dark_eleven_H__

/**
 * The Base16 Precious Dark Eleven scheme.
 * 
 * By: 4lex4 &lt;4lex49@zoho.com&gt;
 */
extern const base16_scheme base16_precious_dark_eleven;

#endif  /* BASE16_precious_dark_eleven_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_precious_dark_eleven_IMPLEMENTATION_ONCE
#define BASE16_precious_dark_eleven_IMPLEMENTATION_ONCE

const base16_scheme base16_precious_dark_eleven = {
    .name = "Precious Dark Eleven",
    .base = {
        { .r = 28, .g = 30, .b = 32 },
        { .r = 41, .g = 43, .b = 45 },
        { .r = 55, .g = 57, .b = 58 },
        { .r = 133, .g = 133, .b = 133 },
        { .r = 168, .g = 168, .b = 167 },
        { .r = 184, .g = 183, .b = 182 },
        { .r = 184, .g = 183, .b = 182 },
        { .r = 184, .g = 183, .b = 182 },
        { .r = 255, .g = 135, .b = 130 },
        { .r = 234, .g = 151, .b = 85 },
        { .r = 208, .g = 165, .b = 67 },
        { .r = 149, .g = 182, .b = 88 },
        { .r = 66, .g = 189, .b = 167 },
        { .r = 104, .g = 176, .b = 238 },
        { .r = 183, .g = 153, .b = 254 },
        { .r = 243, .g = 130, .b = 216 }
    }
};

#endif  /* BASE16_precious_dark_eleven_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
