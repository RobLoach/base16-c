/**
 * Base16 Atelier Sulphurpool 
 * 
 * @author Bram de Haan (http://atelierbramdehaan.nl)
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

#ifndef BASE16_atelier_sulphurpool_H__
#define BASE16_atelier_sulphurpool_H__

/**
 * The Base16 Atelier Sulphurpool scheme.
 * 
 * By: Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_sulphurpool;

#endif  /* BASE16_atelier_sulphurpool_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_sulphurpool_IMPLEMENTATION_ONCE
#define BASE16_atelier_sulphurpool_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_sulphurpool = {
    .name = "Atelier Sulphurpool",
    .base = {
        { .r = 32, .g = 39, .b = 70 },
        { .r = 41, .g = 50, .b = 86 },
        { .r = 94, .g = 102, .b = 135 },
        { .r = 107, .g = 115, .b = 148 },
        { .r = 137, .g = 142, .b = 164 },
        { .r = 151, .g = 157, .b = 180 },
        { .r = 223, .g = 226, .b = 241 },
        { .r = 245, .g = 247, .b = 255 },
        { .r = 201, .g = 73, .b = 34 },
        { .r = 199, .g = 107, .b = 41 },
        { .r = 192, .g = 139, .b = 48 },
        { .r = 172, .g = 151, .b = 57 },
        { .r = 34, .g = 162, .b = 201 },
        { .r = 61, .g = 143, .b = 209 },
        { .r = 102, .g = 121, .b = 204 },
        { .r = 156, .g = 99, .b = 122 }
    }
};

#endif  /* BASE16_atelier_sulphurpool_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
