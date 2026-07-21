/**
 * Base24 Ollie 
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

#ifndef BASE24_ollie_H__
#define BASE24_ollie_H__

/**
 * The Base24 Ollie scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_ollie;

#endif  /* BASE24_ollie_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_ollie_IMPLEMENTATION_ONCE
#define BASE24_ollie_IMPLEMENTATION_ONCE

const base16_scheme base24_ollie = {
    .name = "Ollie",
    .base = {
        { .r = 33, .g = 32, .b = 36 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 90, .g = 54, .b = 37 },
        { .r = 102, .g = 75, .b = 70 },
        { .r = 114, .g = 97, .b = 104 },
        { .r = 126, .g = 119, .b = 137 },
        { .r = 138, .g = 141, .b = 171 },
        { .r = 91, .g = 109, .b = 167 },
        { .r = 171, .g = 46, .b = 48 },
        { .r = 171, .g = 66, .b = 0 },
        { .r = 68, .g = 135, .b = 255 },
        { .r = 49, .g = 171, .b = 96 },
        { .r = 31, .g = 165, .b = 171 },
        { .r = 44, .g = 86, .b = 171 },
        { .r = 175, .g = 132, .b = 39 },
        { .r = 85, .g = 23, .b = 24 },

        /* Base24 */
        { .r = 60, .g = 36, .b = 24 },
        { .r = 30, .g = 18, .b = 12 },
        { .r = 255, .g = 61, .b = 72 },
        { .r = 255, .g = 94, .b = 30 },
        { .r = 59, .g = 255, .b = 153 },
        { .r = 30, .g = 250, .b = 255 },
        { .r = 68, .g = 135, .b = 255 },
        { .r = 255, .g = 194, .b = 28 }
    },
    .system = 24
};

#endif  /* BASE24_ollie_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
