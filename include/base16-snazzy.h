/**
 * Base16 Snazzy 
 * 
 * @author Chawye Hsu (https://github.com/chawyehsu) based on Hyper Snazzy Theme (https://github.com/sindresorhus/hyper-snazzy)
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

#ifndef BASE16_snazzy_H__
#define BASE16_snazzy_H__

/**
 * The Base16 Snazzy scheme.
 * 
 * By: Chawye Hsu (https://github.com/chawyehsu) based on Hyper Snazzy Theme (https://github.com/sindresorhus/hyper-snazzy)
 */
extern const base16_scheme base16_snazzy;

#endif  /* BASE16_snazzy_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_snazzy_IMPLEMENTATION_ONCE
#define BASE16_snazzy_IMPLEMENTATION_ONCE

const base16_scheme base16_snazzy = {
    .name = "Snazzy",
    .base = {
        { .r = 40, .g = 42, .b = 54 },
        { .r = 52, .g = 53, .b = 62 },
        { .r = 67, .g = 69, .b = 79 },
        { .r = 120, .g = 120, .b = 126 },
        { .r = 165, .g = 165, .b = 169 },
        { .r = 226, .g = 228, .b = 229 },
        { .r = 239, .g = 240, .b = 235 },
        { .r = 241, .g = 241, .b = 240 },
        { .r = 255, .g = 92, .b = 87 },
        { .r = 255, .g = 159, .b = 67 },
        { .r = 243, .g = 249, .b = 157 },
        { .r = 90, .g = 247, .b = 142 },
        { .r = 154, .g = 237, .b = 254 },
        { .r = 87, .g = 199, .b = 255 },
        { .r = 255, .g = 106, .b = 193 },
        { .r = 178, .g = 100, .b = 60 }
    }
};

#endif  /* BASE16_snazzy_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
