/**
 * Base16 Windows 95 
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

#ifndef BASE16_windows_95_H__
#define BASE16_windows_95_H__

/**
 * The Base16 Windows 95 scheme.
 *
 * By: Fergus Collins (https://github.com/C-Fergus)
 */
extern const base16_scheme base16_windows_95;

#endif  /* BASE16_windows_95_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_windows_95_IMPLEMENTATION_ONCE
#define BASE16_windows_95_IMPLEMENTATION_ONCE

const base16_scheme base16_windows_95 = {
    .name = "Windows 95",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 56, .g = 56, .b = 56 },
        { .r = 84, .g = 84, .b = 84 },
        { .r = 126, .g = 126, .b = 126 },
        { .r = 168, .g = 168, .b = 168 },
        { .r = 210, .g = 210, .b = 210 },
        { .r = 252, .g = 252, .b = 252 },
        { .r = 252, .g = 84, .b = 84 },
        { .r = 168, .g = 84, .b = 0 },
        { .r = 252, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 252 },
        { .r = 84, .g = 84, .b = 252 },
        { .r = 252, .g = 84, .b = 252 },
        { .r = 0, .g = 168, .b = 0 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 252, .g = 84, .b = 84 },
        { .r = 252, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 252 },
        { .r = 84, .g = 84, .b = 252 },
        { .r = 252, .g = 84, .b = 252 }
    },
    .system = 16
};

#endif  /* BASE16_windows_95_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
