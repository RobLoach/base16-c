/**
 * Base16 Bespin 
 * 
 * @author Jan T. Sott
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

#ifndef BASE16_bespin_H__
#define BASE16_bespin_H__

/**
 * The Base16 Bespin scheme.
 * 
 * By: Jan T. Sott
 */
extern const base16_scheme base16_bespin;

#endif  /* BASE16_bespin_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_bespin_IMPLEMENTATION_ONCE
#define BASE16_bespin_IMPLEMENTATION_ONCE

const base16_scheme base16_bespin = {
    .name = "Bespin",
    .base = {
        { .r = 40, .g = 33, .b = 28 },
        { .r = 54, .g = 49, .b = 46 },
        { .r = 94, .g = 93, .b = 92 },
        { .r = 102, .g = 102, .b = 102 },
        { .r = 121, .g = 121, .b = 119 },
        { .r = 138, .g = 137, .b = 134 },
        { .r = 157, .g = 155, .b = 151 },
        { .r = 186, .g = 174, .b = 158 },
        { .r = 207, .g = 106, .b = 76 },
        { .r = 207, .g = 125, .b = 52 },
        { .r = 249, .g = 238, .b = 152 },
        { .r = 84, .g = 190, .b = 13 },
        { .r = 175, .g = 196, .b = 219 },
        { .r = 94, .g = 166, .b = 234 },
        { .r = 155, .g = 133, .b = 157 },
        { .r = 147, .g = 113, .b = 33 }
    }
};

#endif  /* BASE16_bespin_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
