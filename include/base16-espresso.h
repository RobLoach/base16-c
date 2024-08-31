/**
 * Base16 Espresso 
 *
 * @author Unknown. Maintained by Alex Mirrington (https://github.com/alexmirrington)
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

#ifndef BASE16_espresso_H__
#define BASE16_espresso_H__

/**
 * The Base16 Espresso scheme.
 *
 * By: Unknown. Maintained by Alex Mirrington (https://github.com/alexmirrington)
 */
extern const base16_scheme base16_espresso;

#endif  /* BASE16_espresso_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_espresso_IMPLEMENTATION_ONCE
#define BASE16_espresso_IMPLEMENTATION_ONCE

const base16_scheme base16_espresso = {
    .name = "Espresso",
    .base = {
        { .r = 45, .g = 45, .b = 45 },
        { .r = 57, .g = 57, .b = 57 },
        { .r = 81, .g = 81, .b = 81 },
        { .r = 119, .g = 119, .b = 119 },
        { .r = 180, .g = 183, .b = 180 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 210, .g = 82, .b = 82 },
        { .r = 249, .g = 169, .b = 89 },
        { .r = 255, .g = 198, .b = 109 },
        { .r = 165, .g = 194, .b = 97 },
        { .r = 190, .g = 214, .b = 255 },
        { .r = 108, .g = 153, .b = 187 },
        { .r = 209, .g = 151, .b = 217 },
        { .r = 249, .g = 115, .b = 148 }
    }
};

#endif  /* BASE16_espresso_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
