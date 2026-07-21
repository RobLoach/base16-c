/**
 * Base24 Hybrid 
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

#ifndef BASE24_hybrid_H__
#define BASE24_hybrid_H__

/**
 * The Base24 Hybrid scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_hybrid;

#endif  /* BASE24_hybrid_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_hybrid_IMPLEMENTATION_ONCE
#define BASE24_hybrid_IMPLEMENTATION_ONCE

const base16_scheme base24_hybrid = {
    .name = "Hybrid",
    .base = {
        { .r = 22, .g = 23, .b = 24 },
        { .r = 42, .g = 46, .b = 51 },
        { .r = 29, .g = 30, .b = 33 },
        { .r = 67, .g = 68, .b = 70 },
        { .r = 105, .g = 107, .b = 107 },
        { .r = 143, .g = 145, .b = 144 },
        { .r = 181, .g = 184, .b = 182 },
        { .r = 90, .g = 97, .b = 105 },
        { .r = 183, .g = 77, .b = 80 },
        { .r = 227, .g = 181, .b = 94 },
        { .r = 75, .g = 107, .b = 136 },
        { .r = 179, .g = 190, .b = 90 },
        { .r = 127, .g = 190, .b = 179 },
        { .r = 109, .g = 144, .b = 176 },
        { .r = 160, .g = 126, .b = 171 },
        { .r = 91, .g = 38, .b = 40 },

        /* Base24 */
        { .r = 19, .g = 20, .b = 22 },
        { .r = 9, .g = 10, .b = 11 },
        { .r = 140, .g = 45, .b = 50 },
        { .r = 229, .g = 137, .b = 79 },
        { .r = 120, .g = 131, .b = 49 },
        { .r = 77, .g = 123, .b = 115 },
        { .r = 75, .g = 107, .b = 136 },
        { .r = 110, .g = 79, .b = 121 }
    },
    .system = 24
};

#endif  /* BASE24_hybrid_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
