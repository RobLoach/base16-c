/**
 * Base24 Pnevma 
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

#ifndef BASE24_pnevma_H__
#define BASE24_pnevma_H__

/**
 * The Base24 Pnevma scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_pnevma;

#endif  /* BASE24_pnevma_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_pnevma_IMPLEMENTATION_ONCE
#define BASE24_pnevma_IMPLEMENTATION_ONCE

const base16_scheme base24_pnevma = {
    .name = "Pnevma",
    .base = {
        { .r = 28, .g = 28, .b = 28 },
        { .r = 47, .g = 46, .b = 45 },
        { .r = 74, .g = 72, .b = 69 },
        { .r = 107, .g = 106, .b = 103 },
        { .r = 141, .g = 140, .b = 138 },
        { .r = 174, .g = 174, .b = 173 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 239, .g = 239, .b = 239 },
        { .r = 163, .g = 102, .b = 102 },
        { .r = 215, .g = 175, .b = 135 },
        { .r = 161, .g = 189, .b = 206 },
        { .r = 144, .g = 165, .b = 125 },
        { .r = 138, .g = 219, .b = 180 },
        { .r = 127, .g = 165, .b = 189 },
        { .r = 199, .g = 158, .b = 196 },
        { .r = 81, .g = 51, .b = 51 },

        /* Base24 */
        { .r = 49, .g = 48, .b = 46 },
        { .r = 24, .g = 24, .b = 23 },
        { .r = 215, .g = 135, .b = 135 },
        { .r = 228, .g = 201, .b = 175 },
        { .r = 175, .g = 190, .b = 162 },
        { .r = 177, .g = 231, .b = 221 },
        { .r = 161, .g = 189, .b = 206 },
        { .r = 215, .g = 190, .b = 218 }
    },
    .system = 24
};

#endif  /* BASE24_pnevma_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
