/**
 * Base16 Tango 
 *
 * @author @Schnouki, based on the Tango Desktop Project
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

#ifndef BASE16_tango_H__
#define BASE16_tango_H__

/**
 * The Base16 Tango scheme.
 *
 * By: @Schnouki, based on the Tango Desktop Project
 */
extern const base16_scheme base16_tango;

#endif  /* BASE16_tango_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tango_IMPLEMENTATION_ONCE
#define BASE16_tango_IMPLEMENTATION_ONCE

const base16_scheme base16_tango = {
    .name = "Tango",
    .base = {
        { .r = 46, .g = 52, .b = 54 },
        { .r = 138, .g = 226, .b = 52 },
        { .r = 252, .g = 233, .b = 79 },
        { .r = 85, .g = 87, .b = 83 },
        { .r = 114, .g = 159, .b = 207 },
        { .r = 211, .g = 215, .b = 207 },
        { .r = 173, .g = 127, .b = 168 },
        { .r = 238, .g = 238, .b = 236 },
        { .r = 204, .g = 0, .b = 0 },
        { .r = 239, .g = 41, .b = 41 },
        { .r = 196, .g = 160, .b = 0 },
        { .r = 78, .g = 154, .b = 6 },
        { .r = 6, .g = 152, .b = 154 },
        { .r = 52, .g = 101, .b = 164 },
        { .r = 117, .g = 80, .b = 123 },
        { .r = 52, .g = 226, .b = 226 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 46, .g = 52, .b = 54 },
        { .r = 46, .g = 52, .b = 54 },
        { .r = 204, .g = 0, .b = 0 },
        { .r = 196, .g = 160, .b = 0 },
        { .r = 78, .g = 154, .b = 6 },
        { .r = 6, .g = 152, .b = 154 },
        { .r = 52, .g = 101, .b = 164 },
        { .r = 117, .g = 80, .b = 123 }
    },
    .system = 16
};

#endif  /* BASE16_tango_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
