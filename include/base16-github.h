/**
 * Base16 Github 
 *
 * @author Defman21
 *
 * Template by Rob Loach (https://robloach.net)
 * base16-c: https://github.com/RobLoach/base16-c
 *
 * License: MIT
 *
 * Copyright (c) 2024 Rob Loach (https://robloach.net)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
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
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_github_H__
#define BASE16_github_H__

/**
 * The Base16 Github scheme.
 *
 * @author Defman21
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
        { .r = 51, .g = 51, .b = 51 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 237, .g = 106, .b = 67 },
        { .r = 121, .g = 93, .b = 163 },
        { .r = 24, .g = 54, .b = 145 },
        { .r = 24, .g = 54, .b = 145 },
        { .r = 121, .g = 93, .b = 163 },
        { .r = 167, .g = 29, .b = 93 }
    },
    .system = 16
};

#endif  /* BASE16_github_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
