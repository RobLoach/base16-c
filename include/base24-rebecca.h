/**
 * Base24 Rebecca 
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

#ifndef BASE24_rebecca_H__
#define BASE24_rebecca_H__

/**
 * The Base24 Rebecca scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_rebecca;

#endif  /* BASE24_rebecca_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_rebecca_IMPLEMENTATION_ONCE
#define BASE24_rebecca_IMPLEMENTATION_ONCE

const base16_scheme base24_rebecca = {
    .name = "Rebecca",
    .base = {
        { .r = 41, .g = 42, .b = 68 },
        { .r = 18, .g = 19, .b = 29 },
        { .r = 102, .g = 102, .b = 153 },
        { .r = 133, .g = 133, .b = 172 },
        { .r = 164, .g = 164, .b = 192 },
        { .r = 195, .g = 195, .b = 212 },
        { .r = 227, .g = 226, .b = 232 },
        { .r = 243, .g = 242, .b = 248 },
        { .r = 221, .g = 118, .b = 85 },
        { .r = 242, .g = 231, .b = 183 },
        { .r = 105, .g = 191, .b = 250 },
        { .r = 4, .g = 219, .b = 180 },
        { .r = 86, .g = 211, .b = 193 },
        { .r = 122, .g = 165, .b = 255 },
        { .r = 190, .g = 155, .b = 248 },
        { .r = 110, .g = 59, .b = 42 },

        /* Base24 */
        { .r = 68, .g = 68, .b = 102 },
        { .r = 34, .g = 34, .b = 51 },
        { .r = 255, .g = 145, .b = 205 },
        { .r = 254, .g = 252, .b = 168 },
        { .r = 0, .g = 233, .b = 192 },
        { .r = 139, .g = 252, .b = 225 },
        { .r = 105, .g = 191, .b = 250 },
        { .r = 192, .g = 127, .b = 248 }
    },
    .system = 24
};

#endif  /* BASE24_rebecca_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
