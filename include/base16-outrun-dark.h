/**
 * Base16 Outrun Dark 
 * 
 * @author Hugo Delahousse (http://github.com/hugodelahousse/)
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

#ifndef BASE16_outrun_dark_H__
#define BASE16_outrun_dark_H__

/**
 * The Base16 Outrun Dark scheme.
 * 
 * By: Hugo Delahousse (http://github.com/hugodelahousse/)
 */
extern const base16_scheme base16_outrun_dark;

#endif  /* BASE16_outrun_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_outrun_dark_IMPLEMENTATION_ONCE
#define BASE16_outrun_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_outrun_dark = {
    .name = "Outrun Dark",
    .base = {
        { .r = 0, .g = 0, .b = 42 },
        { .r = 32, .g = 32, .b = 74 },
        { .r = 48, .g = 48, .b = 90 },
        { .r = 80, .g = 80, .b = 122 },
        { .r = 176, .g = 176, .b = 218 },
        { .r = 208, .g = 208, .b = 250 },
        { .r = 224, .g = 224, .b = 255 },
        { .r = 245, .g = 245, .b = 255 },
        { .r = 255, .g = 66, .b = 66 },
        { .r = 252, .g = 141, .b = 40 },
        { .r = 243, .g = 232, .b = 119 },
        { .r = 89, .g = 241, .b = 118 },
        { .r = 14, .g = 240, .b = 240 },
        { .r = 102, .g = 176, .b = 255 },
        { .r = 241, .g = 5, .b = 150 },
        { .r = 240, .g = 3, .b = 239 }
    }
};

#endif  /* BASE16_outrun_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
