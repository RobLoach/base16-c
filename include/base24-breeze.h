/**
 * Base24 Breeze 
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

#ifndef BASE24_breeze_H__
#define BASE24_breeze_H__

/**
 * The Base24 Breeze scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_breeze;

#endif  /* BASE24_breeze_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_breeze_IMPLEMENTATION_ONCE
#define BASE24_breeze_IMPLEMENTATION_ONCE

const base16_scheme base24_breeze = {
    .name = "Breeze",
    .base = {
        { .r = 49, .g = 54, .b = 59 },
        { .r = 49, .g = 54, .b = 59 },
        { .r = 127, .g = 140, .b = 141 },
        { .r = 155, .g = 165, .b = 166 },
        { .r = 183, .g = 190, .b = 191 },
        { .r = 211, .g = 215, .b = 216 },
        { .r = 239, .g = 240, .b = 241 },
        { .r = 252, .g = 252, .b = 252 },
        { .r = 237, .g = 21, .b = 21 },
        { .r = 246, .g = 116, .b = 0 },
        { .r = 61, .g = 174, .b = 233 },
        { .r = 17, .g = 209, .b = 22 },
        { .r = 26, .g = 188, .b = 156 },
        { .r = 29, .g = 153, .b = 243 },
        { .r = 155, .g = 89, .b = 182 },
        { .r = 118, .g = 10, .b = 10 },

        /* Base24 */
        { .r = 84, .g = 93, .b = 94 },
        { .r = 42, .g = 46, .b = 47 },
        { .r = 192, .g = 57, .b = 43 },
        { .r = 253, .g = 188, .b = 75 },
        { .r = 28, .g = 220, .b = 154 },
        { .r = 22, .g = 160, .b = 133 },
        { .r = 61, .g = 174, .b = 233 },
        { .r = 142, .g = 68, .b = 173 }
    },
    .system = 24
};

#endif  /* BASE24_breeze_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
