/**
 * Base24 Grape 
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

#ifndef BASE24_grape_H__
#define BASE24_grape_H__

/**
 * The Base24 Grape scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_grape;

#endif  /* BASE24_grape_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_grape_IMPLEMENTATION_ONCE
#define BASE24_grape_IMPLEMENTATION_ONCE

const base16_scheme base24_grape = {
    .name = "Grape",
    .base = {
        { .r = 22, .g = 20, .b = 35 },
        { .r = 45, .g = 40, .b = 62 },
        { .r = 88, .g = 80, .b = 106 },
        { .r = 105, .g = 99, .b = 119 },
        { .r = 123, .g = 119, .b = 133 },
        { .r = 140, .g = 138, .b = 146 },
        { .r = 158, .g = 158, .b = 160 },
        { .r = 161, .g = 136, .b = 247 },
        { .r = 236, .g = 33, .b = 96 },
        { .r = 141, .g = 220, .b = 31 },
        { .r = 169, .g = 187, .b = 235 },
        { .r = 31, .g = 169, .b = 27 },
        { .r = 58, .g = 221, .b = 237 },
        { .r = 72, .g = 124, .b = 244 },
        { .r = 140, .g = 53, .b = 200 },
        { .r = 118, .g = 16, .b = 48 },

        /* Base24 */
        { .r = 58, .g = 53, .b = 70 },
        { .r = 29, .g = 26, .b = 35 },
        { .r = 240, .g = 113, .b = 154 },
        { .r = 178, .g = 220, .b = 135 },
        { .r = 82, .g = 169, .b = 93 },
        { .r = 156, .g = 227, .b = 234 },
        { .r = 169, .g = 187, .b = 235 },
        { .r = 172, .g = 129, .b = 193 }
    },
    .system = 24
};

#endif  /* BASE24_grape_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
