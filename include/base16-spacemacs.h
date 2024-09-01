/**
 * Base16 Spacemacs 
 *
 * @author Nasser Alshammari (https://github.com/nashamri/spacemacs-theme)
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

#ifndef BASE16_spacemacs_H__
#define BASE16_spacemacs_H__

/**
 * The Base16 Spacemacs scheme.
 *
 * By: Nasser Alshammari (https://github.com/nashamri/spacemacs-theme)
 */
extern const base16_scheme base16_spacemacs;

#endif  /* BASE16_spacemacs_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_spacemacs_IMPLEMENTATION_ONCE
#define BASE16_spacemacs_IMPLEMENTATION_ONCE

const base16_scheme base16_spacemacs = {
    .name = "Spacemacs",
    .base = {
        { .r = 31, .g = 32, .b = 34 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 68, .g = 65, .b = 85 },
        { .r = 88, .g = 88, .b = 88 },
        { .r = 184, .g = 184, .b = 184 },
        { .r = 163, .g = 163, .b = 163 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 248, .g = 248, .b = 248 },
        { .r = 242, .g = 36, .b = 31 },
        { .r = 255, .g = 165, .b = 0 },
        { .r = 177, .g = 149, .b = 29 },
        { .r = 103, .g = 177, .b = 29 },
        { .r = 45, .g = 149, .b = 116 },
        { .r = 79, .g = 151, .b = 215 },
        { .r = 163, .g = 29, .b = 177 },
        { .r = 176, .g = 48, .b = 96 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 31, .g = 32, .b = 34 },
        { .r = 31, .g = 32, .b = 34 },
        { .r = 242, .g = 36, .b = 31 },
        { .r = 177, .g = 149, .b = 29 },
        { .r = 103, .g = 177, .b = 29 },
        { .r = 45, .g = 149, .b = 116 },
        { .r = 79, .g = 151, .b = 215 },
        { .r = 163, .g = 29, .b = 177 }
    },
    .system = 16
};

#endif  /* BASE16_spacemacs_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
