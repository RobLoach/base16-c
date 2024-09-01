/**
 * Base16 Primer Light 
 *
 * @author Jimmy Lin
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

#ifndef BASE16_primer_light_H__
#define BASE16_primer_light_H__

/**
 * The Base16 Primer Light scheme.
 *
 * By: Jimmy Lin
 */
extern const base16_scheme base16_primer_light;

#endif  /* BASE16_primer_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_primer_light_IMPLEMENTATION_ONCE
#define BASE16_primer_light_IMPLEMENTATION_ONCE

const base16_scheme base16_primer_light = {
    .name = "Primer Light",
    .base = {
        { .r = 250, .g = 251, .b = 252 },
        { .r = 225, .g = 228, .b = 232 },
        { .r = 209, .g = 213, .b = 218 },
        { .r = 149, .g = 157, .b = 165 },
        { .r = 68, .g = 77, .b = 86 },
        { .r = 47, .g = 54, .b = 61 },
        { .r = 36, .g = 41, .b = 46 },
        { .r = 27, .g = 31, .b = 35 },
        { .r = 215, .g = 58, .b = 73 },
        { .r = 246, .g = 106, .b = 10 },
        { .r = 255, .g = 211, .b = 61 },
        { .r = 40, .g = 167, .b = 69 },
        { .r = 121, .g = 184, .b = 255 },
        { .r = 3, .g = 102, .b = 214 },
        { .r = 234, .g = 74, .b = 170 },
        { .r = 160, .g = 65, .b = 0 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 250, .g = 251, .b = 252 },
        { .r = 250, .g = 251, .b = 252 },
        { .r = 215, .g = 58, .b = 73 },
        { .r = 255, .g = 211, .b = 61 },
        { .r = 40, .g = 167, .b = 69 },
        { .r = 121, .g = 184, .b = 255 },
        { .r = 3, .g = 102, .b = 214 },
        { .r = 234, .g = 74, .b = 170 }
    },
    .system = 16
};

#endif  /* BASE16_primer_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
