/**
 * Base16 Gruvbox Material Light, Soft 
 * 
 * @author Mayush Kumar (https://github.com/MayushKumar), sainnhe (https://github.com/sainnhe/gruvbox-material-vscode)
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

#ifndef BASE16_gruvbox_material_light_soft_H__
#define BASE16_gruvbox_material_light_soft_H__

/**
 * The Base16 Gruvbox Material Light, Soft scheme.
 * 
 * By: Mayush Kumar (https://github.com/MayushKumar), sainnhe (https://github.com/sainnhe/gruvbox-material-vscode)
 */
extern const base16_scheme base16_gruvbox_material_light_soft;

#endif  /* BASE16_gruvbox_material_light_soft_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gruvbox_material_light_soft_IMPLEMENTATION_ONCE
#define BASE16_gruvbox_material_light_soft_IMPLEMENTATION_ONCE

const base16_scheme base16_gruvbox_material_light_soft = {
    .name = "Gruvbox Material Light, Soft",
    .base = {
        { .r = 242, .g = 229, .b = 188 },
        { .r = 235, .g = 219, .b = 178 },
        { .r = 201, .g = 185, .b = 154 },
        { .r = 168, .g = 153, .b = 132 },
        { .r = 102, .g = 92, .b = 84 },
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
        { .r = 231, .g = 138, .b = 78 }
    }
};

#endif  /* BASE16_gruvbox_material_light_soft_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
