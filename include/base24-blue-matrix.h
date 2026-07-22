/**
 * Base24 Blue Matrix 
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

#ifndef BASE24_blue_matrix_H__
#define BASE24_blue_matrix_H__

/**
 * The Base24 Blue Matrix scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_blue_matrix;

#endif  /* BASE24_blue_matrix_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_blue_matrix_IMPLEMENTATION_ONCE
#define BASE24_blue_matrix_IMPLEMENTATION_ONCE

const base16_scheme base24_blue_matrix = {
    .name = "Blue Matrix",
    .base = {
        { .r = 15, .g = 17, .b = 21 },
        { .r = 16, .g = 17, .b = 22 },
        { .r = 103, .g = 103, .b = 103 },
        { .r = 127, .g = 127, .b = 127 },
        { .r = 151, .g = 151, .b = 151 },
        { .r = 175, .g = 175, .b = 175 },
        { .r = 199, .g = 199, .b = 199 },
        { .r = 254, .g = 255, .b = 255 },
        { .r = 255, .g = 86, .b = 127 },
        { .r = 254, .g = 252, .b = 87 },
        { .r = 104, .g = 113, .b = 255 },
        { .r = 0, .g = 255, .b = 155 },
        { .r = 117, .g = 193, .b = 254 },
        { .r = 0, .g = 176, .b = 254 },
        { .r = 212, .g = 123, .b = 254 },
        { .r = 127, .g = 43, .b = 63 },

        /* Base24 */
        { .r = 68, .g = 68, .b = 68 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 255, .g = 109, .b = 103 },
        { .r = 254, .g = 251, .b = 103 },
        { .r = 95, .g = 249, .b = 103 },
        { .r = 95, .g = 253, .b = 255 },
        { .r = 104, .g = 113, .b = 255 },
        { .r = 213, .g = 130, .b = 235 }
    },
    .system = 24
};

#endif  /* BASE24_blue_matrix_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
