/**
 * Base24 Github 
 *
 * @author FredHappyface (https://github.com/fredHappyface)
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
 * The Base24 Github scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_github;

#endif  /* BASE16_github_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_github_IMPLEMENTATION_ONCE
#define BASE24_github_IMPLEMENTATION_ONCE

const base16_scheme base24_github = {
    .name = "Github",
    .base = {
        { .r = 244, .g = 244, .b = 244 },
        { .r = 62, .g = 62, .b = 62 },
        { .r = 102, .g = 102, .b = 102 },
        { .r = 140, .g = 140, .b = 140 },
        { .r = 178, .g = 178, .b = 178 },
        { .r = 216, .g = 216, .b = 216 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 151, .g = 11, .b = 22 },
        { .r = 248, .g = 238, .b = 199 },
        { .r = 46, .g = 108, .b = 186 },
        { .r = 7, .g = 150, .b = 42 },
        { .r = 137, .g = 209, .b = 236 },
        { .r = 0, .g = 62, .b = 138 },
        { .r = 233, .g = 70, .b = 145 },
        { .r = 75, .g = 5, .b = 11 },

        /* Base24 */
        { .r = 68, .g = 68, .b = 68 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 222, .g = 0, .b = 0 },
        { .r = 241, .g = 208, .b = 7 },
        { .r = 135, .g = 213, .b = 162 },
        { .r = 28, .g = 250, .b = 254 },
        { .r = 46, .g = 108, .b = 186 },
        { .r = 255, .g = 162, .b = 159 }
    },
    .system = 24
};

#endif  /* BASE24_github_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
