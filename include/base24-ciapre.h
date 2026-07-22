/**
 * Base24 Ciapre 
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

#ifndef BASE24_ciapre_H__
#define BASE24_ciapre_H__

/**
 * The Base24 Ciapre scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_ciapre;

#endif  /* BASE24_ciapre_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_ciapre_IMPLEMENTATION_ONCE
#define BASE24_ciapre_IMPLEMENTATION_ONCE

const base16_scheme base24_ciapre = {
    .name = "Ciapre",
    .base = {
        { .r = 24, .g = 28, .b = 39 },
        { .r = 24, .g = 24, .b = 24 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 107, .g = 104, .b = 95 },
        { .r = 129, .g = 124, .b = 105 },
        { .r = 151, .g = 143, .b = 115 },
        { .r = 173, .g = 163, .b = 126 },
        { .r = 243, .g = 243, .b = 243 },
        { .r = 128, .g = 0, .b = 9 },
        { .r = 204, .g = 138, .b = 62 },
        { .r = 47, .g = 151, .b = 198 },
        { .r = 72, .g = 81, .b = 59 },
        { .r = 91, .g = 79, .b = 74 },
        { .r = 86, .g = 109, .b = 140 },
        { .r = 114, .g = 76, .b = 124 },
        { .r = 64, .g = 0, .b = 4 },

        /* Base24 */
        { .r = 56, .g = 56, .b = 56 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 171, .g = 56, .b = 52 },
        { .r = 220, .g = 222, .b = 123 },
        { .r = 166, .g = 166, .b = 93 },
        { .r = 243, .g = 218, .b = 177 },
        { .r = 47, .g = 151, .b = 198 },
        { .r = 211, .g = 48, .b = 96 }
    },
    .system = 24
};

#endif  /* BASE24_ciapre_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
