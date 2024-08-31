/**
 * Base16 Brush Trees 
 *
 * @author Abraham White &lt;abelincoln.white@gmail.com&gt;
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

#ifndef BASE16_brushtrees_H__
#define BASE16_brushtrees_H__

/**
 * The Base16 Brush Trees scheme.
 *
 * By: Abraham White &lt;abelincoln.white@gmail.com&gt;
 */
extern const base16_scheme base16_brushtrees;

#endif  /* BASE16_brushtrees_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_brushtrees_IMPLEMENTATION_ONCE
#define BASE16_brushtrees_IMPLEMENTATION_ONCE

const base16_scheme base16_brushtrees = {
    .name = "Brush Trees",
    .base = {
        { .r = 227, .g = 239, .b = 239 },
        { .r = 201, .g = 219, .b = 220 },
        { .r = 176, .g = 197, .b = 200 },
        { .r = 152, .g = 175, .b = 181 },
        { .r = 130, .g = 153, .b = 161 },
        { .r = 109, .g = 130, .b = 142 },
        { .r = 90, .g = 109, .b = 122 },
        { .r = 72, .g = 88, .b = 103 },
        { .r = 179, .g = 134, .b = 134 },
        { .r = 216, .g = 187, .b = 162 },
        { .r = 170, .g = 179, .b = 134 },
        { .r = 135, .g = 179, .b = 134 },
        { .r = 134, .g = 179, .b = 179 },
        { .r = 134, .g = 140, .b = 179 },
        { .r = 179, .g = 134, .b = 178 },
        { .r = 179, .g = 159, .b = 159 }
    }
};

#endif  /* BASE16_brushtrees_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
