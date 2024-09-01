/**
 * Base16 tender 
 *
 * @author Jacobo Tabernero (https://github/com/jacoborus/tender.vim)
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

#ifndef BASE16_tender_H__
#define BASE16_tender_H__

/**
 * The Base16 tender scheme.
 *
 * By: Jacobo Tabernero (https://github/com/jacoborus/tender.vim)
 */
extern const base16_scheme base16_tender;

#endif  /* BASE16_tender_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tender_IMPLEMENTATION_ONCE
#define BASE16_tender_IMPLEMENTATION_ONCE

const base16_scheme base16_tender = {
    .name = "tender",
    .base = {
        { .r = 40, .g = 40, .b = 40 },
        { .r = 56, .g = 56, .b = 56 },
        { .r = 72, .g = 72, .b = 72 },
        { .r = 76, .g = 76, .b = 76 },
        { .r = 184, .g = 184, .b = 184 },
        { .r = 238, .g = 238, .b = 238 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 254, .g = 255, .b = 255 },
        { .r = 244, .g = 55, .b = 83 },
        { .r = 220, .g = 150, .b = 86 },
        { .r = 255, .g = 194, .b = 75 },
        { .r = 201, .g = 208, .b = 92 },
        { .r = 115, .g = 206, .b = 244 },
        { .r = 179, .g = 222, .b = 239 },
        { .r = 211, .g = 185, .b = 135 },
        { .r = 161, .g = 105, .b = 70 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 40, .g = 40, .b = 40 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 244, .g = 55, .b = 83 },
        { .r = 255, .g = 194, .b = 75 },
        { .r = 201, .g = 208, .b = 92 },
        { .r = 115, .g = 206, .b = 244 },
        { .r = 179, .g = 222, .b = 239 },
        { .r = 211, .g = 185, .b = 135 }
    },
    .system = 16
};

#endif  /* BASE16_tender_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
