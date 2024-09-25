/**
 * Base24 Deep Oceanic Next 
 *
 * @author spearkkk (https://github.com/spearkkk/deep-oceanic-next)
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

#ifndef BASE16_deep_oceanic_next_H__
#define BASE16_deep_oceanic_next_H__

/**
 * The Base24 Deep Oceanic Next scheme.
 *
 * @author spearkkk (https://github.com/spearkkk/deep-oceanic-next)
 */
extern const base16_scheme base24_deep_oceanic_next;

#endif  /* BASE16_deep_oceanic_next_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_deep_oceanic_next_IMPLEMENTATION_ONCE
#define BASE24_deep_oceanic_next_IMPLEMENTATION_ONCE

const base16_scheme base24_deep_oceanic_next = {
    .name = "Deep Oceanic Next",
    .base = {
        { .r = 0, .g = 59, .b = 70 },
        { .r = 0, .g = 79, .b = 94 },
        { .r = 0, .g = 99, .b = 116 },
        { .r = 0, .g = 122, .b = 138 },
        { .r = 0, .g = 147, .b = 163 },
        { .r = 220, .g = 227, .b = 232 },
        { .r = 230, .g = 235, .b = 240 },
        { .r = 240, .g = 245, .b = 245 },
        { .r = 230, .g = 69, .b = 75 },
        { .r = 255, .g = 106, .b = 75 },
        { .r = 255, .g = 204, .b = 102 },
        { .r = 133, .g = 181, .b = 122 },
        { .r = 77, .g = 166, .b = 166 },
        { .r = 58, .g = 130, .b = 230 },
        { .r = 140, .g = 77, .b = 230 },
        { .r = 230, .g = 115, .b = 163 },

        /* Base24 */
        { .r = 0, .g = 17, .b = 20 },
        { .r = 0, .g = 10, .b = 13 },
        { .r = 255, .g = 90, .b = 97 },
        { .r = 255, .g = 221, .b = 128 },
        { .r = 153, .g = 216, .b = 160 },
        { .r = 102, .g = 204, .b = 204 },
        { .r = 77, .g = 166, .b = 255 },
        { .r = 163, .g = 102, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_deep_oceanic_next_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
