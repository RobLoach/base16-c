/**
 * Base24 Wryan 
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

#ifndef BASE24_wryan_H__
#define BASE24_wryan_H__

/**
 * The Base24 Wryan scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_wryan;

#endif  /* BASE24_wryan_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_wryan_IMPLEMENTATION_ONCE
#define BASE24_wryan_IMPLEMENTATION_ONCE

const base16_scheme base24_wryan = {
    .name = "Wryan",
    .base = {
        { .r = 16, .g = 16, .b = 16 },
        { .r = 51, .g = 51, .b = 51 },
        { .r = 61, .g = 61, .b = 61 },
        { .r = 80, .g = 84, .b = 86 },
        { .r = 99, .g = 108, .b = 111 },
        { .r = 118, .g = 132, .b = 136 },
        { .r = 137, .g = 156, .b = 161 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 140, .g = 70, .b = 101 },
        { .r = 124, .g = 124, .b = 153 },
        { .r = 71, .g = 122, .b = 179 },
        { .r = 40, .g = 115, .b = 115 },
        { .r = 49, .g = 101, .b = 140 },
        { .r = 57, .g = 85, .b = 115 },
        { .r = 94, .g = 70, .b = 140 },
        { .r = 70, .g = 35, .b = 50 },

        /* Base24 */
        { .r = 40, .g = 40, .b = 40 },
        { .r = 20, .g = 20, .b = 20 },
        { .r = 191, .g = 77, .b = 128 },
        { .r = 158, .g = 158, .b = 203 },
        { .r = 83, .g = 166, .b = 166 },
        { .r = 96, .g = 150, .b = 191 },
        { .r = 71, .g = 122, .b = 179 },
        { .r = 126, .g = 98, .b = 179 }
    },
    .system = 24
};

#endif  /* BASE24_wryan_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
