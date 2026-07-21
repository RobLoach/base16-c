/**
 * Base24 Fideloper 
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

#ifndef BASE24_fideloper_H__
#define BASE24_fideloper_H__

/**
 * The Base24 Fideloper scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_fideloper;

#endif  /* BASE24_fideloper_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_fideloper_IMPLEMENTATION_ONCE
#define BASE24_fideloper_IMPLEMENTATION_ONCE

const base16_scheme base24_fideloper = {
    .name = "Fideloper",
    .base = {
        { .r = 40, .g = 47, .b = 50 },
        { .r = 40, .g = 47, .b = 50 },
        { .r = 9, .g = 32, .b = 39 },
        { .r = 65, .g = 80, .b = 80 },
        { .r = 121, .g = 129, .b = 122 },
        { .r = 177, .g = 177, .b = 163 },
        { .r = 233, .g = 226, .b = 205 },
        { .r = 252, .g = 244, .b = 222 },
        { .r = 202, .g = 29, .b = 44 },
        { .r = 183, .g = 170, .b = 154 },
        { .r = 124, .g = 132, .b = 196 },
        { .r = 237, .g = 183, .b = 171 },
        { .r = 48, .g = 145, .b = 133 },
        { .r = 46, .g = 120, .b = 193 },
        { .r = 192, .g = 34, .b = 110 },
        { .r = 101, .g = 14, .b = 22 },

        /* Base24 */
        { .r = 6, .g = 21, .b = 26 },
        { .r = 3, .g = 10, .b = 13 },
        { .r = 211, .g = 95, .b = 90 },
        { .r = 168, .g = 101, .b = 113 },
        { .r = 211, .g = 95, .b = 90 },
        { .r = 129, .g = 144, .b = 143 },
        { .r = 124, .g = 132, .b = 196 },
        { .r = 91, .g = 93, .b = 178 }
    },
    .system = 24
};

#endif  /* BASE24_fideloper_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
