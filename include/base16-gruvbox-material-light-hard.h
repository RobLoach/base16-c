/**
 * Base16 Gruvbox Material Light, Hard 
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

#ifndef BASE16_gruvbox_material_light_hard_H__
#define BASE16_gruvbox_material_light_hard_H__

/**
 * The Base16 Gruvbox Material Light, Hard scheme.
 *
 * By: Mayush Kumar (https://github.com/MayushKumar), sainnhe (https://github.com/sainnhe/gruvbox-material-vscode)
 */
extern const base16_scheme base16_gruvbox_material_light_hard;

#endif  /* BASE16_gruvbox_material_light_hard_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gruvbox_material_light_hard_IMPLEMENTATION_ONCE
#define BASE16_gruvbox_material_light_hard_IMPLEMENTATION_ONCE

const base16_scheme base16_gruvbox_material_light_hard = {
    .name = "Gruvbox Material Light, Hard",
    .base = {
        { .r = 249, .g = 245, .b = 215 },
        { .r = 251, .g = 241, .b = 199 },
        { .r = 224, .g = 207, .b = 169 },
        { .r = 168, .g = 153, .b = 132 },
        { .r = 201, .g = 185, .b = 154 },
        { .r = 101, .g = 71, .b = 53 },
        { .r = 60, .g = 56, .b = 54 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 193, .g = 74, .b = 74 },
        { .r = 195, .g = 94, .b = 10 },
        { .r = 180, .g = 113, .b = 9 },
        { .r = 108, .g = 120, .b = 46 },
        { .r = 76, .g = 122, .b = 93 },
        { .r = 69, .g = 112, .b = 122 },
        { .r = 148, .g = 94, .b = 128 },
        { .r = 231, .g = 138, .b = 78 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 249, .g = 245, .b = 215 },
        { .r = 249, .g = 245, .b = 215 },
        { .r = 193, .g = 74, .b = 74 },
        { .r = 180, .g = 113, .b = 9 },
        { .r = 108, .g = 120, .b = 46 },
        { .r = 76, .g = 122, .b = 93 },
        { .r = 69, .g = 112, .b = 122 },
        { .r = 148, .g = 94, .b = 128 }
    },
    .system = 16
};

#endif  /* BASE16_gruvbox_material_light_hard_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
