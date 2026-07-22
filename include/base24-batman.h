/**
 * Base24 Batman 
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

#ifndef BASE24_batman_H__
#define BASE24_batman_H__

/**
 * The Base24 Batman scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_batman;

#endif  /* BASE24_batman_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_batman_IMPLEMENTATION_ONCE
#define BASE24_batman_IMPLEMENTATION_ONCE

const base16_scheme base24_batman = {
    .name = "Batman",
    .base = {
        { .r = 27, .g = 29, .b = 30 },
        { .r = 27, .g = 29, .b = 30 },
        { .r = 80, .g = 83, .b = 84 },
        { .r = 109, .g = 111, .b = 110 },
        { .r = 138, .g = 140, .b = 137 },
        { .r = 167, .g = 168, .b = 163 },
        { .r = 197, .g = 197, .b = 190 },
        { .r = 218, .g = 218, .b = 213 },
        { .r = 230, .g = 219, .b = 67 },
        { .r = 243, .g = 253, .b = 33 },
        { .r = 144, .g = 148, .b = 149 },
        { .r = 200, .g = 190, .b = 70 },
        { .r = 97, .g = 95, .b = 94 },
        { .r = 115, .g = 112, .b = 116 },
        { .r = 115, .g = 114, .b = 113 },
        { .r = 115, .g = 109, .b = 33 },

        /* Base24 */
        { .r = 53, .g = 55, .b = 56 },
        { .r = 26, .g = 27, .b = 28 },
        { .r = 255, .g = 246, .b = 141 },
        { .r = 254, .g = 237, .b = 108 },
        { .r = 255, .g = 242, .b = 124 },
        { .r = 162, .g = 162, .b = 165 },
        { .r = 144, .g = 148, .b = 149 },
        { .r = 154, .g = 153, .b = 157 }
    },
    .system = 24
};

#endif  /* BASE24_batman_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
