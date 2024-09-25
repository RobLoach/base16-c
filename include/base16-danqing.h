/**
 * Base16 DanQing 
 *
 * @author Wenhan Zhu (Cosmos) (zhuwenhan950913@gmail.com)
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
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_danqing_H__
#define BASE16_danqing_H__

/**
 * The Base16 DanQing scheme.
 *
 * @author Wenhan Zhu (Cosmos) (zhuwenhan950913@gmail.com)
 */
extern const base16_scheme base16_danqing;

#endif  /* BASE16_danqing_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_danqing_IMPLEMENTATION_ONCE
#define BASE16_danqing_IMPLEMENTATION_ONCE

const base16_scheme base16_danqing = {
    .name = "DanQing",
    .base = {
        { .r = 45, .g = 48, .b = 47 },
        { .r = 67, .g = 72, .b = 70 },
        { .r = 90, .g = 96, .b = 93 },
        { .r = 157, .g = 168, .b = 163 },
        { .r = 202, .g = 216, .b = 210 },
        { .r = 224, .g = 240, .b = 239 },
        { .r = 236, .g = 246, .b = 242 },
        { .r = 252, .g = 254, .b = 253 },
        { .r = 249, .g = 144, .b = 111 },
        { .r = 179, .g = 138, .b = 97 },
        { .r = 240, .g = 194, .b = 57 },
        { .r = 138, .g = 179, .b = 97 },
        { .r = 48, .g = 223, .b = 243 },
        { .r = 176, .g = 164, .b = 227 },
        { .r = 204, .g = 164, .b = 227 },
        { .r = 202, .g = 105, .b = 36 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 45, .g = 48, .b = 47 },
        { .r = 45, .g = 48, .b = 47 },
        { .r = 249, .g = 144, .b = 111 },
        { .r = 240, .g = 194, .b = 57 },
        { .r = 138, .g = 179, .b = 97 },
        { .r = 48, .g = 223, .b = 243 },
        { .r = 176, .g = 164, .b = 227 },
        { .r = 204, .g = 164, .b = 227 }
    },
    .system = 16
};

#endif  /* BASE16_danqing_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
