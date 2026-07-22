/**
 * Base24 Argonaut 
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

#ifndef BASE24_argonaut_H__
#define BASE24_argonaut_H__

/**
 * The Base24 Argonaut scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_argonaut;

#endif  /* BASE24_argonaut_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_argonaut_IMPLEMENTATION_ONCE
#define BASE24_argonaut_IMPLEMENTATION_ONCE

const base16_scheme base24_argonaut = {
    .name = "Argonaut",
    .base = {
        { .r = 13, .g = 15, .b = 24 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 68, .g = 68, .b = 68 },
        { .r = 114, .g = 114, .b = 114 },
        { .r = 161, .g = 161, .b = 161 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 0, .b = 15 },
        { .r = 255, .g = 185, .b = 0 },
        { .r = 0, .g = 146, .b = 255 },
        { .r = 140, .g = 224, .b = 10 },
        { .r = 0, .g = 215, .b = 235 },
        { .r = 0, .g = 141, .b = 248 },
        { .r = 108, .g = 67, .b = 165 },
        { .r = 127, .g = 0, .b = 7 },

        /* Base24 */
        { .r = 45, .g = 45, .b = 45 },
        { .r = 22, .g = 22, .b = 22 },
        { .r = 255, .g = 39, .b = 63 },
        { .r = 255, .g = 209, .b = 65 },
        { .r = 171, .g = 224, .b = 90 },
        { .r = 103, .g = 255, .b = 239 },
        { .r = 0, .g = 146, .b = 255 },
        { .r = 154, .g = 95, .b = 235 }
    },
    .system = 24
};

#endif  /* BASE24_argonaut_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
