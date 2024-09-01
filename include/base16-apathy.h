/**
 * Base16 Apathy 
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

#ifndef BASE16_apathy_H__
#define BASE16_apathy_H__

/**
 * The Base16 Apathy scheme.
 *
 * By: Jannik Siebert (https://github.com/janniks)
 */
extern const base16_scheme base16_apathy;

#endif  /* BASE16_apathy_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_apathy_IMPLEMENTATION_ONCE
#define BASE16_apathy_IMPLEMENTATION_ONCE

const base16_scheme base16_apathy = {
    .name = "Apathy",
    .base = {
        { .r = 3, .g = 26, .b = 22 },
        { .r = 11, .g = 52, .b = 45 },
        { .r = 24, .g = 78, .b = 69 },
        { .r = 43, .g = 104, .b = 94 },
        { .r = 95, .g = 156, .b = 146 },
        { .r = 129, .g = 181, .b = 172 },
        { .r = 167, .g = 206, .b = 200 },
        { .r = 210, .g = 231, .b = 228 },
        { .r = 62, .g = 150, .b = 136 },
        { .r = 62, .g = 121, .b = 150 },
        { .r = 62, .g = 76, .b = 150 },
        { .r = 136, .g = 62, .b = 150 },
        { .r = 150, .g = 62, .b = 76 },
        { .r = 150, .g = 136, .b = 62 },
        { .r = 76, .g = 150, .b = 62 },
        { .r = 62, .g = 150, .b = 91 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 3, .g = 26, .b = 22 },
        { .r = 3, .g = 26, .b = 22 },
        { .r = 62, .g = 150, .b = 136 },
        { .r = 62, .g = 76, .b = 150 },
        { .r = 136, .g = 62, .b = 150 },
        { .r = 150, .g = 62, .b = 76 },
        { .r = 150, .g = 136, .b = 62 },
        { .r = 76, .g = 150, .b = 62 }
    },
    .system = 16
};

#endif  /* BASE16_apathy_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
