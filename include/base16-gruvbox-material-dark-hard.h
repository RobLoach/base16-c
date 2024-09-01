/**
 * Base16 Gruvbox Material Dark, Hard 
 *
 * @author Mayush Kumar (https://github.com/MayushKumar), sainnhe (https://github.com/sainnhe/gruvbox-material-vscode)
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

#ifndef BASE16_gruvbox_material_dark_hard_H__
#define BASE16_gruvbox_material_dark_hard_H__

/**
 * The Base16 Gruvbox Material Dark, Hard scheme.
 *
 * By: Mayush Kumar (https://github.com/MayushKumar), sainnhe (https://github.com/sainnhe/gruvbox-material-vscode)
 */
extern const base16_scheme base16_gruvbox_material_dark_hard;

#endif  /* BASE16_gruvbox_material_dark_hard_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gruvbox_material_dark_hard_IMPLEMENTATION_ONCE
#define BASE16_gruvbox_material_dark_hard_IMPLEMENTATION_ONCE

const base16_scheme base16_gruvbox_material_dark_hard = {
    .name = "Gruvbox Material Dark, Hard",
    .base = {
        { .r = 32, .g = 32, .b = 32 },
        { .r = 42, .g = 40, .b = 39 },
        { .r = 80, .g = 73, .b = 69 },
        { .r = 90, .g = 82, .b = 76 },
        { .r = 189, .g = 174, .b = 147 },
        { .r = 221, .g = 199, .b = 161 },
        { .r = 235, .g = 219, .b = 178 },
        { .r = 251, .g = 241, .b = 199 },
        { .r = 234, .g = 105, .b = 98 },
        { .r = 231, .g = 138, .b = 78 },
        { .r = 216, .g = 166, .b = 87 },
        { .r = 169, .g = 182, .b = 101 },
        { .r = 137, .g = 180, .b = 130 },
        { .r = 125, .g = 174, .b = 163 },
        { .r = 211, .g = 134, .b = 155 },
        { .r = 189, .g = 111, .b = 62 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 32, .g = 32, .b = 32 },
        { .r = 32, .g = 32, .b = 32 },
        { .r = 234, .g = 105, .b = 98 },
        { .r = 216, .g = 166, .b = 87 },
        { .r = 169, .g = 182, .b = 101 },
        { .r = 137, .g = 180, .b = 130 },
        { .r = 125, .g = 174, .b = 163 },
        { .r = 211, .g = 134, .b = 155 }
    },
    .system = 16
};

#endif  /* BASE16_gruvbox_material_dark_hard_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
