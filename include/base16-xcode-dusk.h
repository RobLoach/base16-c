/**
 * Base16 XCode Dusk 
 *
 * @author Elsa Gonsiorowski (https://github.com/gonsie)
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

#ifndef BASE16_xcode_dusk_H__
#define BASE16_xcode_dusk_H__

/**
 * The Base16 XCode Dusk scheme.
 *
 * By: Elsa Gonsiorowski (https://github.com/gonsie)
 */
extern const base16_scheme base16_xcode_dusk;

#endif  /* BASE16_xcode_dusk_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_xcode_dusk_IMPLEMENTATION_ONCE
#define BASE16_xcode_dusk_IMPLEMENTATION_ONCE

const base16_scheme base16_xcode_dusk = {
    .name = "XCode Dusk",
    .base = {
        { .r = 40, .g = 43, .b = 53 },
        { .r = 61, .g = 64, .b = 72 },
        { .r = 83, .g = 85, .b = 93 },
        { .r = 104, .g = 106, .b = 113 },
        { .r = 126, .g = 128, .b = 134 },
        { .r = 147, .g = 149, .b = 153 },
        { .r = 169, .g = 170, .b = 174 },
        { .r = 190, .g = 191, .b = 194 },
        { .r = 178, .g = 24, .b = 137 },
        { .r = 120, .g = 109, .b = 197 },
        { .r = 67, .g = 130, .b = 136 },
        { .r = 223, .g = 0, .b = 2 },
        { .r = 0, .g = 160, .b = 190 },
        { .r = 121, .g = 14, .b = 173 },
        { .r = 178, .g = 24, .b = 137 },
        { .r = 199, .g = 124, .b = 72 }
    }
};

#endif  /* BASE16_xcode_dusk_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
