/**
 * Base16 Windows 10 Light 
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

#ifndef BASE16_windows_10_light_H__
#define BASE16_windows_10_light_H__

/**
 * The Base16 Windows 10 Light scheme.
 *
 * By: Fergus Collins (https://github.com/C-Fergus)
 */
extern const base16_scheme base16_windows_10_light;

#endif  /* BASE16_windows_10_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_windows_10_light_IMPLEMENTATION_ONCE
#define BASE16_windows_10_light_IMPLEMENTATION_ONCE

const base16_scheme base16_windows_10_light = {
    .name = "Windows 10 Light",
    .base = {
        { .r = 242, .g = 242, .b = 242 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 217, .g = 217, .b = 217 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 171, .g = 171, .b = 171 },
        { .r = 118, .g = 118, .b = 118 },
        { .r = 65, .g = 65, .b = 65 },
        { .r = 12, .g = 12, .b = 12 },
        { .r = 197, .g = 15, .b = 31 },
        { .r = 249, .g = 241, .b = 165 },
        { .r = 193, .g = 156, .b = 0 },
        { .r = 19, .g = 161, .b = 14 },
        { .r = 58, .g = 150, .b = 221 },
        { .r = 0, .g = 55, .b = 218 },
        { .r = 136, .g = 23, .b = 152 },
        { .r = 22, .g = 198, .b = 12 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 242, .g = 242, .b = 242 },
        { .r = 242, .g = 242, .b = 242 },
        { .r = 197, .g = 15, .b = 31 },
        { .r = 193, .g = 156, .b = 0 },
        { .r = 19, .g = 161, .b = 14 },
        { .r = 58, .g = 150, .b = 221 },
        { .r = 0, .g = 55, .b = 218 },
        { .r = 136, .g = 23, .b = 152 }
    },
    .system = 16
};

#endif  /* BASE16_windows_10_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
