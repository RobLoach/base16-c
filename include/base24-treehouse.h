/**
 * Base24 Treehouse 
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

#ifndef BASE24_treehouse_H__
#define BASE24_treehouse_H__

/**
 * The Base24 Treehouse scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_treehouse;

#endif  /* BASE24_treehouse_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_treehouse_IMPLEMENTATION_ONCE
#define BASE24_treehouse_IMPLEMENTATION_ONCE

const base16_scheme base24_treehouse = {
    .name = "Treehouse",
    .base = {
        { .r = 25, .g = 25, .b = 25 },
        { .r = 50, .g = 18, .b = 0 },
        { .r = 66, .g = 54, .b = 37 },
        { .r = 79, .g = 67, .b = 48 },
        { .r = 92, .g = 80, .b = 60 },
        { .r = 105, .g = 93, .b = 71 },
        { .r = 119, .g = 107, .b = 83 },
        { .r = 255, .g = 200, .b = 0 },
        { .r = 177, .g = 39, .b = 14 },
        { .r = 169, .g = 129, .b = 11 },
        { .r = 133, .g = 207, .b = 236 },
        { .r = 68, .g = 169, .b = 0 },
        { .r = 178, .g = 89, .b = 29 },
        { .r = 87, .g = 132, .b = 153 },
        { .r = 150, .g = 54, .b = 60 },
        { .r = 88, .g = 19, .b = 7 },

        /* Base24 */
        { .r = 44, .g = 36, .b = 24 },
        { .r = 22, .g = 18, .b = 12 },
        { .r = 237, .g = 92, .b = 32 },
        { .r = 241, .g = 183, .b = 49 },
        { .r = 85, .g = 242, .b = 55 },
        { .r = 240, .g = 125, .b = 20 },
        { .r = 133, .g = 207, .b = 236 },
        { .r = 224, .g = 75, .b = 90 }
    },
    .system = 24
};

#endif  /* BASE24_treehouse_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
