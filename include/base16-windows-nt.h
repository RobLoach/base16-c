/**
 * Base16 Windows NT 
 *
 * @author Fergus Collins (https://github.com/C-Fergus)
 *
 * Template by Rob Loach (https://robloach.net)
 * base16-h: https://github.com/robloach/base16-h
 */

#ifndef BASE16_COLOR_H__
#define BASE16_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct base16_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} base16_color;

#endif /* BASE16_COLOR_H__ */

#ifndef BASE16_SCHEME_H__
#define BASE16_SCHEME_H__

/**
 * A Base16 Scheme.
 */
typedef struct base16_scheme {
    const char *name; /** The name of the scheme. */
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    int system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_windows_nt_H__
#define BASE16_windows_nt_H__

/**
 * The Base16 Windows NT scheme.
 *
 * By: Fergus Collins (https://github.com/C-Fergus)
 */
extern const base16_scheme base16_windows_nt;

#endif  /* BASE16_windows_nt_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_windows_nt_IMPLEMENTATION_ONCE
#define BASE16_windows_nt_IMPLEMENTATION_ONCE

const base16_scheme base16_windows_nt = {
    .name = "Windows NT",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 42, .g = 42, .b = 42 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 161, .g = 161, .b = 161 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 0, .b = 0 },
        { .r = 128, .g = 128, .b = 0 },
        { .r = 255, .g = 255, .b = 0 },
        { .r = 0, .g = 255, .b = 0 },
        { .r = 0, .g = 255, .b = 255 },
        { .r = 0, .g = 0, .b = 255 },
        { .r = 255, .g = 0, .b = 255 },
        { .r = 0, .g = 128, .b = 0 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 255, .g = 0, .b = 0 },
        { .r = 255, .g = 255, .b = 0 },
        { .r = 0, .g = 255, .b = 0 },
        { .r = 0, .g = 255, .b = 255 },
        { .r = 0, .g = 0, .b = 255 },
        { .r = 255, .g = 0, .b = 255 }
    },
    .system = 16
};

#endif  /* BASE16_windows_nt_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
