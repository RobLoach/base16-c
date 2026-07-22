/**
 * Base24 Hacktober 
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

#ifndef BASE24_hacktober_H__
#define BASE24_hacktober_H__

/**
 * The Base24 Hacktober scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_hacktober;

#endif  /* BASE24_hacktober_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_hacktober_IMPLEMENTATION_ONCE
#define BASE24_hacktober_IMPLEMENTATION_ONCE

const base16_scheme base24_hacktober = {
    .name = "Hacktober",
    .base = {
        { .r = 20, .g = 20, .b = 20 },
        { .r = 25, .g = 25, .b = 24 },
        { .r = 44, .g = 43, .b = 42 },
        { .r = 93, .g = 91, .b = 89 },
        { .r = 142, .g = 140, .b = 136 },
        { .r = 191, .g = 189, .b = 183 },
        { .r = 241, .g = 238, .b = 231 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 179, .g = 69, .b = 56 },
        { .r = 208, .g = 137, .b = 73 },
        { .r = 83, .g = 137, .b = 197 },
        { .r = 88, .g = 119, .b = 68 },
        { .r = 172, .g = 145, .b = 102 },
        { .r = 32, .g = 110, .b = 197 },
        { .r = 134, .g = 70, .b = 81 },
        { .r = 89, .g = 34, .b = 28 },

        /* Base24 */
        { .r = 29, .g = 28, .b = 28 },
        { .r = 14, .g = 14, .b = 14 },
        { .r = 179, .g = 51, .b = 35 },
        { .r = 199, .g = 90, .b = 34 },
        { .r = 66, .g = 130, .b = 74 },
        { .r = 235, .g = 197, .b = 135 },
        { .r = 83, .g = 137, .b = 197 },
        { .r = 231, .g = 149, .b = 165 }
    },
    .system = 24
};

#endif  /* BASE24_hacktober_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
