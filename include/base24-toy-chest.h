/**
 * Base24 Toy Chest 
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

#ifndef BASE24_toy_chest_H__
#define BASE24_toy_chest_H__

/**
 * The Base24 Toy Chest scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_toy_chest;

#endif  /* BASE24_toy_chest_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_toy_chest_IMPLEMENTATION_ONCE
#define BASE24_toy_chest_IMPLEMENTATION_ONCE

const base16_scheme base24_toy_chest = {
    .name = "Toy Chest",
    .base = {
        { .r = 35, .g = 54, .b = 74 },
        { .r = 44, .g = 63, .b = 87 },
        { .r = 50, .g = 104, .b = 137 },
        { .r = 47, .g = 130, .b = 136 },
        { .r = 43, .g = 156, .b = 134 },
        { .r = 39, .g = 182, .b = 132 },
        { .r = 35, .g = 208, .b = 130 },
        { .r = 212, .g = 212, .b = 212 },
        { .r = 190, .g = 45, .b = 38 },
        { .r = 218, .g = 142, .b = 38 },
        { .r = 51, .g = 165, .b = 217 },
        { .r = 25, .g = 145, .b = 113 },
        { .r = 53, .g = 160, .b = 143 },
        { .r = 50, .g = 93, .b = 150 },
        { .r = 138, .g = 93, .b = 219 },
        { .r = 95, .g = 22, .b = 19 },

        /* Base24 */
        { .r = 33, .g = 69, .b = 91 },
        { .r = 16, .g = 34, .b = 45 },
        { .r = 221, .g = 89, .b = 67 },
        { .r = 231, .g = 215, .b = 75 },
        { .r = 48, .g = 207, .b = 123 },
        { .r = 65, .g = 195, .b = 173 },
        { .r = 51, .g = 165, .b = 217 },
        { .r = 173, .g = 107, .b = 220 }
    },
    .system = 24
};

#endif  /* BASE24_toy_chest_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
