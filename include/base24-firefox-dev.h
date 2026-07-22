/**
 * Base24 Firefox Dev 
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

#ifndef BASE24_firefox_dev_H__
#define BASE24_firefox_dev_H__

/**
 * The Base24 Firefox Dev scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_firefox_dev;

#endif  /* BASE24_firefox_dev_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_firefox_dev_IMPLEMENTATION_ONCE
#define BASE24_firefox_dev_IMPLEMENTATION_ONCE

const base16_scheme base24_firefox_dev = {
    .name = "Firefox Dev",
    .base = {
        { .r = 14, .g = 16, .b = 17 },
        { .r = 0, .g = 39, .b = 49 },
        { .r = 0, .g = 30, .b = 38 },
        { .r = 55, .g = 77, .b = 83 },
        { .r = 110, .g = 125, .b = 129 },
        { .r = 165, .g = 172, .b = 174 },
        { .r = 220, .g = 220, .b = 220 },
        { .r = 226, .g = 226, .b = 226 },
        { .r = 230, .g = 56, .b = 83 },
        { .r = 165, .g = 119, .b = 5 },
        { .r = 0, .g = 111, .b = 192 },
        { .r = 94, .g = 184, .b = 60 },
        { .r = 75, .g = 115, .b = 162 },
        { .r = 53, .g = 157, .b = 223 },
        { .r = 215, .g = 92, .b = 255 },
        { .r = 115, .g = 28, .b = 41 },

        /* Base24 */
        { .r = 0, .g = 20, .b = 25 },
        { .r = 0, .g = 10, .b = 12 },
        { .r = 225, .g = 0, .b = 63 },
        { .r = 204, .g = 147, .b = 8 },
        { .r = 29, .g = 144, .b = 0 },
        { .r = 0, .g = 87, .b = 148 },
        { .r = 0, .g = 111, .b = 192 },
        { .r = 162, .g = 0, .b = 218 }
    },
    .system = 24
};

#endif  /* BASE24_firefox_dev_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
