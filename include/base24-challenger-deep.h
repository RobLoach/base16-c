/**
 * Base24 Challenger Deep 
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

#ifndef BASE24_challenger_deep_H__
#define BASE24_challenger_deep_H__

/**
 * The Base24 Challenger Deep scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_challenger_deep;

#endif  /* BASE24_challenger_deep_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_challenger_deep_IMPLEMENTATION_ONCE
#define BASE24_challenger_deep_IMPLEMENTATION_ONCE

const base16_scheme base24_challenger_deep = {
    .name = "Challenger Deep",
    .base = {
        { .r = 30, .g = 28, .b = 49 },
        { .r = 20, .g = 17, .b = 39 },
        { .r = 86, .g = 85, .b = 117 },
        { .r = 106, .g = 108, .b = 138 },
        { .r = 126, .g = 132, .b = 160 },
        { .r = 146, .g = 155, .b = 182 },
        { .r = 166, .g = 179, .b = 204 },
        { .r = 203, .g = 227, .b = 231 },
        { .r = 255, .g = 84, .b = 88 },
        { .r = 255, .g = 179, .b = 120 },
        { .r = 145, .g = 221, .b = 255 },
        { .r = 98, .g = 209, .b = 150 },
        { .r = 99, .g = 242, .b = 241 },
        { .r = 101, .g = 178, .b = 255 },
        { .r = 144, .g = 108, .b = 255 },
        { .r = 127, .g = 42, .b = 44 },

        /* Base24 */
        { .r = 57, .g = 56, .b = 78 },
        { .r = 28, .g = 28, .b = 39 },
        { .r = 255, .g = 128, .b = 128 },
        { .r = 255, .g = 233, .b = 170 },
        { .r = 149, .g = 255, .b = 164 },
        { .r = 170, .g = 255, .b = 228 },
        { .r = 145, .g = 221, .b = 255 },
        { .r = 201, .g = 145, .b = 225 }
    },
    .system = 24
};

#endif  /* BASE24_challenger_deep_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
