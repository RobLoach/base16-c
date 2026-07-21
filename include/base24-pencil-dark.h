/**
 * Base24 Pencil Dark 
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

#ifndef BASE24_pencil_dark_H__
#define BASE24_pencil_dark_H__

/**
 * The Base24 Pencil Dark scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_pencil_dark;

#endif  /* BASE24_pencil_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_pencil_dark_IMPLEMENTATION_ONCE
#define BASE24_pencil_dark_IMPLEMENTATION_ONCE

const base16_scheme base24_pencil_dark = {
    .name = "Pencil Dark",
    .base = {
        { .r = 33, .g = 33, .b = 33 },
        { .r = 33, .g = 33, .b = 33 },
        { .r = 66, .g = 66, .b = 66 },
        { .r = 103, .g = 103, .b = 103 },
        { .r = 141, .g = 141, .b = 141 },
        { .r = 179, .g = 179, .b = 179 },
        { .r = 217, .g = 217, .b = 217 },
        { .r = 241, .g = 241, .b = 241 },
        { .r = 195, .g = 7, .b = 113 },
        { .r = 168, .g = 156, .b = 20 },
        { .r = 32, .g = 187, .b = 252 },
        { .r = 16, .g = 167, .b = 120 },
        { .r = 32, .g = 165, .b = 186 },
        { .r = 0, .g = 142, .b = 196 },
        { .r = 82, .g = 60, .b = 121 },
        { .r = 97, .g = 3, .b = 56 },

        /* Base24 */
        { .r = 44, .g = 44, .b = 44 },
        { .r = 22, .g = 22, .b = 22 },
        { .r = 251, .g = 0, .b = 122 },
        { .r = 243, .g = 228, .b = 48 },
        { .r = 95, .g = 215, .b = 175 },
        { .r = 79, .g = 184, .b = 204 },
        { .r = 32, .g = 187, .b = 252 },
        { .r = 104, .g = 85, .b = 222 }
    },
    .system = 24
};

#endif  /* BASE24_pencil_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
