/**
 * Base24 Lovelace 
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

#ifndef BASE24_lovelace_H__
#define BASE24_lovelace_H__

/**
 * The Base24 Lovelace scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_lovelace;

#endif  /* BASE24_lovelace_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_lovelace_IMPLEMENTATION_ONCE
#define BASE24_lovelace_IMPLEMENTATION_ONCE

const base16_scheme base24_lovelace = {
    .name = "Lovelace",
    .base = {
        { .r = 29, .g = 31, .b = 40 },
        { .r = 40, .g = 42, .b = 54 },
        { .r = 65, .g = 68, .b = 88 },
        { .r = 112, .g = 114, .b = 129 },
        { .r = 159, .g = 160, .b = 170 },
        { .r = 206, .g = 206, .b = 211 },
        { .r = 253, .g = 253, .b = 253 },
        { .r = 190, .g = 190, .b = 193 },
        { .r = 243, .g = 127, .b = 151 },
        { .r = 242, .g = 162, .b = 114 },
        { .r = 85, .g = 111, .b = 255 },
        { .r = 90, .g = 222, .b = 205 },
        { .r = 121, .g = 230, .b = 243 },
        { .r = 136, .g = 151, .b = 244 },
        { .r = 197, .g = 116, .b = 221 },
        { .r = 121, .g = 63, .b = 75 },

        /* Base24 */
        { .r = 43, .g = 45, .b = 58 },
        { .r = 21, .g = 22, .b = 29 },
        { .r = 255, .g = 73, .b = 113 },
        { .r = 255, .g = 128, .b = 55 },
        { .r = 24, .g = 227, .b = 200 },
        { .r = 63, .g = 220, .b = 238 },
        { .r = 85, .g = 111, .b = 255 },
        { .r = 176, .g = 67, .b = 209 }
    },
    .system = 24
};

#endif  /* BASE24_lovelace_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
