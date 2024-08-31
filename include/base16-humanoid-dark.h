/**
 * Base16 Humanoid dark 
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

#ifndef BASE16_humanoid_dark_H__
#define BASE16_humanoid_dark_H__

/**
 * The Base16 Humanoid dark scheme.
 *
 * By: Thomas (tasmo) Friese
 */
extern const base16_scheme base16_humanoid_dark;

#endif  /* BASE16_humanoid_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_humanoid_dark_IMPLEMENTATION_ONCE
#define BASE16_humanoid_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_humanoid_dark = {
    .name = "Humanoid dark",
    .base = {
        { .r = 35, .g = 38, .b = 41 },
        { .r = 51, .g = 59, .b = 61 },
        { .r = 72, .g = 78, .b = 84 },
        { .r = 96, .g = 97, .b = 93 },
        { .r = 192, .g = 192, .b = 189 },
        { .r = 248, .g = 248, .b = 242 },
        { .r = 252, .g = 252, .b = 246 },
        { .r = 252, .g = 252, .b = 252 },
        { .r = 241, .g = 18, .b = 53 },
        { .r = 255, .g = 149, .b = 5 },
        { .r = 255, .g = 182, .b = 39 },
        { .r = 2, .g = 216, .b = 73 },
        { .r = 13, .g = 217, .b = 214 },
        { .r = 0, .g = 166, .b = 251 },
        { .r = 241, .g = 94, .b = 227 },
        { .r = 178, .g = 119, .b = 1 }
    }
};

#endif  /* BASE16_humanoid_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
