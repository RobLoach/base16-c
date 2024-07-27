/**
 * Base16 Github 
 * 
 * @author Defman21
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

#ifndef BASE16_github_H__
#define BASE16_github_H__

/**
 * The Base16 Github scheme.
 * 
 * By: Defman21
 */
extern const base16_scheme base16_github;

#endif  /* BASE16_github_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_github_IMPLEMENTATION_ONCE
#define BASE16_github_IMPLEMENTATION_ONCE

const base16_scheme base16_github = {
    .name = "Github",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 245, .g = 245, .b = 245 },
        { .r = 200, .g = 200, .b = 250 },
        { .r = 150, .g = 152, .b = 150 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 51, .g = 51, .b = 51 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 237, .g = 106, .b = 67 },
        { .r = 0, .g = 134, .b = 179 },
        { .r = 121, .g = 93, .b = 163 },
        { .r = 24, .g = 54, .b = 145 },
        { .r = 24, .g = 54, .b = 145 },
        { .r = 121, .g = 93, .b = 163 },
        { .r = 167, .g = 29, .b = 93 },
        { .r = 51, .g = 51, .b = 51 }
    }
};

#endif  /* BASE16_github_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
