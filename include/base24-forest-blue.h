/**
 * Base24 Forest Blue 
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

#ifndef BASE24_forest_blue_H__
#define BASE24_forest_blue_H__

/**
 * The Base24 Forest Blue scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_forest_blue;

#endif  /* BASE24_forest_blue_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_forest_blue_IMPLEMENTATION_ONCE
#define BASE24_forest_blue_IMPLEMENTATION_ONCE

const base16_scheme base24_forest_blue = {
    .name = "Forest Blue",
    .base = {
        { .r = 5, .g = 21, .b = 25 },
        { .r = 51, .g = 51, .b = 51 },
        { .r = 61, .g = 61, .b = 61 },
        { .r = 102, .g = 99, .b = 97 },
        { .r = 143, .g = 138, .b = 133 },
        { .r = 184, .g = 177, .b = 169 },
        { .r = 226, .g = 216, .b = 205 },
        { .r = 226, .g = 216, .b = 205 },
        { .r = 248, .g = 129, .b = 142 },
        { .r = 26, .g = 141, .b = 99 },
        { .r = 57, .g = 167, .b = 162 },
        { .r = 146, .g = 211, .b = 162 },
        { .r = 49, .g = 101, .b = 140 },
        { .r = 142, .g = 208, .b = 206 },
        { .r = 94, .g = 70, .b = 140 },
        { .r = 124, .g = 64, .b = 71 },

        /* Base24 */
        { .r = 40, .g = 40, .b = 40 },
        { .r = 20, .g = 20, .b = 20 },
        { .r = 251, .g = 61, .b = 102 },
        { .r = 47, .g = 200, .b = 89 },
        { .r = 107, .g = 180, .b = 141 },
        { .r = 96, .g = 150, .b = 191 },
        { .r = 57, .g = 167, .b = 162 },
        { .r = 126, .g = 98, .b = 179 }
    },
    .system = 24
};

#endif  /* BASE24_forest_blue_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
