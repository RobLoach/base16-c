/**
 * Base16 Material Vivid 
 * 
 * @author joshyrobot
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

#ifndef BASE16_material_vivid_H__
#define BASE16_material_vivid_H__

/**
 * The Base16 Material Vivid scheme.
 * 
 * By: joshyrobot
 */
extern const base16_scheme base16_material_vivid;

#endif  /* BASE16_material_vivid_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_material_vivid_IMPLEMENTATION_ONCE
#define BASE16_material_vivid_IMPLEMENTATION_ONCE

const base16_scheme base16_material_vivid = {
    .name = "Material Vivid",
    .base = {
        { .r = 32, .g = 33, .b = 36 },
        { .r = 39, .g = 41, .b = 44 },
        { .r = 50, .g = 54, .b = 57 },
        { .r = 68, .g = 70, .b = 77 },
        { .r = 103, .g = 108, .b = 113 },
        { .r = 128, .g = 134, .b = 139 },
        { .r = 158, .g = 158, .b = 158 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 244, .g = 67, .b = 54 },
        { .r = 255, .g = 152, .b = 0 },
        { .r = 255, .g = 235, .b = 59 },
        { .r = 0, .g = 230, .b = 118 },
        { .r = 0, .g = 188, .b = 212 },
        { .r = 33, .g = 150, .b = 243 },
        { .r = 103, .g = 58, .b = 183 },
        { .r = 141, .g = 110, .b = 99 }
    }
};

#endif  /* BASE16_material_vivid_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
