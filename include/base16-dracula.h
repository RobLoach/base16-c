/**
 * Base16 Dracula 
 *
 * @author Jamy Golden (http://github.com/JamyGolden), based on Dracula Theme (http://github.com/dracula)
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

#ifndef BASE16_dracula_H__
#define BASE16_dracula_H__

/**
 * The Base16 Dracula scheme.
 *
 * By: Jamy Golden (http://github.com/JamyGolden), based on Dracula Theme (http://github.com/dracula)
 */
extern const base16_scheme base16_dracula;

#endif  /* BASE16_dracula_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_dracula_IMPLEMENTATION_ONCE
#define BASE16_dracula_IMPLEMENTATION_ONCE

const base16_scheme base16_dracula = {
    .name = "Dracula",
    .base = {
        { .r = 40, .g = 42, .b = 54 },
        { .r = 54, .g = 52, .b = 71 },
        { .r = 68, .g = 71, .b = 90 },
        { .r = 98, .g = 114, .b = 164 },
        { .r = 158, .g = 168, .b = 199 },
        { .r = 248, .g = 248, .b = 242 },
        { .r = 240, .g = 241, .b = 244 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 85, .b = 85 },
        { .r = 255, .g = 184, .b = 108 },
        { .r = 241, .g = 250, .b = 140 },
        { .r = 80, .g = 250, .b = 123 },
        { .r = 139, .g = 233, .b = 253 },
        { .r = 128, .g = 191, .b = 255 },
        { .r = 255, .g = 121, .b = 198 },
        { .r = 189, .g = 147, .b = 249 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 40, .g = 42, .b = 54 },
        { .r = 40, .g = 42, .b = 54 },
        { .r = 255, .g = 85, .b = 85 },
        { .r = 241, .g = 250, .b = 140 },
        { .r = 80, .g = 250, .b = 123 },
        { .r = 139, .g = 233, .b = 253 },
        { .r = 128, .g = 191, .b = 255 },
        { .r = 255, .g = 121, .b = 198 }
    },
    .system = 16
};

#endif  /* BASE16_dracula_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
