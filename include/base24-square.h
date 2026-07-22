/**
 * Base24 Square 
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

#ifndef BASE24_square_H__
#define BASE24_square_H__

/**
 * The Base24 Square scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_square;

#endif  /* BASE24_square_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_square_IMPLEMENTATION_ONCE
#define BASE24_square_IMPLEMENTATION_ONCE

const base16_scheme base24_square = {
    .name = "Square",
    .base = {
        { .r = 26, .g = 26, .b = 26 },
        { .r = 5, .g = 5, .b = 5 },
        { .r = 20, .g = 20, .b = 20 },
        { .r = 75, .g = 75, .b = 75 },
        { .r = 131, .g = 131, .b = 131 },
        { .r = 186, .g = 186, .b = 186 },
        { .r = 242, .g = 242, .b = 242 },
        { .r = 226, .g = 226, .b = 226 },
        { .r = 233, .g = 137, .b = 124 },
        { .r = 236, .g = 235, .b = 190 },
        { .r = 182, .g = 222, .b = 251 },
        { .r = 182, .g = 55, .b = 125 },
        { .r = 201, .g = 202, .b = 236 },
        { .r = 169, .g = 205, .b = 235 },
        { .r = 117, .g = 80, .b = 123 },
        { .r = 116, .g = 68, .b = 62 },

        /* Base24 */
        { .r = 13, .g = 13, .b = 13 },
        { .r = 6, .g = 6, .b = 6 },
        { .r = 249, .g = 146, .b = 134 },
        { .r = 252, .g = 251, .b = 204 },
        { .r = 195, .g = 247, .b = 134 },
        { .r = 215, .g = 217, .b = 252 },
        { .r = 182, .g = 222, .b = 251 },
        { .r = 173, .g = 127, .b = 168 }
    },
    .system = 24
};

#endif  /* BASE24_square_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
