/**
 * Base24 Kibble 
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

#ifndef TINTED_C_COLOR_H__
#define TINTED_C_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct tinted_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} tinted_color;

#endif /* TINTED_C_COLOR_H__ */

#ifndef TINTED_C_SCHEME_H__
#define TINTED_C_SCHEME_H__

/**
 * A Tinted Base16 or Base24 Scheme.
 */
typedef struct tinted_scheme {
    const char *name; /** The name of the scheme. */
    tinted_color base[24]; /** An array of the colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} tinted_scheme;

#endif  /* TINTED_C_SCHEME_H__ */

#ifndef BASE24_kibble_H__
#define BASE24_kibble_H__

/**
 * The Base24 Kibble scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_kibble;

#endif  /* BASE24_kibble_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_kibble_IMPLEMENTATION_ONCE
#define BASE24_kibble_IMPLEMENTATION_ONCE

const tinted_scheme base24_kibble = {
    .name = "Kibble",
    .base = {
        { .r = 14, .g = 16, .b = 10 },
        { .r = 77, .g = 77, .b = 77 },
        { .r = 90, .g = 90, .b = 90 },
        { .r = 124, .g = 119, .b = 124 },
        { .r = 158, .g = 149, .b = 158 },
        { .r = 192, .g = 179, .b = 192 },
        { .r = 226, .g = 209, .b = 227 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 199, .g = 0, .b = 49 },
        { .r = 216, .g = 227, .b = 14 },
        { .r = 151, .g = 164, .b = 247 },
        { .r = 41, .g = 207, .b = 19 },
        { .r = 7, .g = 152, .b = 171 },
        { .r = 52, .g = 73, .b = 209 },
        { .r = 132, .g = 0, .b = 255 },
        { .r = 99, .g = 0, .b = 24 },

        /* Base24 */
        { .r = 60, .g = 60, .b = 60 },
        { .r = 30, .g = 30, .b = 30 },
        { .r = 240, .g = 21, .b = 120 },
        { .r = 243, .g = 247, .b = 158 },
        { .r = 108, .g = 224, .b = 92 },
        { .r = 104, .g = 242, .b = 224 },
        { .r = 151, .g = 164, .b = 247 },
        { .r = 196, .g = 149, .b = 240 }
    },
    .system = 24
};

#endif  /* BASE24_kibble_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */
