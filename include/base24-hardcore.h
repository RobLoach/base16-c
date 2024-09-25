/**
 * Base24 Hardcore 
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
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_hardcore_H__
#define BASE16_hardcore_H__

/**
 * The Base24 Hardcore scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_hardcore;

#endif  /* BASE16_hardcore_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_hardcore_IMPLEMENTATION_ONCE
#define BASE24_hardcore_IMPLEMENTATION_ONCE

const base16_scheme base24_hardcore = {
    .name = "Hardcore",
    .base = {
        { .r = 17, .g = 17, .b = 17 },
        { .r = 20, .g = 20, .b = 20 },
        { .r = 65, .g = 65, .b = 65 },
        { .r = 99, .g = 99, .b = 99 },
        { .r = 134, .g = 134, .b = 134 },
        { .r = 169, .g = 169, .b = 169 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 85, .b = 85 },
        { .r = 255, .g = 204, .b = 51 },
        { .r = 51, .g = 187, .b = 255 },
        { .r = 152, .g = 236, .b = 101 },
        { .r = 136, .g = 221, .b = 255 },
        { .r = 0, .g = 170, .b = 255 },
        { .r = 170, .g = 136, .b = 255 },
        { .r = 127, .g = 42, .b = 42 },

        /* Base24 */
        { .r = 10, .g = 10, .b = 10 },
        { .r = 6, .g = 6, .b = 6 },
        { .r = 255, .g = 136, .b = 136 },
        { .r = 255, .g = 217, .b = 102 },
        { .r = 182, .g = 242, .b = 146 },
        { .r = 187, .g = 236, .b = 255 },
        { .r = 51, .g = 187, .b = 255 },
        { .r = 206, .g = 187, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_hardcore_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
