/**
 * Base24 Elementary 
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

#ifndef BASE24_elementary_H__
#define BASE24_elementary_H__

/**
 * The Base24 Elementary scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_elementary;

#endif  /* BASE24_elementary_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_elementary_IMPLEMENTATION_ONCE
#define BASE24_elementary_IMPLEMENTATION_ONCE

const base16_scheme base24_elementary = {
    .name = "Elementary",
    .base = {
        { .r = 24, .g = 24, .b = 24 },
        { .r = 36, .g = 36, .b = 36 },
        { .r = 74, .g = 74, .b = 74 },
        { .r = 115, .g = 115, .b = 115 },
        { .r = 156, .g = 156, .b = 156 },
        { .r = 197, .g = 197, .b = 197 },
        { .r = 238, .g = 238, .b = 238 },
        { .r = 140, .g = 0, .b = 235 },
        { .r = 214, .g = 27, .b = 21 },
        { .r = 253, .g = 180, .b = 11 },
        { .r = 8, .g = 85, .b = 254 },
        { .r = 89, .g = 164, .b = 19 },
        { .r = 37, .g = 148, .b = 224 },
        { .r = 5, .g = 58, .b = 140 },
        { .r = 228, .g = 0, .b = 56 },
        { .r = 107, .g = 13, .b = 10 },

        /* Base24 */
        { .r = 49, .g = 49, .b = 49 },
        { .r = 24, .g = 24, .b = 24 },
        { .r = 251, .g = 27, .b = 24 },
        { .r = 253, .g = 199, .b = 14 },
        { .r = 106, .g = 193, .b = 24 },
        { .r = 62, .g = 167, .b = 252 },
        { .r = 8, .g = 85, .b = 254 },
        { .r = 251, .g = 0, .b = 79 }
    },
    .system = 24
};

#endif  /* BASE24_elementary_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
