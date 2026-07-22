/**
 * Base24 Blazer 
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

#ifndef BASE24_blazer_H__
#define BASE24_blazer_H__

/**
 * The Base24 Blazer scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_blazer;

#endif  /* BASE24_blazer_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_blazer_IMPLEMENTATION_ONCE
#define BASE24_blazer_IMPLEMENTATION_ONCE

const base16_scheme base24_blazer = {
    .name = "Blazer",
    .base = {
        { .r = 13, .g = 25, .b = 38 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 38, .g = 38, .b = 38 },
        { .r = 82, .g = 82, .b = 82 },
        { .r = 127, .g = 127, .b = 127 },
        { .r = 172, .g = 172, .b = 172 },
        { .r = 217, .g = 217, .b = 217 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 184, .g = 122, .b = 122 },
        { .r = 184, .g = 184, .b = 122 },
        { .r = 189, .g = 189, .b = 219 },
        { .r = 122, .g = 184, .b = 122 },
        { .r = 122, .g = 184, .b = 184 },
        { .r = 122, .g = 122, .b = 184 },
        { .r = 184, .g = 122, .b = 184 },
        { .r = 92, .g = 61, .b = 61 },

        /* Base24 */
        { .r = 25, .g = 25, .b = 25 },
        { .r = 12, .g = 12, .b = 12 },
        { .r = 219, .g = 189, .b = 189 },
        { .r = 219, .g = 219, .b = 189 },
        { .r = 189, .g = 219, .b = 189 },
        { .r = 189, .g = 219, .b = 219 },
        { .r = 189, .g = 189, .b = 219 },
        { .r = 219, .g = 189, .b = 219 }
    },
    .system = 24
};

#endif  /* BASE24_blazer_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
