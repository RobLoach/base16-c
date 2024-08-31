/**
 * Base16 Ayu Dark 
 *
 * @author Khue Nguyen &lt;Z5483Y@gmail.com&gt;
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

#ifndef BASE16_ayu_dark_H__
#define BASE16_ayu_dark_H__

/**
 * The Base16 Ayu Dark scheme.
 *
 * By: Khue Nguyen &lt;Z5483Y@gmail.com&gt;
 */
extern const base16_scheme base16_ayu_dark;

#endif  /* BASE16_ayu_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_ayu_dark_IMPLEMENTATION_ONCE
#define BASE16_ayu_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_ayu_dark = {
    .name = "Ayu Dark",
    .base = {
        { .r = 15, .g = 20, .b = 25 },
        { .r = 19, .g = 23, .b = 33 },
        { .r = 39, .g = 45, .b = 56 },
        { .r = 62, .g = 75, .b = 89 },
        { .r = 191, .g = 189, .b = 182 },
        { .r = 230, .g = 225, .b = 207 },
        { .r = 230, .g = 225, .b = 207 },
        { .r = 243, .g = 244, .b = 245 },
        { .r = 240, .g = 113, .b = 120 },
        { .r = 255, .g = 143, .b = 64 },
        { .r = 255, .g = 180, .b = 84 },
        { .r = 184, .g = 204, .b = 82 },
        { .r = 149, .g = 230, .b = 203 },
        { .r = 89, .g = 194, .b = 255 },
        { .r = 210, .g = 166, .b = 255 },
        { .r = 230, .g = 182, .b = 115 }
    }
};

#endif  /* BASE16_ayu_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
