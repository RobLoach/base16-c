/**
 * Base16 Solar Flare 
 *
 * @author Chuck Harmston (https://chuck.harmston.ch)
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

#ifndef BASE16_solarflare_H__
#define BASE16_solarflare_H__

/**
 * The Base16 Solar Flare scheme.
 *
 * By: Chuck Harmston (https://chuck.harmston.ch)
 */
extern const base16_scheme base16_solarflare;

#endif  /* BASE16_solarflare_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_solarflare_IMPLEMENTATION_ONCE
#define BASE16_solarflare_IMPLEMENTATION_ONCE

const base16_scheme base16_solarflare = {
    .name = "Solar Flare",
    .base = {
        { .r = 24, .g = 38, .b = 47 },
        { .r = 34, .g = 46, .b = 56 },
        { .r = 88, .g = 104, .b = 117 },
        { .r = 102, .g = 117, .b = 129 },
        { .r = 133, .g = 147, .b = 158 },
        { .r = 166, .g = 175, .b = 184 },
        { .r = 232, .g = 233, .b = 237 },
        { .r = 245, .g = 247, .b = 250 },
        { .r = 239, .g = 82, .b = 83 },
        { .r = 230, .g = 107, .b = 43 },
        { .r = 228, .g = 181, .b = 28 },
        { .r = 124, .g = 200, .b = 68 },
        { .r = 82, .g = 203, .b = 176 },
        { .r = 51, .g = 181, .b = 225 },
        { .r = 163, .g = 99, .b = 213 },
        { .r = 215, .g = 60, .b = 154 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 24, .g = 38, .b = 47 },
        { .r = 24, .g = 38, .b = 47 },
        { .r = 239, .g = 82, .b = 83 },
        { .r = 228, .g = 181, .b = 28 },
        { .r = 124, .g = 200, .b = 68 },
        { .r = 82, .g = 203, .b = 176 },
        { .r = 51, .g = 181, .b = 225 },
        { .r = 163, .g = 99, .b = 213 }
    },
    .system = 16
};

#endif  /* BASE16_solarflare_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
