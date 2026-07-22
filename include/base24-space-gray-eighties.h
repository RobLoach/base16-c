/**
 * Base24 Space Gray Eighties 
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

#ifndef BASE24_space_gray_eighties_H__
#define BASE24_space_gray_eighties_H__

/**
 * The Base24 Space Gray Eighties scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_space_gray_eighties;

#endif  /* BASE24_space_gray_eighties_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_space_gray_eighties_IMPLEMENTATION_ONCE
#define BASE24_space_gray_eighties_IMPLEMENTATION_ONCE

const base16_scheme base24_space_gray_eighties = {
    .name = "Space Gray Eighties",
    .base = {
        { .r = 33, .g = 33, .b = 33 },
        { .r = 21, .g = 23, .b = 28 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 123, .g = 122, .b = 121 },
        { .r = 161, .g = 160, .b = 158 },
        { .r = 199, .g = 198, .b = 194 },
        { .r = 238, .g = 236, .b = 231 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 236, .g = 95, .b = 103 },
        { .r = 253, .g = 194, .b = 83 },
        { .r = 77, .g = 131, .b = 208 },
        { .r = 128, .g = 167, .b = 99 },
        { .r = 87, .g = 194, .b = 192 },
        { .r = 84, .g = 133, .b = 192 },
        { .r = 191, .g = 131, .b = 192 },
        { .r = 118, .g = 47, .b = 51 },

        /* Base24 */
        { .r = 56, .g = 56, .b = 56 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 255, .g = 105, .b = 115 },
        { .r = 255, .g = 209, .b = 86 },
        { .r = 147, .g = 211, .b = 147 },
        { .r = 131, .g = 232, .b = 228 },
        { .r = 77, .g = 131, .b = 208 },
        { .r = 255, .g = 85, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_space_gray_eighties_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
