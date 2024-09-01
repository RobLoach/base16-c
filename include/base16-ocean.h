/**
 * Base16 Ocean 
 *
 * @author Chris Kempson (http://chriskempson.com)
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

#ifndef BASE16_ocean_H__
#define BASE16_ocean_H__

/**
 * The Base16 Ocean scheme.
 *
 * By: Chris Kempson (http://chriskempson.com)
 */
extern const base16_scheme base16_ocean;

#endif  /* BASE16_ocean_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_ocean_IMPLEMENTATION_ONCE
#define BASE16_ocean_IMPLEMENTATION_ONCE

const base16_scheme base16_ocean = {
    .name = "Ocean",
    .base = {
        { .r = 43, .g = 48, .b = 59 },
        { .r = 52, .g = 61, .b = 70 },
        { .r = 79, .g = 91, .b = 102 },
        { .r = 101, .g = 115, .b = 126 },
        { .r = 167, .g = 173, .b = 186 },
        { .r = 192, .g = 197, .b = 206 },
        { .r = 223, .g = 225, .b = 232 },
        { .r = 239, .g = 241, .b = 245 },
        { .r = 191, .g = 97, .b = 106 },
        { .r = 208, .g = 135, .b = 112 },
        { .r = 235, .g = 203, .b = 139 },
        { .r = 163, .g = 190, .b = 140 },
        { .r = 150, .g = 181, .b = 180 },
        { .r = 143, .g = 161, .b = 179 },
        { .r = 180, .g = 142, .b = 173 },
        { .r = 171, .g = 121, .b = 103 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 43, .g = 48, .b = 59 },
        { .r = 43, .g = 48, .b = 59 },
        { .r = 191, .g = 97, .b = 106 },
        { .r = 235, .g = 203, .b = 139 },
        { .r = 163, .g = 190, .b = 140 },
        { .r = 150, .g = 181, .b = 180 },
        { .r = 143, .g = 161, .b = 179 },
        { .r = 180, .g = 142, .b = 173 }
    },
    .system = 16
};

#endif  /* BASE16_ocean_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
