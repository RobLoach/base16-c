/**
 * Base16 Humanoid light 
 * 
 * @author Thomas (tasmo) Friese
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

#ifndef BASE16_humanoid_light_H__
#define BASE16_humanoid_light_H__

/**
 * The Base16 Humanoid light scheme.
 * 
 * By: Thomas (tasmo) Friese
 */
extern const base16_scheme base16_humanoid_light;

#endif  /* BASE16_humanoid_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_humanoid_light_IMPLEMENTATION_ONCE
#define BASE16_humanoid_light_IMPLEMENTATION_ONCE

const base16_scheme base16_humanoid_light = {
    .name = "Humanoid light",
    .base = {
        { .r = 248, .g = 248, .b = 242 },
        { .r = 239, .g = 239, .b = 233 },
        { .r = 222, .g = 222, .b = 216 },
        { .r = 192, .g = 192, .b = 189 },
        { .r = 96, .g = 97, .b = 93 },
        { .r = 35, .g = 38, .b = 41 },
        { .r = 47, .g = 51, .b = 55 },
        { .r = 7, .g = 7, .b = 8 },
        { .r = 176, .g = 21, .b = 26 },
        { .r = 255, .g = 61, .b = 0 },
        { .r = 255, .g = 182, .b = 39 },
        { .r = 56, .g = 142, .b = 60 },
        { .r = 0, .g = 142, .b = 142 },
        { .r = 0, .g = 130, .b = 201 },
        { .r = 112, .g = 15, .b = 152 },
        { .r = 178, .g = 119, .b = 1 }
    }
};

#endif  /* BASE16_humanoid_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
