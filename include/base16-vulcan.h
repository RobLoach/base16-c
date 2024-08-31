/**
 * Base16 vulcan 
 *
 * @author Andrey Varfolomeev
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

#ifndef BASE16_vulcan_H__
#define BASE16_vulcan_H__

/**
 * The Base16 vulcan scheme.
 *
 * By: Andrey Varfolomeev
 */
extern const base16_scheme base16_vulcan;

#endif  /* BASE16_vulcan_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_vulcan_IMPLEMENTATION_ONCE
#define BASE16_vulcan_IMPLEMENTATION_ONCE

const base16_scheme base16_vulcan = {
    .name = "vulcan",
    .base = {
        { .r = 4, .g = 21, .b = 35 },
        { .r = 18, .g = 35, .b = 57 },
        { .r = 0, .g = 53, .b = 82 },
        { .r = 122, .g = 87, .b = 89 },
        { .r = 107, .g = 105, .b = 119 },
        { .r = 91, .g = 119, .b = 140 },
        { .r = 51, .g = 50, .b = 56 },
        { .r = 33, .g = 77, .b = 104 },
        { .r = 129, .g = 133, .b = 145 },
        { .r = 145, .g = 152, .b = 163 },
        { .r = 173, .g = 180, .b = 185 },
        { .r = 151, .g = 125, .b = 124 },
        { .r = 151, .g = 125, .b = 124 },
        { .r = 151, .g = 125, .b = 124 },
        { .r = 145, .g = 152, .b = 163 },
        { .r = 151, .g = 125, .b = 124 }
    }
};

#endif  /* BASE16_vulcan_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
