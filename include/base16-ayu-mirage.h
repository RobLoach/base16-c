/**
 * Base16 Ayu Mirage 
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

#ifndef BASE16_ayu_mirage_H__
#define BASE16_ayu_mirage_H__

/**
 * The Base16 Ayu Mirage scheme.
 * 
 * By: Khue Nguyen &lt;Z5483Y@gmail.com&gt;
 */
extern const base16_scheme base16_ayu_mirage;

#endif  /* BASE16_ayu_mirage_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_ayu_mirage_IMPLEMENTATION_ONCE
#define BASE16_ayu_mirage_IMPLEMENTATION_ONCE

const base16_scheme base16_ayu_mirage = {
    .name = "Ayu Mirage",
    .base = {
        { .r = 23, .g = 27, .b = 36 },
        { .r = 31, .g = 36, .b = 48 },
        { .r = 36, .g = 41, .b = 54 },
        { .r = 112, .g = 122, .b = 140 },
        { .r = 138, .g = 145, .b = 153 },
        { .r = 204, .g = 202, .b = 194 },
        { .r = 217, .g = 215, .b = 206 },
        { .r = 243, .g = 244, .b = 245 },
        { .r = 242, .g = 135, .b = 121 },
        { .r = 255, .g = 173, .b = 102 },
        { .r = 255, .g = 209, .b = 115 },
        { .r = 213, .g = 255, .b = 128 },
        { .r = 149, .g = 230, .b = 203 },
        { .r = 92, .g = 207, .b = 230 },
        { .r = 212, .g = 191, .b = 255 },
        { .r = 242, .g = 158, .b = 116 }
    }
};

#endif  /* BASE16_ayu_mirage_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
