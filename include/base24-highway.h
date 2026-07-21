/**
 * Base24 Highway 
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

#ifndef BASE24_highway_H__
#define BASE24_highway_H__

/**
 * The Base24 Highway scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_highway;

#endif  /* BASE24_highway_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_highway_IMPLEMENTATION_ONCE
#define BASE24_highway_IMPLEMENTATION_ONCE

const base16_scheme base24_highway = {
    .name = "Highway",
    .base = {
        { .r = 33, .g = 34, .b = 36 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 92, .g = 79, .b = 73 },
        { .r = 128, .g = 118, .b = 114 },
        { .r = 164, .g = 158, .b = 155 },
        { .r = 200, .g = 197, .b = 196 },
        { .r = 237, .g = 237, .b = 237 },
        { .r = 254, .g = 255, .b = 254 },
        { .r = 207, .g = 13, .b = 23 },
        { .r = 255, .g = 202, .b = 61 },
        { .r = 79, .g = 194, .b = 253 },
        { .r = 18, .g = 128, .b = 51 },
        { .r = 56, .g = 69, .b = 99 },
        { .r = 0, .g = 106, .b = 179 },
        { .r = 106, .g = 38, .b = 116 },
        { .r = 103, .g = 6, .b = 11 },

        /* Base24 */
        { .r = 61, .g = 52, .b = 48 },
        { .r = 30, .g = 26, .b = 24 },
        { .r = 239, .g = 125, .b = 23 },
        { .r = 255, .g = 241, .b = 31 },
        { .r = 177, .g = 209, .b = 48 },
        { .r = 92, .g = 79, .b = 73 },
        { .r = 79, .g = 194, .b = 253 },
        { .r = 222, .g = 0, .b = 112 }
    },
    .system = 24
};

#endif  /* BASE24_highway_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
