/**
 * Base24 Thayer Bright 
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

#ifndef BASE24_thayer_bright_H__
#define BASE24_thayer_bright_H__

/**
 * The Base24 Thayer Bright scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_thayer_bright;

#endif  /* BASE24_thayer_bright_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_thayer_bright_IMPLEMENTATION_ONCE
#define BASE24_thayer_bright_IMPLEMENTATION_ONCE

const base16_scheme base24_thayer_bright = {
    .name = "Thayer Bright",
    .base = {
        { .r = 27, .g = 29, .b = 30 },
        { .r = 27, .g = 29, .b = 30 },
        { .r = 80, .g = 83, .b = 84 },
        { .r = 111, .g = 113, .b = 112 },
        { .r = 142, .g = 143, .b = 141 },
        { .r = 173, .g = 173, .b = 169 },
        { .r = 204, .g = 204, .b = 198 },
        { .r = 248, .g = 248, .b = 242 },
        { .r = 249, .g = 38, .b = 114 },
        { .r = 243, .g = 253, .b = 33 },
        { .r = 63, .g = 120, .b = 255 },
        { .r = 77, .g = 247, .b = 64 },
        { .r = 55, .g = 200, .b = 180 },
        { .r = 38, .g = 86, .b = 214 },
        { .r = 140, .g = 84, .b = 254 },
        { .r = 124, .g = 19, .b = 57 },

        /* Base24 */
        { .r = 53, .g = 55, .b = 56 },
        { .r = 26, .g = 27, .b = 28 },
        { .r = 255, .g = 89, .b = 149 },
        { .r = 254, .g = 237, .b = 108 },
        { .r = 182, .g = 227, .b = 84 },
        { .r = 35, .g = 206, .b = 212 },
        { .r = 63, .g = 120, .b = 255 },
        { .r = 158, .g = 111, .b = 254 }
    },
    .system = 24
};

#endif  /* BASE24_thayer_bright_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
