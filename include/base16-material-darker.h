/**
 * Base16 Material Darker 
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

#ifndef BASE16_material_darker_H__
#define BASE16_material_darker_H__

/**
 * The Base16 Material Darker scheme.
 * 
 * By: Nate Peterson
 */
extern const base16_scheme base16_material_darker;

#endif  /* BASE16_material_darker_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_material_darker_IMPLEMENTATION_ONCE
#define BASE16_material_darker_IMPLEMENTATION_ONCE

const base16_scheme base16_material_darker = {
    .name = "Material Darker",
    .base = {
        { .r = 33, .g = 33, .b = 33 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 53, .g = 53, .b = 53 },
        { .r = 74, .g = 74, .b = 74 },
        { .r = 178, .g = 204, .b = 214 },
        { .r = 238, .g = 255, .b = 255 },
        { .r = 238, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 240, .g = 113, .b = 120 },
        { .r = 247, .g = 140, .b = 108 },
        { .r = 255, .g = 203, .b = 107 },
        { .r = 195, .g = 232, .b = 141 },
        { .r = 137, .g = 221, .b = 255 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 199, .g = 146, .b = 234 },
        { .r = 255, .g = 83, .b = 112 }
    }
};

#endif  /* BASE16_material_darker_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
