/**
 * Base16 Evenok Dark 
 *
 * @author Mekeor Melire
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

#ifndef BASE16_evenok_dark_H__
#define BASE16_evenok_dark_H__

/**
 * The Base16 Evenok Dark scheme.
 *
 * By: Mekeor Melire
 */
extern const base16_scheme base16_evenok_dark;

#endif  /* BASE16_evenok_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_evenok_dark_IMPLEMENTATION_ONCE
#define BASE16_evenok_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_evenok_dark = {
    .name = "Evenok Dark",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 32, .g = 32, .b = 32 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 80, .g = 80, .b = 80 },
        { .r = 176, .g = 176, .b = 176 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 245, .g = 112, .b = 138 },
        { .r = 238, .g = 129, .b = 34 },
        { .r = 184, .g = 163, .b = 0 },
        { .r = 84, .g = 188, .b = 92 },
        { .r = 0, .g = 186, .b = 179 },
        { .r = 0, .g = 175, .b = 242 },
        { .r = 144, .g = 149, .b = 255 },
        { .r = 212, .g = 122, .b = 218 }
    }
};

#endif  /* BASE16_evenok_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
