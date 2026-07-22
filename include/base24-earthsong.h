/**
 * Base24 Earthsong 
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

#ifndef BASE24_earthsong_H__
#define BASE24_earthsong_H__

/**
 * The Base24 Earthsong scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_earthsong;

#endif  /* BASE24_earthsong_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_earthsong_IMPLEMENTATION_ONCE
#define BASE24_earthsong_IMPLEMENTATION_ONCE

const base16_scheme base24_earthsong = {
    .name = "Earthsong",
    .base = {
        { .r = 40, .g = 36, .b = 32 },
        { .r = 17, .g = 20, .b = 23 },
        { .r = 102, .g = 94, .b = 84 },
        { .r = 133, .g = 119, .b = 105 },
        { .r = 165, .g = 145, .b = 126 },
        { .r = 197, .g = 171, .b = 147 },
        { .r = 229, .g = 197, .b = 169 },
        { .r = 246, .g = 246, .b = 236 },
        { .r = 200, .g = 65, .b = 52 },
        { .r = 244, .g = 174, .b = 46 },
        { .r = 94, .g = 217, .b = 255 },
        { .r = 132, .g = 196, .b = 75 },
        { .r = 79, .g = 148, .b = 82 },
        { .r = 19, .g = 151, .b = 185 },
        { .r = 208, .g = 98, .b = 60 },
        { .r = 100, .g = 32, .b = 26 },

        /* Base24 */
        { .r = 68, .g = 62, .b = 56 },
        { .r = 34, .g = 31, .b = 28 },
        { .r = 255, .g = 100, .b = 89 },
        { .r = 223, .g = 213, .b = 97 },
        { .r = 151, .g = 224, .b = 53 },
        { .r = 131, .g = 239, .b = 136 },
        { .r = 94, .g = 217, .b = 255 },
        { .r = 255, .g = 145, .b = 104 }
    },
    .system = 24
};

#endif  /* BASE24_earthsong_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
