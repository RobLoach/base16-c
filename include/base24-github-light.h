/**
 * Base24 Github Light 
 *
 * @author Tinted Theming (https://github.com/tinted-theming)
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
    base16_color base[24]; /** An array of the colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE24_github_light_H__
#define BASE24_github_light_H__

/**
 * The Base24 Github Light scheme.
 *
 * @author Tinted Theming (https://github.com/tinted-theming)
 */
extern const base16_scheme base24_github_light;

#endif  /* BASE24_github_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_github_light_IMPLEMENTATION_ONCE
#define BASE24_github_light_IMPLEMENTATION_ONCE

const base16_scheme base24_github_light = {
    .name = "Github Light",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 246, .g = 248, .b = 250 },
        { .r = 175, .g = 184, .b = 193 },
        { .r = 140, .g = 149, .b = 159 },
        { .r = 110, .g = 119, .b = 129 },
        { .r = 66, .g = 74, .b = 83 },
        { .r = 50, .g = 56, .b = 63 },
        { .r = 31, .g = 35, .b = 40 },
        { .r = 149, .g = 56, .b = 0 },
        { .r = 5, .g = 80, .b = 174 },
        { .r = 191, .g = 135, .b = 0 },
        { .r = 10, .g = 48, .b = 105 },
        { .r = 17, .g = 99, .b = 41 },
        { .r = 130, .g = 80, .b = 223 },
        { .r = 207, .g = 34, .b = 46 },
        { .r = 130, .g = 7, .b = 30 },

        /* Base24 */
        { .r = 31, .g = 35, .b = 40 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 255, .g = 129, .b = 130 },
        { .r = 212, .g = 167, .b = 44 },
        { .r = 74, .g = 194, .b = 107 },
        { .r = 73, .g = 188, .b = 183 },
        { .r = 84, .g = 174, .b = 255 },
        { .r = 194, .g = 151, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_github_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
