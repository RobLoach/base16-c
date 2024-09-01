/**
 * Base16 Moonlight 
 *
 * @author Jeremy Swinarton (https://github.com/jswinarton)
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

#ifndef BASE16_moonlight_H__
#define BASE16_moonlight_H__

/**
 * The Base16 Moonlight scheme.
 *
 * By: Jeremy Swinarton (https://github.com/jswinarton)
 */
extern const base16_scheme base16_moonlight;

#endif  /* BASE16_moonlight_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_moonlight_IMPLEMENTATION_ONCE
#define BASE16_moonlight_IMPLEMENTATION_ONCE

const base16_scheme base16_moonlight = {
    .name = "Moonlight",
    .base = {
        { .r = 33, .g = 35, .b = 55 },
        { .r = 64, .g = 60, .b = 100 },
        { .r = 89, .g = 99, .b = 153 },
        { .r = 116, .g = 140, .b = 214 },
        { .r = 161, .g = 171, .b = 224 },
        { .r = 163, .g = 172, .b = 225 },
        { .r = 180, .g = 164, .b = 244 },
        { .r = 239, .g = 67, .b = 250 },
        { .r = 255, .g = 83, .b = 112 },
        { .r = 246, .g = 127, .b = 129 },
        { .r = 255, .g = 199, .b = 119 },
        { .r = 45, .g = 244, .b = 192 },
        { .r = 4, .g = 209, .b = 249 },
        { .r = 64, .g = 255, .b = 255 },
        { .r = 185, .g = 148, .b = 241 },
        { .r = 236, .g = 178, .b = 240 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 33, .g = 35, .b = 55 },
        { .r = 33, .g = 35, .b = 55 },
        { .r = 255, .g = 83, .b = 112 },
        { .r = 255, .g = 199, .b = 119 },
        { .r = 45, .g = 244, .b = 192 },
        { .r = 4, .g = 209, .b = 249 },
        { .r = 64, .g = 255, .b = 255 },
        { .r = 185, .g = 148, .b = 241 }
    },
    .system = 16
};

#endif  /* BASE16_moonlight_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
