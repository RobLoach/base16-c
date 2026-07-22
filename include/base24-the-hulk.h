/**
 * Base24 The Hulk 
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

#ifndef BASE24_the_hulk_H__
#define BASE24_the_hulk_H__

/**
 * The Base24 The Hulk scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_the_hulk;

#endif  /* BASE24_the_hulk_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_the_hulk_IMPLEMENTATION_ONCE
#define BASE24_the_hulk_IMPLEMENTATION_ONCE

const base16_scheme base24_the_hulk = {
    .name = "The Hulk",
    .base = {
        { .r = 27, .g = 29, .b = 30 },
        { .r = 27, .g = 29, .b = 30 },
        { .r = 80, .g = 83, .b = 84 },
        { .r = 114, .g = 116, .b = 115 },
        { .r = 148, .g = 149, .b = 146 },
        { .r = 182, .g = 182, .b = 177 },
        { .r = 216, .g = 216, .b = 208 },
        { .r = 229, .g = 229, .b = 224 },
        { .r = 37, .g = 157, .b = 26 },
        { .r = 98, .g = 228, .b = 86 },
        { .r = 79, .g = 106, .b = 149 },
        { .r = 19, .g = 206, .b = 47 },
        { .r = 55, .g = 140, .b = 169 },
        { .r = 36, .g = 36, .b = 244 },
        { .r = 100, .g = 30, .b = 115 },
        { .r = 18, .g = 78, .b = 13 },

        /* Base24 */
        { .r = 53, .g = 55, .b = 56 },
        { .r = 26, .g = 27, .b = 28 },
        { .r = 141, .g = 255, .b = 42 },
        { .r = 58, .g = 254, .b = 21 },
        { .r = 72, .g = 255, .b = 118 },
        { .r = 63, .g = 133, .b = 165 },
        { .r = 79, .g = 106, .b = 149 },
        { .r = 114, .g = 87, .b = 157 }
    },
    .system = 24
};

#endif  /* BASE24_the_hulk_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
