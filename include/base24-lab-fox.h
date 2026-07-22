/**
 * Base24 Lab Fox 
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

#ifndef BASE24_lab_fox_H__
#define BASE24_lab_fox_H__

/**
 * The Base24 Lab Fox scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_lab_fox;

#endif  /* BASE24_lab_fox_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_lab_fox_IMPLEMENTATION_ONCE
#define BASE24_lab_fox_IMPLEMENTATION_ONCE

const base16_scheme base24_lab_fox = {
    .name = "Lab Fox",
    .base = {
        { .r = 46, .g = 46, .b = 46 },
        { .r = 46, .g = 46, .b = 46 },
        { .r = 69, .g = 69, .b = 69 },
        { .r = 115, .g = 115, .b = 115 },
        { .r = 161, .g = 162, .b = 162 },
        { .r = 207, .g = 208, .b = 208 },
        { .r = 254, .g = 255, .b = 255 },
        { .r = 254, .g = 255, .b = 255 },
        { .r = 252, .g = 109, .b = 38 },
        { .r = 252, .g = 161, .b = 33 },
        { .r = 219, .g = 80, .b = 31 },
        { .r = 62, .g = 179, .b = 131 },
        { .r = 110, .g = 73, .b = 203 },
        { .r = 219, .g = 59, .b = 33 },
        { .r = 56, .g = 13, .b = 117 },
        { .r = 126, .g = 54, .b = 19 },

        /* Base24 */
        { .r = 46, .g = 46, .b = 46 },
        { .r = 23, .g = 23, .b = 23 },
        { .r = 255, .g = 101, .b = 23 },
        { .r = 252, .g = 160, .b = 18 },
        { .r = 82, .g = 233, .b = 168 },
        { .r = 125, .g = 83, .b = 231 },
        { .r = 219, .g = 80, .b = 31 },
        { .r = 68, .g = 16, .b = 144 }
    },
    .system = 24
};

#endif  /* BASE24_lab_fox_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
