/**
 * Base16 Material Lighter 
 *
 * @author Nate Peterson
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

#ifndef BASE16_material_lighter_H__
#define BASE16_material_lighter_H__

/**
 * The Base16 Material Lighter scheme.
 *
 * By: Nate Peterson
 */
extern const base16_scheme base16_material_lighter;

#endif  /* BASE16_material_lighter_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_material_lighter_IMPLEMENTATION_ONCE
#define BASE16_material_lighter_IMPLEMENTATION_ONCE

const base16_scheme base16_material_lighter = {
    .name = "Material Lighter",
    .base = {
        { .r = 250, .g = 250, .b = 250 },
        { .r = 231, .g = 234, .b = 236 },
        { .r = 204, .g = 234, .b = 231 },
        { .r = 204, .g = 215, .b = 218 },
        { .r = 135, .g = 150, .b = 176 },
        { .r = 128, .g = 203, .b = 196 },
        { .r = 128, .g = 203, .b = 196 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 83, .b = 112 },
        { .r = 247, .g = 109, .b = 71 },
        { .r = 255, .g = 182, .b = 44 },
        { .r = 145, .g = 184, .b = 89 },
        { .r = 57, .g = 173, .b = 181 },
        { .r = 97, .g = 130, .b = 184 },
        { .r = 124, .g = 77, .b = 255 },
        { .r = 229, .g = 57, .b = 53 }
    }
};

#endif  /* BASE16_material_lighter_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
