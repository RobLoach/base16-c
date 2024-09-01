/**
 * Base16 Precious Light Warm 
 *
 * @author 4lex4 &lt;4lex49@zoho.com&gt;
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

#ifndef BASE16_precious_light_warm_H__
#define BASE16_precious_light_warm_H__

/**
 * The Base16 Precious Light Warm scheme.
 *
 * By: 4lex4 &lt;4lex49@zoho.com&gt;
 */
extern const base16_scheme base16_precious_light_warm;

#endif  /* BASE16_precious_light_warm_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_precious_light_warm_IMPLEMENTATION_ONCE
#define BASE16_precious_light_warm_IMPLEMENTATION_ONCE

const base16_scheme base16_precious_light_warm = {
    .name = "Precious Light Warm",
    .base = {
        { .r = 255, .g = 245, .b = 229 },
        { .r = 236, .g = 228, .b = 214 },
        { .r = 217, .g = 211, .b = 200 },
        { .r = 127, .g = 128, .b = 128 },
        { .r = 93, .g = 96, .b = 101 },
        { .r = 78, .g = 83, .b = 89 },
        { .r = 78, .g = 83, .b = 89 },
        { .r = 78, .g = 83, .b = 89 },
        { .r = 177, .g = 71, .b = 69 },
        { .r = 162, .g = 86, .b = 0 },
        { .r = 135, .g = 101, .b = 0 },
        { .r = 85, .g = 115, .b = 0 },
        { .r = 14, .g = 119, .b = 103 },
        { .r = 36, .g = 109, .b = 165 },
        { .r = 122, .g = 80, .b = 198 },
        { .r = 168, .g = 63, .b = 146 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 245, .b = 229 },
        { .r = 255, .g = 245, .b = 229 },
        { .r = 177, .g = 71, .b = 69 },
        { .r = 135, .g = 101, .b = 0 },
        { .r = 85, .g = 115, .b = 0 },
        { .r = 14, .g = 119, .b = 103 },
        { .r = 36, .g = 109, .b = 165 },
        { .r = 122, .g = 80, .b = 198 }
    },
    .system = 16
};

#endif  /* BASE16_precious_light_warm_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
