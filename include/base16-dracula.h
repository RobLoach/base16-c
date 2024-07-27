/**
 * Base16 Dracula 
 * 
 * @author Mike Barkmin (http://github.com/mikebarkmin) based on Dracula Theme (http://github.com/dracula)
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

#ifndef BASE16_dracula_H__
#define BASE16_dracula_H__

/**
 * The Base16 Dracula scheme.
 * 
 * By: Mike Barkmin (http://github.com/mikebarkmin) based on Dracula Theme (http://github.com/dracula)
 */
extern const base16_scheme base16_dracula;

#endif  /* BASE16_dracula_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_dracula_IMPLEMENTATION_ONCE
#define BASE16_dracula_IMPLEMENTATION_ONCE

const base16_scheme base16_dracula = {
    .name = "Dracula",
    .base = {
        { .r = 40, .g = 41, .b = 54 },
        { .r = 58, .g = 60, .b = 78 },
        { .r = 77, .g = 79, .b = 104 },
        { .r = 98, .g = 100, .b = 131 },
        { .r = 98, .g = 214, .b = 232 },
        { .r = 233, .g = 233, .b = 244 },
        { .r = 241, .g = 242, .b = 248 },
        { .r = 247, .g = 247, .b = 251 },
        { .r = 234, .g = 81, .b = 178 },
        { .r = 180, .g = 91, .b = 207 },
        { .r = 0, .g = 247, .b = 105 },
        { .r = 235, .g = 255, .b = 135 },
        { .r = 161, .g = 239, .b = 228 },
        { .r = 98, .g = 214, .b = 232 },
        { .r = 180, .g = 91, .b = 207 },
        { .r = 0, .g = 247, .b = 105 }
    }
};

#endif  /* BASE16_dracula_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
