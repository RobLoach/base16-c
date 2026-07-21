/**
 * Base24 Ultra Violet 
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

#ifndef BASE24_ultra_violet_H__
#define BASE24_ultra_violet_H__

/**
 * The Base24 Ultra Violet scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_ultra_violet;

#endif  /* BASE24_ultra_violet_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_ultra_violet_IMPLEMENTATION_ONCE
#define BASE24_ultra_violet_IMPLEMENTATION_ONCE

const base16_scheme base24_ultra_violet = {
    .name = "Ultra Violet",
    .base = {
        { .r = 36, .g = 39, .b = 40 },
        { .r = 35, .g = 38, .b = 40 },
        { .r = 98, .g = 101, .b = 102 },
        { .r = 129, .g = 132, .b = 132 },
        { .r = 161, .g = 163, .b = 163 },
        { .r = 193, .g = 194, .b = 194 },
        { .r = 225, .g = 225, .b = 225 },
        { .r = 249, .g = 249, .b = 244 },
        { .r = 255, .g = 0, .b = 144 },
        { .r = 255, .g = 247, .b = 39 },
        { .r = 127, .g = 235, .b = 255 },
        { .r = 181, .g = 255, .b = 0 },
        { .r = 14, .g = 255, .b = 187 },
        { .r = 71, .g = 223, .b = 251 },
        { .r = 214, .g = 48, .b = 255 },
        { .r = 127, .g = 0, .b = 72 },

        /* Base24 */
        { .r = 65, .g = 67, .b = 68 },
        { .r = 32, .g = 33, .b = 34 },
        { .r = 251, .g = 87, .b = 180 },
        { .r = 235, .g = 223, .b = 134 },
        { .r = 222, .g = 255, .b = 139 },
        { .r = 104, .g = 252, .b = 210 },
        { .r = 127, .g = 235, .b = 255 },
        { .r = 230, .g = 129, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_ultra_violet_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
