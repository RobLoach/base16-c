/**
 * Base24 Royal 
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

#ifndef BASE24_royal_H__
#define BASE24_royal_H__

/**
 * The Base24 Royal scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_royal;

#endif  /* BASE24_royal_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_royal_IMPLEMENTATION_ONCE
#define BASE24_royal_IMPLEMENTATION_ONCE

const base16_scheme base24_royal = {
    .name = "Royal",
    .base = {
        { .r = 16, .g = 8, .b = 20 },
        { .r = 36, .g = 31, .b = 42 },
        { .r = 49, .g = 45, .b = 60 },
        { .r = 57, .g = 52, .b = 70 },
        { .r = 65, .g = 59, .b = 80 },
        { .r = 73, .g = 66, .b = 90 },
        { .r = 81, .g = 73, .b = 101 },
        { .r = 157, .g = 139, .b = 189 },
        { .r = 144, .g = 39, .b = 75 },
        { .r = 180, .g = 157, .b = 39 },
        { .r = 143, .g = 185, .b = 249 },
        { .r = 35, .g = 128, .b = 28 },
        { .r = 138, .g = 170, .b = 189 },
        { .r = 100, .g = 128, .b = 175 },
        { .r = 102, .g = 77, .b = 150 },
        { .r = 72, .g = 19, .b = 37 },

        /* Base24 */
        { .r = 32, .g = 30, .b = 40 },
        { .r = 16, .g = 15, .b = 20 },
        { .r = 212, .g = 52, .b = 108 },
        { .r = 253, .g = 232, .b = 58 },
        { .r = 44, .g = 216, .b = 69 },
        { .r = 171, .g = 211, .b = 235 },
        { .r = 143, .g = 185, .b = 249 },
        { .r = 164, .g = 121, .b = 226 }
    },
    .system = 24
};

#endif  /* BASE24_royal_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
