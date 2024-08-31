/**
 * Base16 DanQing Light 
 *
 * @author Wenhan Zhu (Cosmos) (zhuwenhan950913@gmail.com)
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

#ifndef BASE16_danqing_light_H__
#define BASE16_danqing_light_H__

/**
 * The Base16 DanQing Light scheme.
 *
 * By: Wenhan Zhu (Cosmos) (zhuwenhan950913@gmail.com)
 */
extern const base16_scheme base16_danqing_light;

#endif  /* BASE16_danqing_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_danqing_light_IMPLEMENTATION_ONCE
#define BASE16_danqing_light_IMPLEMENTATION_ONCE

const base16_scheme base16_danqing_light = {
    .name = "DanQing Light",
    .base = {
        { .r = 252, .g = 254, .b = 253 },
        { .r = 236, .g = 246, .b = 242 },
        { .r = 224, .g = 240, .b = 239 },
        { .r = 202, .g = 216, .b = 210 },
        { .r = 157, .g = 168, .b = 163 },
        { .r = 90, .g = 96, .b = 93 },
        { .r = 67, .g = 72, .b = 70 },
        { .r = 45, .g = 48, .b = 47 },
        { .r = 249, .g = 144, .b = 111 },
        { .r = 179, .g = 138, .b = 97 },
        { .r = 240, .g = 194, .b = 57 },
        { .r = 138, .g = 179, .b = 97 },
        { .r = 48, .g = 223, .b = 243 },
        { .r = 176, .g = 164, .b = 227 },
        { .r = 204, .g = 164, .b = 227 },
        { .r = 202, .g = 105, .b = 36 }
    }
};

#endif  /* BASE16_danqing_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
