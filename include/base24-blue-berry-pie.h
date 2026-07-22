/**
 * Base24 Blue Berry Pie 
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
    base16_color base[24]; /** An array of the colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE24_blue_berry_pie_H__
#define BASE24_blue_berry_pie_H__

/**
 * The Base24 Blue Berry Pie scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_blue_berry_pie;

#endif  /* BASE24_blue_berry_pie_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_blue_berry_pie_IMPLEMENTATION_ONCE
#define BASE24_blue_berry_pie_IMPLEMENTATION_ONCE

const base16_scheme base24_blue_berry_pie = {
    .name = "Blue Berry Pie",
    .base = {
        { .r = 28, .g = 11, .b = 40 },
        { .r = 10, .g = 75, .b = 97 },
        { .r = 31, .g = 22, .b = 55 },
        { .r = 83, .g = 74, .b = 94 },
        { .r = 135, .g = 126, .b = 134 },
        { .r = 187, .g = 178, .b = 173 },
        { .r = 240, .g = 231, .b = 213 },
        { .r = 10, .g = 107, .b = 126 },
        { .r = 153, .g = 35, .b = 109 },
        { .r = 233, .g = 184, .b = 167 },
        { .r = 56, .g = 22, .b = 61 },
        { .r = 91, .g = 176, .b = 178 },
        { .r = 126, .g = 130, .b = 204 },
        { .r = 144, .g = 165, .b = 188 },
        { .r = 157, .g = 83, .b = 167 },
        { .r = 76, .g = 17, .b = 54 },

        /* Base24 */
        { .r = 20, .g = 14, .b = 36 },
        { .r = 10, .g = 7, .b = 18 },
        { .r = 199, .g = 113, .b = 113 },
        { .r = 121, .g = 49, .b = 136 },
        { .r = 10, .g = 107, .b = 126 },
        { .r = 93, .g = 95, .b = 113 },
        { .r = 56, .g = 22, .b = 61 },
        { .r = 188, .g = 147, .b = 182 }
    },
    .system = 24
};

#endif  /* BASE24_blue_berry_pie_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
