/**
 * Base16 Materia 
 * 
 * @author Defman21
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

#ifndef BASE16_materia_H__
#define BASE16_materia_H__

/**
 * The Base16 Materia scheme.
 * 
 * By: Defman21
 */
extern const base16_scheme base16_materia;

#endif  /* BASE16_materia_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_materia_IMPLEMENTATION_ONCE
#define BASE16_materia_IMPLEMENTATION_ONCE

const base16_scheme base16_materia = {
    .name = "Materia",
    .base = {
        { .r = 38, .g = 50, .b = 56 },
        { .r = 44, .g = 57, .b = 63 },
        { .r = 55, .g = 71, .b = 79 },
        { .r = 112, .g = 120, .b = 128 },
        { .r = 201, .g = 204, .b = 211 },
        { .r = 205, .g = 211, .b = 222 },
        { .r = 213, .g = 219, .b = 229 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 236, .g = 95, .b = 103 },
        { .r = 234, .g = 149, .b = 96 },
        { .r = 255, .g = 204, .b = 0 },
        { .r = 139, .g = 214, .b = 73 },
        { .r = 128, .g = 203, .b = 196 },
        { .r = 137, .g = 221, .b = 255 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 236, .g = 95, .b = 103 }
    }
};

#endif  /* BASE16_materia_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
