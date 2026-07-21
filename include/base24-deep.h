/**
 * Base24 deep 
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

#ifndef BASE24_deep_H__
#define BASE24_deep_H__

/**
 * The Base24 deep scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_deep;

#endif  /* BASE24_deep_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_deep_IMPLEMENTATION_ONCE
#define BASE24_deep_IMPLEMENTATION_ONCE

const base16_scheme base24_deep = {
    .name = "deep",
    .base = {
        { .r = 8, .g = 8, .b = 8 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 83, .g = 83, .b = 83 },
        { .r = 118, .g = 118, .b = 118 },
        { .r = 153, .g = 153, .b = 153 },
        { .r = 188, .g = 188, .b = 188 },
        { .r = 223, .g = 223, .b = 223 },
        { .r = 255, .g = 254, .b = 254 },
        { .r = 214, .g = 0, .b = 5 },
        { .r = 217, .g = 188, .b = 37 },
        { .r = 159, .g = 168, .b = 254 },
        { .r = 28, .g = 216, .b = 21 },
        { .r = 79, .g = 210, .b = 217 },
        { .r = 86, .g = 101, .b = 254 },
        { .r = 175, .g = 81, .b = 217 },
        { .r = 107, .g = 0, .b = 2 },

        /* Base24 */
        { .r = 55, .g = 55, .b = 55 },
        { .r = 27, .g = 27, .b = 27 },
        { .r = 251, .g = 0, .b = 6 },
        { .r = 254, .g = 220, .b = 43 },
        { .r = 33, .g = 254, .b = 23 },
        { .r = 140, .g = 249, .b = 254 },
        { .r = 159, .g = 168, .b = 254 },
        { .r = 224, .g = 153, .b = 254 }
    },
    .system = 24
};

#endif  /* BASE24_deep_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
