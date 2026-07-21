/**
 * Base24 CLRS 
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

#ifndef BASE24_clrs_H__
#define BASE24_clrs_H__

/**
 * The Base24 CLRS scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_clrs;

#endif  /* BASE24_clrs_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_clrs_IMPLEMENTATION_ONCE
#define BASE24_clrs_IMPLEMENTATION_ONCE

const base16_scheme base24_clrs = {
    .name = "CLRS",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 84, .g = 87, .b = 83 },
        { .r = 107, .g = 109, .b = 106 },
        { .r = 131, .g = 132, .b = 130 },
        { .r = 154, .g = 155, .b = 154 },
        { .r = 178, .g = 178, .b = 178 },
        { .r = 237, .g = 237, .b = 236 },
        { .r = 247, .g = 39, .b = 41 },
        { .r = 249, .g = 111, .b = 28 },
        { .r = 21, .g = 111, .b = 254 },
        { .r = 50, .g = 137, .b = 92 },
        { .r = 50, .g = 194, .b = 192 },
        { .r = 18, .g = 92, .b = 207 },
        { .r = 159, .g = 0, .b = 188 },
        { .r = 123, .g = 19, .b = 20 },

        /* Base24 */
        { .r = 56, .g = 58, .b = 55 },
        { .r = 28, .g = 29, .b = 27 },
        { .r = 251, .g = 4, .b = 22 },
        { .r = 252, .g = 214, .b = 39 },
        { .r = 44, .g = 198, .b = 49 },
        { .r = 57, .g = 213, .b = 206 },
        { .r = 21, .g = 111, .b = 254 },
        { .r = 232, .g = 0, .b = 176 }
    },
    .system = 24
};

#endif  /* BASE24_clrs_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
