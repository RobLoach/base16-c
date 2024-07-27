/**
 * Base16 Catppuccin Mocha 
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

#ifndef BASE16_catppuccin_mocha_H__
#define BASE16_catppuccin_mocha_H__

/**
 * The Base16 Catppuccin Mocha scheme.
 * 
 * By: https://github.com/catppuccin/catppuccin
 */
extern const base16_scheme base16_catppuccin_mocha;

#endif  /* BASE16_catppuccin_mocha_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_catppuccin_mocha_IMPLEMENTATION_ONCE
#define BASE16_catppuccin_mocha_IMPLEMENTATION_ONCE

const base16_scheme base16_catppuccin_mocha = {
    .name = "Catppuccin Mocha",
    .base = {
        { .r = 30, .g = 30, .b = 46 },
        { .r = 24, .g = 24, .b = 37 },
        { .r = 49, .g = 50, .b = 68 },
        { .r = 69, .g = 71, .b = 90 },
        { .r = 88, .g = 91, .b = 112 },
        { .r = 205, .g = 214, .b = 244 },
        { .r = 245, .g = 224, .b = 220 },
        { .r = 180, .g = 190, .b = 254 },
        { .r = 243, .g = 139, .b = 168 },
        { .r = 250, .g = 179, .b = 135 },
        { .r = 249, .g = 226, .b = 175 },
        { .r = 166, .g = 227, .b = 161 },
        { .r = 148, .g = 226, .b = 213 },
        { .r = 137, .g = 180, .b = 250 },
        { .r = 203, .g = 166, .b = 247 },
        { .r = 242, .g = 205, .b = 205 }
    }
};

#endif  /* BASE16_catppuccin_mocha_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
