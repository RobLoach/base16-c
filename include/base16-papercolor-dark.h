/**
 * Base16 PaperColor Dark 
 *
 * @author Jon Leopard (http://github.com/jonleopard), based on PaperColor Theme (https://github.com/NLKNguyen/papercolor-theme)
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

#ifndef BASE16_papercolor_dark_H__
#define BASE16_papercolor_dark_H__

/**
 * The Base16 PaperColor Dark scheme.
 *
 * By: Jon Leopard (http://github.com/jonleopard), based on PaperColor Theme (https://github.com/NLKNguyen/papercolor-theme)
 */
extern const base16_scheme base16_papercolor_dark;

#endif  /* BASE16_papercolor_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_papercolor_dark_IMPLEMENTATION_ONCE
#define BASE16_papercolor_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_papercolor_dark = {
    .name = "PaperColor Dark",
    .base = {
        { .r = 28, .g = 28, .b = 28 },
        { .r = 175, .g = 0, .b = 95 },
        { .r = 95, .g = 175, .b = 0 },
        { .r = 215, .g = 175, .b = 95 },
        { .r = 95, .g = 175, .b = 215 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 215, .g = 135, .b = 95 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 88, .g = 88, .b = 88 },
        { .r = 95, .g = 175, .b = 95 },
        { .r = 175, .g = 215, .b = 0 },
        { .r = 175, .g = 135, .b = 215 },
        { .r = 255, .g = 175, .b = 0 },
        { .r = 255, .g = 95, .b = 175 },
        { .r = 0, .g = 175, .b = 175 },
        { .r = 95, .g = 135, .b = 135 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 28, .g = 28, .b = 28 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 88, .g = 88, .b = 88 },
        { .r = 175, .g = 215, .b = 0 },
        { .r = 175, .g = 135, .b = 215 },
        { .r = 255, .g = 175, .b = 0 },
        { .r = 255, .g = 95, .b = 175 },
        { .r = 0, .g = 175, .b = 175 }
    },
    .system = 16
};

#endif  /* BASE16_papercolor_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
