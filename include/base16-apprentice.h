/**
 * Base16 Apprentice 
 *
 * @author romainl
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

#ifndef BASE16_apprentice_H__
#define BASE16_apprentice_H__

/**
 * The Base16 Apprentice scheme.
 *
 * By: romainl
 */
extern const base16_scheme base16_apprentice;

#endif  /* BASE16_apprentice_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_apprentice_IMPLEMENTATION_ONCE
#define BASE16_apprentice_IMPLEMENTATION_ONCE

const base16_scheme base16_apprentice = {
    .name = "Apprentice",
    .base = {
        { .r = 38, .g = 38, .b = 38 },
        { .r = 175, .g = 95, .b = 95 },
        { .r = 95, .g = 135, .b = 95 },
        { .r = 135, .g = 135, .b = 95 },
        { .r = 95, .g = 135, .b = 175 },
        { .r = 95, .g = 95, .b = 135 },
        { .r = 95, .g = 135, .b = 135 },
        { .r = 108, .g = 108, .b = 108 },
        { .r = 68, .g = 68, .b = 68 },
        { .r = 255, .g = 135, .b = 0 },
        { .r = 135, .g = 175, .b = 135 },
        { .r = 255, .g = 255, .b = 175 },
        { .r = 135, .g = 175, .b = 215 },
        { .r = 135, .g = 135, .b = 175 },
        { .r = 95, .g = 175, .b = 175 },
        { .r = 188, .g = 188, .b = 188 }
    }
};

#endif  /* BASE16_apprentice_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
