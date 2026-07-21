/**
 * Base24 Bluloco Dark 
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

#ifndef BASE24_bluloco_dark_H__
#define BASE24_bluloco_dark_H__

/**
 * The Base24 Bluloco Dark scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_bluloco_dark;

#endif  /* BASE24_bluloco_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_bluloco_dark_IMPLEMENTATION_ONCE
#define BASE24_bluloco_dark_IMPLEMENTATION_ONCE

const base16_scheme base24_bluloco_dark = {
    .name = "Bluloco Dark",
    .base = {
        { .r = 30, .g = 32, .b = 39 },
        { .r = 73, .g = 79, .b = 92 },
        { .r = 96, .g = 105, .b = 122 },
        { .r = 123, .g = 132, .b = 148 },
        { .r = 150, .g = 159, .b = 175 },
        { .r = 177, .g = 186, .b = 201 },
        { .r = 204, .g = 213, .b = 228 },
        { .r = 254, .g = 254, .b = 254 },
        { .r = 247, .g = 16, .b = 65 },
        { .r = 252, .g = 126, .b = 87 },
        { .r = 24, .g = 159, .b = 253 },
        { .r = 35, .g = 151, .b = 74 },
        { .r = 54, .g = 111, .b = 153 },
        { .r = 40, .g = 90, .b = 254 },
        { .r = 140, .g = 98, .b = 253 },
        { .r = 123, .g = 8, .b = 32 },

        /* Base24 */
        { .r = 64, .g = 70, .b = 81 },
        { .r = 32, .g = 35, .b = 40 },
        { .r = 251, .g = 73, .b = 109 },
        { .r = 246, .g = 189, .b = 71 },
        { .r = 55, .g = 188, .b = 88 },
        { .r = 79, .g = 171, .b = 173 },
        { .r = 24, .g = 159, .b = 253 },
        { .r = 251, .g = 87, .b = 246 }
    },
    .system = 24
};

#endif  /* BASE24_bluloco_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
