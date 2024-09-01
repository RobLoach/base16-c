/**
 * Base16 Tokyodark 
 *
 * @author Jamy Golden (https://github.com/JamyGolden), Based on Tokyodark.nvim (https://github.com/tiagovla/tokyodark.nvim)
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

#ifndef BASE16_tokyodark_H__
#define BASE16_tokyodark_H__

/**
 * The Base16 Tokyodark scheme.
 *
 * By: Jamy Golden (https://github.com/JamyGolden), Based on Tokyodark.nvim (https://github.com/tiagovla/tokyodark.nvim)
 */
extern const base16_scheme base16_tokyodark;

#endif  /* BASE16_tokyodark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tokyodark_IMPLEMENTATION_ONCE
#define BASE16_tokyodark_IMPLEMENTATION_ONCE

const base16_scheme base16_tokyodark = {
    .name = "Tokyodark",
    .base = {
        { .r = 17, .g = 18, .b = 29 },
        { .r = 33, .g = 34, .b = 52 },
        { .r = 33, .g = 34, .b = 52 },
        { .r = 53, .g = 57, .b = 69 },
        { .r = 74, .g = 80, .b = 87 },
        { .r = 160, .g = 168, .b = 205 },
        { .r = 171, .g = 178, .b = 191 },
        { .r = 188, .g = 194, .b = 220 },
        { .r = 238, .g = 109, .b = 133 },
        { .r = 246, .g = 149, .b = 91 },
        { .r = 215, .g = 166, .b = 95 },
        { .r = 149, .g = 197, .b = 97 },
        { .r = 159, .g = 187, .b = 243 },
        { .r = 113, .g = 153, .b = 238 },
        { .r = 164, .g = 133, .b = 221 },
        { .r = 119, .g = 52, .b = 64 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 17, .g = 18, .b = 29 },
        { .r = 17, .g = 18, .b = 29 },
        { .r = 238, .g = 109, .b = 133 },
        { .r = 215, .g = 166, .b = 95 },
        { .r = 149, .g = 197, .b = 97 },
        { .r = 159, .g = 187, .b = 243 },
        { .r = 113, .g = 153, .b = 238 },
        { .r = 164, .g = 133, .b = 221 }
    },
    .system = 16
};

#endif  /* BASE16_tokyodark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
