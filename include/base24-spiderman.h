/**
 * Base24 Spiderman 
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

#ifndef BASE24_spiderman_H__
#define BASE24_spiderman_H__

/**
 * The Base24 Spiderman scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_spiderman;

#endif  /* BASE24_spiderman_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_spiderman_IMPLEMENTATION_ONCE
#define BASE24_spiderman_IMPLEMENTATION_ONCE

const base16_scheme base24_spiderman = {
    .name = "Spiderman",
    .base = {
        { .r = 27, .g = 29, .b = 30 },
        { .r = 27, .g = 29, .b = 30 },
        { .r = 80, .g = 83, .b = 84 },
        { .r = 123, .g = 125, .b = 124 },
        { .r = 167, .g = 168, .b = 165 },
        { .r = 211, .g = 211, .b = 205 },
        { .r = 255, .g = 254, .b = 246 },
        { .r = 254, .g = 255, .b = 249 },
        { .r = 230, .g = 7, .b = 18 },
        { .r = 226, .g = 70, .b = 85 },
        { .r = 29, .g = 79, .b = 255 },
        { .r = 226, .g = 40, .b = 40 },
        { .r = 50, .g = 85, .b = 255 },
        { .r = 43, .g = 63, .b = 255 },
        { .r = 36, .g = 53, .b = 219 },
        { .r = 115, .g = 3, .b = 9 },

        /* Base24 */
        { .r = 53, .g = 55, .b = 56 },
        { .r = 26, .g = 27, .b = 28 },
        { .r = 255, .g = 3, .b = 37 },
        { .r = 254, .g = 57, .b = 53 },
        { .r = 255, .g = 50, .b = 56 },
        { .r = 96, .g = 131, .b = 255 },
        { .r = 29, .g = 79, .b = 255 },
        { .r = 115, .g = 123, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_spiderman_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
