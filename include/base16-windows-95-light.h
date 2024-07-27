/**
 * Base16 Windows 95 Light 
 * 
 * @author Fergus Collins (https://github.com/C-Fergus)
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

#ifndef BASE16_windows_95_light_H__
#define BASE16_windows_95_light_H__

/**
 * The Base16 Windows 95 Light scheme.
 * 
 * By: Fergus Collins (https://github.com/C-Fergus)
 */
extern const base16_scheme base16_windows_95_light;

#endif  /* BASE16_windows_95_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_windows_95_light_IMPLEMENTATION_ONCE
#define BASE16_windows_95_light_IMPLEMENTATION_ONCE

const base16_scheme base16_windows_95_light = {
    .name = "Windows 95 Light",
    .base = {
        { .r = 252, .g = 252, .b = 252 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 196, .g = 196, .b = 196 },
        { .r = 168, .g = 168, .b = 168 },
        { .r = 126, .g = 126, .b = 126 },
        { .r = 84, .g = 84, .b = 84 },
        { .r = 42, .g = 42, .b = 42 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 168, .g = 0, .b = 0 },
        { .r = 252, .g = 252, .b = 84 },
        { .r = 168, .g = 84, .b = 0 },
        { .r = 0, .g = 168, .b = 0 },
        { .r = 0, .g = 168, .b = 168 },
        { .r = 0, .g = 0, .b = 168 },
        { .r = 168, .g = 0, .b = 168 },
        { .r = 84, .g = 252, .b = 84 }
    }
};

#endif  /* BASE16_windows_95_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
