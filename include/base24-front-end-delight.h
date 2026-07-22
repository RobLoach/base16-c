/**
 * Base24 Front End Delight 
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

#ifndef BASE24_front_end_delight_H__
#define BASE24_front_end_delight_H__

/**
 * The Base24 Front End Delight scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_front_end_delight;

#endif  /* BASE24_front_end_delight_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_front_end_delight_IMPLEMENTATION_ONCE
#define BASE24_front_end_delight_IMPLEMENTATION_ONCE

const base16_scheme base24_front_end_delight = {
    .name = "Front End Delight",
    .base = {
        { .r = 27, .g = 27, .b = 29 },
        { .r = 36, .g = 36, .b = 38 },
        { .r = 94, .g = 172, .b = 108 },
        { .r = 113, .g = 172, .b = 124 },
        { .r = 133, .g = 172, .b = 140 },
        { .r = 152, .g = 172, .b = 156 },
        { .r = 172, .g = 172, .b = 172 },
        { .r = 139, .g = 115, .b = 90 },
        { .r = 248, .g = 80, .b = 26 },
        { .r = 249, .g = 118, .b = 29 },
        { .r = 51, .g = 147, .b = 201 },
        { .r = 86, .g = 87, .b = 70 },
        { .r = 59, .g = 160, .b = 165 },
        { .r = 44, .g = 112, .b = 183 },
        { .r = 240, .g = 45, .b = 78 },
        { .r = 124, .g = 40, .b = 13 },

        /* Base24 */
        { .r = 62, .g = 114, .b = 72 },
        { .r = 31, .g = 57, .b = 36 },
        { .r = 246, .g = 67, .b = 25 },
        { .r = 252, .g = 194, .b = 36 },
        { .r = 116, .g = 235, .b = 76 },
        { .r = 78, .g = 188, .b = 229 },
        { .r = 51, .g = 147, .b = 201 },
        { .r = 231, .g = 94, .b = 78 }
    },
    .system = 24
};

#endif  /* BASE24_front_end_delight_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
