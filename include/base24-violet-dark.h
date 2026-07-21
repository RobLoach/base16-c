/**
 * Base24 Violet Dark 
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

#ifndef BASE24_violet_dark_H__
#define BASE24_violet_dark_H__

/**
 * The Base24 Violet Dark scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_violet_dark;

#endif  /* BASE24_violet_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_violet_dark_IMPLEMENTATION_ONCE
#define BASE24_violet_dark_IMPLEMENTATION_ONCE

const base16_scheme base24_violet_dark = {
    .name = "Violet Dark",
    .base = {
        { .r = 27, .g = 29, .b = 31 },
        { .r = 86, .g = 89, .b = 92 },
        { .r = 69, .g = 72, .b = 75 },
        { .r = 101, .g = 103, .b = 103 },
        { .r = 134, .g = 134, .b = 131 },
        { .r = 167, .g = 165, .b = 159 },
        { .r = 200, .g = 197, .b = 188 },
        { .r = 200, .g = 197, .b = 189 },
        { .r = 201, .g = 76, .b = 34 },
        { .r = 180, .g = 136, .b = 29 },
        { .r = 32, .g = 117, .b = 199 },
        { .r = 133, .g = 152, .b = 28 },
        { .r = 50, .g = 161, .b = 152 },
        { .r = 46, .g = 139, .b = 206 },
        { .r = 209, .g = 58, .b = 130 },
        { .r = 100, .g = 38, .b = 17 },

        /* Base24 */
        { .r = 46, .g = 48, .b = 50 },
        { .r = 23, .g = 24, .b = 25 },
        { .r = 189, .g = 54, .b = 18 },
        { .r = 165, .g = 119, .b = 4 },
        { .r = 114, .g = 137, .b = 3 },
        { .r = 37, .g = 145, .b = 133 },
        { .r = 32, .g = 117, .b = 199 },
        { .r = 198, .g = 27, .b = 110 }
    },
    .system = 24
};

#endif  /* BASE24_violet_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
