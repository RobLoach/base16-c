/**
 * Base16 Ayu Light 
 *
 * @author Khue Nguyen &lt;Z5483Y@gmail.com&gt;
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

#ifndef BASE16_ayu_light_H__
#define BASE16_ayu_light_H__

/**
 * The Base16 Ayu Light scheme.
 *
 * By: Khue Nguyen &lt;Z5483Y@gmail.com&gt;
 */
extern const base16_scheme base16_ayu_light;

#endif  /* BASE16_ayu_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_ayu_light_IMPLEMENTATION_ONCE
#define BASE16_ayu_light_IMPLEMENTATION_ONCE

const base16_scheme base16_ayu_light = {
    .name = "Ayu Light",
    .base = {
        { .r = 250, .g = 250, .b = 250 },
        { .r = 243, .g = 244, .b = 245 },
        { .r = 248, .g = 249, .b = 250 },
        { .r = 171, .g = 176, .b = 182 },
        { .r = 130, .g = 140, .b = 153 },
        { .r = 92, .g = 103, .b = 115 },
        { .r = 36, .g = 41, .b = 54 },
        { .r = 26, .g = 31, .b = 41 },
        { .r = 240, .g = 113, .b = 120 },
        { .r = 250, .g = 141, .b = 62 },
        { .r = 242, .g = 174, .b = 73 },
        { .r = 134, .g = 179, .b = 0 },
        { .r = 76, .g = 191, .b = 153 },
        { .r = 54, .g = 163, .b = 217 },
        { .r = 163, .g = 122, .b = 204 },
        { .r = 230, .g = 186, .b = 126 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 250, .g = 250, .b = 250 },
        { .r = 250, .g = 250, .b = 250 },
        { .r = 240, .g = 113, .b = 120 },
        { .r = 242, .g = 174, .b = 73 },
        { .r = 134, .g = 179, .b = 0 },
        { .r = 76, .g = 191, .b = 153 },
        { .r = 54, .g = 163, .b = 217 },
        { .r = 163, .g = 122, .b = 204 }
    },
    .system = 16
};

#endif  /* BASE16_ayu_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
