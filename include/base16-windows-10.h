/**
 * Base16 Windows 10 
 *
 * @author Fergus Collins (https://github.com/C-Fergus)
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

#ifndef BASE16_windows_10_H__
#define BASE16_windows_10_H__

/**
 * The Base16 Windows 10 scheme.
 *
 * By: Fergus Collins (https://github.com/C-Fergus)
 */
extern const base16_scheme base16_windows_10;

#endif  /* BASE16_windows_10_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_windows_10_IMPLEMENTATION_ONCE
#define BASE16_windows_10_IMPLEMENTATION_ONCE

const base16_scheme base16_windows_10 = {
    .name = "Windows 10",
    .base = {
        { .r = 12, .g = 12, .b = 12 },
        { .r = 47, .g = 47, .b = 47 },
        { .r = 83, .g = 83, .b = 83 },
        { .r = 118, .g = 118, .b = 118 },
        { .r = 185, .g = 185, .b = 185 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 223, .g = 223, .b = 223 },
        { .r = 242, .g = 242, .b = 242 },
        { .r = 231, .g = 72, .b = 86 },
        { .r = 193, .g = 156, .b = 0 },
        { .r = 249, .g = 241, .b = 165 },
        { .r = 22, .g = 198, .b = 12 },
        { .r = 97, .g = 214, .b = 214 },
        { .r = 59, .g = 120, .b = 255 },
        { .r = 180, .g = 0, .b = 158 },
        { .r = 19, .g = 161, .b = 14 }
    }
};

#endif  /* BASE16_windows_10_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
