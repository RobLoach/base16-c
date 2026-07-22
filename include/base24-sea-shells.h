/**
 * Base24 Sea Shells 
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

#ifndef BASE24_sea_shells_H__
#define BASE24_sea_shells_H__

/**
 * The Base24 Sea Shells scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_sea_shells;

#endif  /* BASE24_sea_shells_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_sea_shells_IMPLEMENTATION_ONCE
#define BASE24_sea_shells_IMPLEMENTATION_ONCE

const base16_scheme base24_sea_shells = {
    .name = "Sea Shells",
    .base = {
        { .r = 8, .g = 19, .b = 26 },
        { .r = 23, .g = 56, .b = 76 },
        { .r = 66, .g = 75, .b = 82 },
        { .r = 105, .g = 102, .b = 96 },
        { .r = 144, .g = 129, .b = 111 },
        { .r = 183, .g = 156, .b = 126 },
        { .r = 222, .g = 184, .b = 141 },
        { .r = 254, .g = 227, .b = 205 },
        { .r = 209, .g = 80, .b = 35 },
        { .r = 252, .g = 160, .b = 47 },
        { .r = 27, .g = 188, .b = 221 },
        { .r = 2, .g = 124, .b = 155 },
        { .r = 80, .g = 163, .b = 181 },
        { .r = 30, .g = 73, .b = 80 },
        { .r = 104, .g = 211, .b = 241 },
        { .r = 104, .g = 40, .b = 17 },

        /* Base24 */
        { .r = 44, .g = 50, .b = 54 },
        { .r = 22, .g = 25, .b = 27 },
        { .r = 211, .g = 134, .b = 119 },
        { .r = 253, .g = 210, .b = 158 },
        { .r = 97, .g = 140, .b = 152 },
        { .r = 134, .g = 171, .b = 179 },
        { .r = 27, .g = 188, .b = 221 },
        { .r = 187, .g = 227, .b = 238 }
    },
    .system = 24
};

#endif  /* BASE24_sea_shells_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
