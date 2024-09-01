/**
 * Base16 Ashes 
 *
 * @author Jannik Siebert (https://github.com/janniks)
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

#ifndef BASE16_ashes_H__
#define BASE16_ashes_H__

/**
 * The Base16 Ashes scheme.
 *
 * By: Jannik Siebert (https://github.com/janniks)
 */
extern const base16_scheme base16_ashes;

#endif  /* BASE16_ashes_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_ashes_IMPLEMENTATION_ONCE
#define BASE16_ashes_IMPLEMENTATION_ONCE

const base16_scheme base16_ashes = {
    .name = "Ashes",
    .base = {
        { .r = 28, .g = 32, .b = 35 },
        { .r = 57, .g = 63, .b = 69 },
        { .r = 86, .g = 94, .b = 101 },
        { .r = 116, .g = 124, .b = 132 },
        { .r = 173, .g = 179, .b = 186 },
        { .r = 199, .g = 204, .b = 209 },
        { .r = 223, .g = 226, .b = 229 },
        { .r = 243, .g = 244, .b = 245 },
        { .r = 199, .g = 174, .b = 149 },
        { .r = 199, .g = 199, .b = 149 },
        { .r = 174, .g = 199, .b = 149 },
        { .r = 149, .g = 199, .b = 174 },
        { .r = 149, .g = 174, .b = 199 },
        { .r = 174, .g = 149, .b = 199 },
        { .r = 199, .g = 149, .b = 174 },
        { .r = 199, .g = 149, .b = 149 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 28, .g = 32, .b = 35 },
        { .r = 28, .g = 32, .b = 35 },
        { .r = 199, .g = 174, .b = 149 },
        { .r = 174, .g = 199, .b = 149 },
        { .r = 149, .g = 199, .b = 174 },
        { .r = 149, .g = 174, .b = 199 },
        { .r = 174, .g = 149, .b = 199 },
        { .r = 199, .g = 149, .b = 174 }
    },
    .system = 16
};

#endif  /* BASE16_ashes_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
