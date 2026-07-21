/**
 * Base24 Hopscotch 
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

#ifndef BASE24_hopscotch_H__
#define BASE24_hopscotch_H__

/**
 * The Base24 Hopscotch scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_hopscotch;

#endif  /* BASE24_hopscotch_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_hopscotch_IMPLEMENTATION_ONCE
#define BASE24_hopscotch_IMPLEMENTATION_ONCE

const base16_scheme base24_hopscotch = {
    .name = "Hopscotch",
    .base = {
        { .r = 50, .g = 41, .b = 49 },
        { .r = 50, .g = 41, .b = 49 },
        { .r = 121, .g = 115, .b = 121 },
        { .r = 137, .g = 131, .b = 136 },
        { .r = 153, .g = 148, .b = 152 },
        { .r = 169, .g = 164, .b = 168 },
        { .r = 185, .g = 181, .b = 184 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 221, .g = 70, .b = 76 },
        { .r = 253, .g = 204, .b = 89 },
        { .r = 152, .g = 148, .b = 152 },
        { .r = 143, .g = 193, .b = 62 },
        { .r = 20, .g = 155, .b = 147 },
        { .r = 18, .g = 144, .b = 191 },
        { .r = 200, .g = 94, .b = 124 },
        { .r = 110, .g = 35, .b = 38 },

        /* Base24 */
        { .r = 80, .g = 76, .b = 80 },
        { .r = 40, .g = 38, .b = 40 },
        { .r = 253, .g = 139, .b = 25 },
        { .r = 92, .g = 84, .b = 91 },
        { .r = 67, .g = 59, .b = 66 },
        { .r = 179, .g = 53, .b = 8 },
        { .r = 152, .g = 148, .b = 152 },
        { .r = 213, .g = 211, .b = 213 }
    },
    .system = 24
};

#endif  /* BASE24_hopscotch_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
