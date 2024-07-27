/**
 * Base16 Da One Paper 
 * 
 * @author NNB (https://github.com/NNBnh)
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

#ifndef BASE16_da_one_paper_H__
#define BASE16_da_one_paper_H__

/**
 * The Base16 Da One Paper scheme.
 * 
 * By: NNB (https://github.com/NNBnh)
 */
extern const base16_scheme base16_da_one_paper;

#endif  /* BASE16_da_one_paper_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_da_one_paper_IMPLEMENTATION_ONCE
#define BASE16_da_one_paper_IMPLEMENTATION_ONCE

const base16_scheme base16_da_one_paper = {
    .name = "Da One Paper",
    .base = {
        { .r = 250, .g = 240, .b = 220 },
        { .r = 200, .g = 200, .b = 200 },
        { .r = 136, .g = 136, .b = 136 },
        { .r = 88, .g = 88, .b = 88 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 24, .g = 24, .b = 24 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 222, .g = 93, .b = 110 },
        { .r = 255, .g = 148, .b = 112 },
        { .r = 179, .g = 104, .b = 79 },
        { .r = 118, .g = 168, .b = 93 },
        { .r = 100, .g = 181, .b = 167 },
        { .r = 88, .g = 144, .b = 248 },
        { .r = 193, .g = 115, .b = 209 },
        { .r = 179, .g = 104, .b = 79 }
    }
};

#endif  /* BASE16_da_one_paper_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
