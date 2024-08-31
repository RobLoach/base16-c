/**
 * Base16 Dark Violet 
 *
 * @author ruler501 (https://github.com/ruler501/base16-darkviolet)
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

#ifndef BASE16_darkviolet_H__
#define BASE16_darkviolet_H__

/**
 * The Base16 Dark Violet scheme.
 *
 * By: ruler501 (https://github.com/ruler501/base16-darkviolet)
 */
extern const base16_scheme base16_darkviolet;

#endif  /* BASE16_darkviolet_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_darkviolet_IMPLEMENTATION_ONCE
#define BASE16_darkviolet_IMPLEMENTATION_ONCE

const base16_scheme base16_darkviolet = {
    .name = "Dark Violet",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 35, .g = 26, .b = 64 },
        { .r = 67, .g = 45, .b = 89 },
        { .r = 89, .g = 51, .b = 128 },
        { .r = 0, .g = 255, .b = 0 },
        { .r = 176, .g = 138, .b = 230 },
        { .r = 144, .g = 69, .b = 230 },
        { .r = 163, .g = 102, .b = 255 },
        { .r = 168, .g = 46, .b = 230 },
        { .r = 187, .g = 102, .b = 204 },
        { .r = 242, .g = 157, .b = 242 },
        { .r = 69, .g = 149, .b = 230 },
        { .r = 64, .g = 223, .b = 255 },
        { .r = 65, .g = 54, .b = 217 },
        { .r = 126, .g = 92, .b = 230 },
        { .r = 168, .g = 134, .b = 191 }
    }
};

#endif  /* BASE16_darkviolet_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
