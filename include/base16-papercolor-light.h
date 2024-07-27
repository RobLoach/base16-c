/**
 * Base16 PaperColor Light 
 * 
 * @author Jon Leopard (http://github.com/jonleopard) based on PaperColor Theme (https://github.com/NLKNguyen/papercolor-theme)
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

#ifndef BASE16_papercolor_light_H__
#define BASE16_papercolor_light_H__

/**
 * The Base16 PaperColor Light scheme.
 * 
 * By: Jon Leopard (http://github.com/jonleopard) based on PaperColor Theme (https://github.com/NLKNguyen/papercolor-theme)
 */
extern const base16_scheme base16_papercolor_light;

#endif  /* BASE16_papercolor_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_papercolor_light_IMPLEMENTATION_ONCE
#define BASE16_papercolor_light_IMPLEMENTATION_ONCE

const base16_scheme base16_papercolor_light = {
    .name = "PaperColor Light",
    .base = {
        { .r = 238, .g = 238, .b = 238 },
        { .r = 175, .g = 0, .b = 0 },
        { .r = 0, .g = 135, .b = 0 },
        { .r = 95, .g = 135, .b = 0 },
        { .r = 0, .g = 135, .b = 175 },
        { .r = 68, .g = 68, .b = 68 },
        { .r = 0, .g = 95, .b = 135 },
        { .r = 135, .g = 135, .b = 135 },
        { .r = 188, .g = 188, .b = 188 },
        { .r = 215, .g = 0, .b = 0 },
        { .r = 215, .g = 0, .b = 135 },
        { .r = 135, .g = 0, .b = 175 },
        { .r = 215, .g = 95, .b = 0 },
        { .r = 215, .g = 95, .b = 0 },
        { .r = 0, .g = 95, .b = 175 },
        { .r = 0, .g = 95, .b = 135 }
    }
};

#endif  /* BASE16_papercolor_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
