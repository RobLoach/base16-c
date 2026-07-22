/**
 * Base24 Lavandula 
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

#ifndef BASE24_lavandula_H__
#define BASE24_lavandula_H__

/**
 * The Base24 Lavandula scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_lavandula;

#endif  /* BASE24_lavandula_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_lavandula_IMPLEMENTATION_ONCE
#define BASE24_lavandula_IMPLEMENTATION_ONCE

const base16_scheme base24_lavandula = {
    .name = "Lavandula",
    .base = {
        { .r = 5, .g = 0, .b = 20 },
        { .r = 35, .g = 0, .b = 69 },
        { .r = 55, .g = 44, .b = 70 },
        { .r = 70, .g = 60, .b = 83 },
        { .r = 85, .g = 77, .b = 97 },
        { .r = 100, .g = 93, .b = 111 },
        { .r = 115, .g = 110, .b = 125 },
        { .r = 140, .g = 145, .b = 250 },
        { .r = 124, .g = 21, .b = 37 },
        { .r = 127, .g = 111, .b = 73 },
        { .r = 142, .g = 134, .b = 223 },
        { .r = 51, .g = 126, .b = 111 },
        { .r = 87, .g = 118, .b = 127 },
        { .r = 79, .g = 74, .b = 127 },
        { .r = 89, .g = 63, .b = 126 },
        { .r = 62, .g = 10, .b = 18 },

        /* Base24 */
        { .r = 36, .g = 29, .b = 46 },
        { .r = 18, .g = 14, .b = 23 },
        { .r = 223, .g = 80, .b = 102 },
        { .r = 224, .g = 194, .b = 134 },
        { .r = 82, .g = 224, .b = 196 },
        { .r = 154, .g = 211, .b = 223 },
        { .r = 142, .g = 134, .b = 223 },
        { .r = 166, .g = 117, .b = 223 }
    },
    .system = 24
};

#endif  /* BASE24_lavandula_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
