/**
 * Base16 Catppuccin Macchiato 
 *
 * @author https://github.com/catppuccin/catppuccin
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

#ifndef BASE16_catppuccin_macchiato_H__
#define BASE16_catppuccin_macchiato_H__

/**
 * The Base16 Catppuccin Macchiato scheme.
 *
 * By: https://github.com/catppuccin/catppuccin
 */
extern const base16_scheme base16_catppuccin_macchiato;

#endif  /* BASE16_catppuccin_macchiato_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_catppuccin_macchiato_IMPLEMENTATION_ONCE
#define BASE16_catppuccin_macchiato_IMPLEMENTATION_ONCE

const base16_scheme base16_catppuccin_macchiato = {
    .name = "Catppuccin Macchiato",
    .base = {
        { .r = 36, .g = 39, .b = 58 },
        { .r = 30, .g = 32, .b = 48 },
        { .r = 54, .g = 58, .b = 79 },
        { .r = 73, .g = 77, .b = 100 },
        { .r = 91, .g = 96, .b = 120 },
        { .r = 202, .g = 211, .b = 245 },
        { .r = 244, .g = 219, .b = 214 },
        { .r = 183, .g = 189, .b = 248 },
        { .r = 237, .g = 135, .b = 150 },
        { .r = 245, .g = 169, .b = 127 },
        { .r = 238, .g = 212, .b = 159 },
        { .r = 166, .g = 218, .b = 149 },
        { .r = 139, .g = 213, .b = 202 },
        { .r = 138, .g = 173, .b = 244 },
        { .r = 198, .g = 160, .b = 246 },
        { .r = 240, .g = 198, .b = 198 }
    }
};

#endif  /* BASE16_catppuccin_macchiato_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
