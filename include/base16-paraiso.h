/**
 * Base16 Paraiso 
 *
 * @author Jan T. Sott
 *
 * Template by Rob Loach (https://robloach.net)
 * base16-h: https://github.com/robloach/base16-h
 */

#ifndef BASE16_COLOR_H__
#define BASE16_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct base16_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} base16_color;

#endif /* BASE16_COLOR_H__ */

#ifndef BASE16_SCHEME_H__
#define BASE16_SCHEME_H__

/**
 * A Base16 Scheme.
 */
typedef struct base16_scheme {
    const char *name; /** The name of the scheme. */
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    int system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_paraiso_H__
#define BASE16_paraiso_H__

/**
 * The Base16 Paraiso scheme.
 *
 * By: Jan T. Sott
 */
extern const base16_scheme base16_paraiso;

#endif  /* BASE16_paraiso_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_paraiso_IMPLEMENTATION_ONCE
#define BASE16_paraiso_IMPLEMENTATION_ONCE

const base16_scheme base16_paraiso = {
    .name = "Paraiso",
    .base = {
        { .r = 47, .g = 30, .b = 46 },
        { .r = 65, .g = 50, .b = 63 },
        { .r = 79, .g = 66, .b = 76 },
        { .r = 119, .g = 110, .b = 113 },
        { .r = 141, .g = 134, .b = 135 },
        { .r = 163, .g = 158, .b = 155 },
        { .r = 185, .g = 182, .b = 176 },
        { .r = 231, .g = 233, .b = 219 },
        { .r = 239, .g = 97, .b = 85 },
        { .r = 249, .g = 155, .b = 21 },
        { .r = 254, .g = 196, .b = 24 },
        { .r = 72, .g = 182, .b = 133 },
        { .r = 91, .g = 196, .b = 191 },
        { .r = 6, .g = 182, .b = 239 },
        { .r = 129, .g = 91, .b = 164 },
        { .r = 233, .g = 107, .b = 168 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 47, .g = 30, .b = 46 },
        { .r = 47, .g = 30, .b = 46 },
        { .r = 239, .g = 97, .b = 85 },
        { .r = 254, .g = 196, .b = 24 },
        { .r = 72, .g = 182, .b = 133 },
        { .r = 91, .g = 196, .b = 191 },
        { .r = 6, .g = 182, .b = 239 },
        { .r = 129, .g = 91, .b = 164 }
    },
    .system = 16
};

#endif  /* BASE16_paraiso_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
