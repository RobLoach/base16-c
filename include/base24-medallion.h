/**
 * Base24 Medallion 
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

#ifndef BASE24_medallion_H__
#define BASE24_medallion_H__

/**
 * The Base24 Medallion scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_medallion;

#endif  /* BASE24_medallion_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_medallion_IMPLEMENTATION_ONCE
#define BASE24_medallion_IMPLEMENTATION_ONCE

const base16_scheme base24_medallion = {
    .name = "Medallion",
    .base = {
        { .r = 29, .g = 24, .b = 8 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 94, .g = 81, .b = 24 },
        { .r = 120, .g = 109, .b = 56 },
        { .r = 147, .g = 137, .b = 88 },
        { .r = 174, .g = 165, .b = 120 },
        { .r = 201, .g = 193, .b = 153 },
        { .r = 254, .g = 213, .b = 151 },
        { .r = 181, .g = 76, .b = 0 },
        { .r = 210, .g = 189, .b = 37 },
        { .r = 171, .g = 184, .b = 255 },
        { .r = 124, .g = 138, .b = 22 },
        { .r = 144, .g = 107, .b = 37 },
        { .r = 96, .g = 107, .b = 175 },
        { .r = 139, .g = 89, .b = 144 },
        { .r = 90, .g = 38, .b = 0 },

        /* Base24 */
        { .r = 62, .g = 54, .b = 16 },
        { .r = 31, .g = 27, .b = 8 },
        { .r = 255, .g = 145, .b = 72 },
        { .r = 255, .g = 228, .b = 73 },
        { .r = 177, .g = 201, .b = 58 },
        { .r = 255, .g = 187, .b = 81 },
        { .r = 171, .g = 184, .b = 255 },
        { .r = 254, .g = 159, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_medallion_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
