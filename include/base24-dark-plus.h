/**
 * Base24 Dark Plus 
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

#ifndef BASE24_dark_plus_H__
#define BASE24_dark_plus_H__

/**
 * The Base24 Dark Plus scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_dark_plus;

#endif  /* BASE24_dark_plus_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_dark_plus_IMPLEMENTATION_ONCE
#define BASE24_dark_plus_IMPLEMENTATION_ONCE

const base16_scheme base24_dark_plus = {
    .name = "Dark Plus",
    .base = {
        { .r = 14, .g = 14, .b = 14 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 102, .g = 102, .b = 102 },
        { .r = 133, .g = 133, .b = 133 },
        { .r = 165, .g = 165, .b = 165 },
        { .r = 197, .g = 197, .b = 197 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 205, .g = 49, .b = 49 },
        { .r = 229, .g = 229, .b = 16 },
        { .r = 59, .g = 142, .b = 234 },
        { .r = 13, .g = 188, .b = 121 },
        { .r = 17, .g = 168, .b = 205 },
        { .r = 36, .g = 114, .b = 200 },
        { .r = 188, .g = 63, .b = 188 },
        { .r = 102, .g = 24, .b = 24 },

        /* Base24 */
        { .r = 68, .g = 68, .b = 68 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 241, .g = 76, .b = 76 },
        { .r = 245, .g = 245, .b = 67 },
        { .r = 35, .g = 209, .b = 139 },
        { .r = 41, .g = 184, .b = 219 },
        { .r = 59, .g = 142, .b = 234 },
        { .r = 214, .g = 112, .b = 214 }
    },
    .system = 24
};

#endif  /* BASE24_dark_plus_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
