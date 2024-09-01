/**
 * Base16 Catppuccin Frappe 
 *
 * @author https://github.com/catppuccin/catppuccin
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

#ifndef BASE16_catppuccin_frappe_H__
#define BASE16_catppuccin_frappe_H__

/**
 * The Base16 Catppuccin Frappe scheme.
 *
 * By: https://github.com/catppuccin/catppuccin
 */
extern const base16_scheme base16_catppuccin_frappe;

#endif  /* BASE16_catppuccin_frappe_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_catppuccin_frappe_IMPLEMENTATION_ONCE
#define BASE16_catppuccin_frappe_IMPLEMENTATION_ONCE

const base16_scheme base16_catppuccin_frappe = {
    .name = "Catppuccin Frappe",
    .base = {
        { .r = 48, .g = 52, .b = 70 },
        { .r = 41, .g = 44, .b = 60 },
        { .r = 65, .g = 69, .b = 89 },
        { .r = 81, .g = 87, .b = 109 },
        { .r = 98, .g = 104, .b = 128 },
        { .r = 198, .g = 208, .b = 245 },
        { .r = 242, .g = 213, .b = 207 },
        { .r = 186, .g = 187, .b = 241 },
        { .r = 231, .g = 130, .b = 132 },
        { .r = 239, .g = 159, .b = 118 },
        { .r = 229, .g = 200, .b = 144 },
        { .r = 166, .g = 209, .b = 137 },
        { .r = 129, .g = 200, .b = 190 },
        { .r = 140, .g = 170, .b = 238 },
        { .r = 202, .g = 158, .b = 230 },
        { .r = 238, .g = 190, .b = 190 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 48, .g = 52, .b = 70 },
        { .r = 48, .g = 52, .b = 70 },
        { .r = 231, .g = 130, .b = 132 },
        { .r = 229, .g = 200, .b = 144 },
        { .r = 166, .g = 209, .b = 137 },
        { .r = 129, .g = 200, .b = 190 },
        { .r = 140, .g = 170, .b = 238 },
        { .r = 202, .g = 158, .b = 230 }
    },
    .system = 16
};

#endif  /* BASE16_catppuccin_frappe_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
