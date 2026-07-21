/**
 * Base24 Deep Oceanic Next 
 *
 * @author spearkkk (https://github.com/spearkkk)
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

#ifndef BASE24_deep_oceanic_next_H__
#define BASE24_deep_oceanic_next_H__

/**
 * The Base24 Deep Oceanic Next scheme.
 *
 * @author spearkkk (https://github.com/spearkkk)
 */
extern const base16_scheme base24_deep_oceanic_next;

#endif  /* BASE24_deep_oceanic_next_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_deep_oceanic_next_IMPLEMENTATION_ONCE
#define BASE24_deep_oceanic_next_IMPLEMENTATION_ONCE

const base16_scheme base24_deep_oceanic_next = {
    .name = "Deep Oceanic Next",
    .base = {
        { .r = 0, .g = 28, .b = 31 },
        { .r = 0, .g = 41, .b = 49 },
        { .r = 0, .g = 54, .b = 64 },
        { .r = 0, .g = 72, .b = 82 },
        { .r = 0, .g = 147, .b = 163 },
        { .r = 212, .g = 225, .b = 232 },
        { .r = 224, .g = 233, .b = 239 },
        { .r = 242, .g = 247, .b = 249 },
        { .r = 211, .g = 70, .b = 77 },
        { .r = 227, .g = 117, .b = 82 },
        { .r = 243, .g = 184, .b = 99 },
        { .r = 99, .g = 183, .b = 132 },
        { .r = 79, .g = 183, .b = 174 },
        { .r = 86, .g = 140, .b = 207 },
        { .r = 139, .g = 102, .b = 214 },
        { .r = 208, .g = 101, .b = 142 },

        /* Base24 */
        { .r = 31, .g = 38, .b = 40 },
        { .r = 42, .g = 47, .b = 48 },
        { .r = 255, .g = 102, .b = 112 },
        { .r = 255, .g = 224, .b = 138 },
        { .r = 114, .g = 225, .b = 166 },
        { .r = 77, .g = 227, .b = 227 },
        { .r = 92, .g = 174, .b = 255 },
        { .r = 183, .g = 136, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_deep_oceanic_next_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
