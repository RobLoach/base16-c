/**
 * Base24 Floraverse 
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

#ifndef BASE24_floraverse_H__
#define BASE24_floraverse_H__

/**
 * The Base24 Floraverse scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_floraverse;

#endif  /* BASE24_floraverse_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_floraverse_IMPLEMENTATION_ONCE
#define BASE24_floraverse_IMPLEMENTATION_ONCE

const base16_scheme base24_floraverse = {
    .name = "Floraverse",
    .base = {
        { .r = 14, .g = 12, .b = 21 },
        { .r = 8, .g = 0, .b = 46 },
        { .r = 51, .g = 30, .b = 77 },
        { .r = 99, .g = 78, .b = 103 },
        { .r = 147, .g = 127, .b = 130 },
        { .r = 195, .g = 175, .b = 157 },
        { .r = 243, .g = 224, .b = 184 },
        { .r = 255, .g = 245, .b = 219 },
        { .r = 100, .g = 0, .b = 44 },
        { .r = 205, .g = 117, .b = 28 },
        { .r = 64, .g = 164, .b = 207 },
        { .r = 93, .g = 115, .b = 26 },
        { .r = 66, .g = 163, .b = 140 },
        { .r = 29, .g = 109, .b = 161 },
        { .r = 183, .g = 7, .b = 126 },
        { .r = 50, .g = 0, .b = 22 },

        /* Base24 */
        { .r = 34, .g = 20, .b = 51 },
        { .r = 17, .g = 10, .b = 25 },
        { .r = 208, .g = 32, .b = 99 },
        { .r = 250, .g = 195, .b = 87 },
        { .r = 180, .g = 206, .b = 89 },
        { .r = 98, .g = 202, .b = 168 },
        { .r = 64, .g = 164, .b = 207 },
        { .r = 241, .g = 42, .b = 174 }
    },
    .system = 24
};

#endif  /* BASE24_floraverse_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
