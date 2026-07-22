/**
 * Base24 Arthur 
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

#ifndef BASE24_arthur_H__
#define BASE24_arthur_H__

/**
 * The Base24 Arthur scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_arthur;

#endif  /* BASE24_arthur_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_arthur_IMPLEMENTATION_ONCE
#define BASE24_arthur_IMPLEMENTATION_ONCE

const base16_scheme base24_arthur = {
    .name = "Arthur",
    .base = {
        { .r = 28, .g = 28, .b = 28 },
        { .r = 61, .g = 53, .b = 42 },
        { .r = 85, .g = 68, .b = 68 },
        { .r = 110, .g = 93, .b = 89 },
        { .r = 136, .g = 119, .b = 110 },
        { .r = 161, .g = 144, .b = 131 },
        { .r = 187, .g = 170, .b = 153 },
        { .r = 221, .g = 204, .b = 187 },
        { .r = 205, .g = 92, .b = 92 },
        { .r = 232, .g = 174, .b = 91 },
        { .r = 135, .g = 206, .b = 235 },
        { .r = 134, .g = 175, .b = 128 },
        { .r = 176, .g = 196, .b = 222 },
        { .r = 100, .g = 149, .b = 237 },
        { .r = 222, .g = 184, .b = 135 },
        { .r = 102, .g = 46, .b = 46 },

        /* Base24 */
        { .r = 56, .g = 45, .b = 45 },
        { .r = 28, .g = 22, .b = 22 },
        { .r = 204, .g = 85, .b = 51 },
        { .r = 255, .g = 167, .b = 93 },
        { .r = 136, .g = 170, .b = 34 },
        { .r = 176, .g = 196, .b = 222 },
        { .r = 135, .g = 206, .b = 235 },
        { .r = 153, .g = 102, .b = 0 }
    },
    .system = 24
};

#endif  /* BASE24_arthur_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
