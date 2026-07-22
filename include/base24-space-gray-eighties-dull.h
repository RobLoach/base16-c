/**
 * Base24 Space Gray Eighties Dull 
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

#ifndef BASE24_space_gray_eighties_dull_H__
#define BASE24_space_gray_eighties_dull_H__

/**
 * The Base24 Space Gray Eighties Dull scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_space_gray_eighties_dull;

#endif  /* BASE24_space_gray_eighties_dull_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_space_gray_eighties_dull_IMPLEMENTATION_ONCE
#define BASE24_space_gray_eighties_dull_IMPLEMENTATION_ONCE

const base16_scheme base24_space_gray_eighties_dull = {
    .name = "Space Gray Eighties Dull",
    .base = {
        { .r = 33, .g = 33, .b = 33 },
        { .r = 21, .g = 23, .b = 28 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 108, .g = 109, .b = 112 },
        { .r = 131, .g = 134, .b = 139 },
        { .r = 154, .g = 159, .b = 166 },
        { .r = 178, .g = 184, .b = 194 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 177, .g = 73, .b = 86 },
        { .r = 198, .g = 114, .b = 90 },
        { .r = 84, .g = 133, .b = 192 },
        { .r = 145, .g = 179, .b = 119 },
        { .r = 127, .g = 204, .b = 203 },
        { .r = 123, .g = 143, .b = 164 },
        { .r = 165, .g = 119, .b = 158 },
        { .r = 88, .g = 36, .b = 43 },

        /* Base24 */
        { .r = 56, .g = 56, .b = 56 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 236, .g = 95, .b = 103 },
        { .r = 253, .g = 194, .b = 83 },
        { .r = 136, .g = 233, .b = 133 },
        { .r = 88, .g = 194, .b = 192 },
        { .r = 84, .g = 133, .b = 192 },
        { .r = 191, .g = 131, .b = 192 }
    },
    .system = 24
};

#endif  /* BASE24_space_gray_eighties_dull_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
