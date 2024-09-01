/**
 * Base16 Primer Dark Dimmed 
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

#ifndef BASE16_primer_dark_dimmed_H__
#define BASE16_primer_dark_dimmed_H__

/**
 * The Base16 Primer Dark Dimmed scheme.
 *
 * By: Jimmy Lin
 */
extern const base16_scheme base16_primer_dark_dimmed;

#endif  /* BASE16_primer_dark_dimmed_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_primer_dark_dimmed_IMPLEMENTATION_ONCE
#define BASE16_primer_dark_dimmed_IMPLEMENTATION_ONCE

const base16_scheme base16_primer_dark_dimmed = {
    .name = "Primer Dark Dimmed",
    .base = {
        { .r = 28, .g = 33, .b = 40 },
        { .r = 55, .g = 62, .b = 71 },
        { .r = 68, .g = 76, .b = 86 },
        { .r = 84, .g = 93, .b = 104 },
        { .r = 118, .g = 131, .b = 144 },
        { .r = 144, .g = 157, .b = 171 },
        { .r = 173, .g = 186, .b = 199 },
        { .r = 205, .g = 217, .b = 229 },
        { .r = 244, .g = 112, .b = 103 },
        { .r = 224, .g = 130, .b = 61 },
        { .r = 198, .g = 144, .b = 38 },
        { .r = 87, .g = 171, .b = 90 },
        { .r = 150, .g = 208, .b = 255 },
        { .r = 83, .g = 155, .b = 245 },
        { .r = 226, .g = 117, .b = 173 },
        { .r = 174, .g = 86, .b = 34 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 28, .g = 33, .b = 40 },
        { .r = 28, .g = 33, .b = 40 },
        { .r = 244, .g = 112, .b = 103 },
        { .r = 198, .g = 144, .b = 38 },
        { .r = 87, .g = 171, .b = 90 },
        { .r = 150, .g = 208, .b = 255 },
        { .r = 83, .g = 155, .b = 245 },
        { .r = 226, .g = 117, .b = 173 }
    },
    .system = 16
};

#endif  /* BASE16_primer_dark_dimmed_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
