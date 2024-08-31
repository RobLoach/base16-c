/**
 * Base16 Windows High Contrast 
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

#ifndef BASE16_windows_highcontrast_H__
#define BASE16_windows_highcontrast_H__

/**
 * The Base16 Windows High Contrast scheme.
 *
 * By: Fergus Collins (https://github.com/C-Fergus)
 */
extern const base16_scheme base16_windows_highcontrast;

#endif  /* BASE16_windows_highcontrast_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_windows_highcontrast_IMPLEMENTATION_ONCE
#define BASE16_windows_highcontrast_IMPLEMENTATION_ONCE

const base16_scheme base16_windows_highcontrast = {
    .name = "Windows High Contrast",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 56, .g = 56, .b = 56 },
        { .r = 84, .g = 84, .b = 84 },
        { .r = 162, .g = 162, .b = 162 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 222, .g = 222, .b = 222 },
        { .r = 252, .g = 252, .b = 252 },
        { .r = 252, .g = 84, .b = 84 },
        { .r = 128, .g = 128, .b = 0 },
        { .r = 252, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 252 },
        { .r = 84, .g = 84, .b = 252 },
        { .r = 252, .g = 84, .b = 252 },
        { .r = 0, .g = 128, .b = 0 }
    }
};

#endif  /* BASE16_windows_highcontrast_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
