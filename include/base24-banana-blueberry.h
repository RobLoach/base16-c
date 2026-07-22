/**
 * Base24 Banana Blueberry 
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

#ifndef BASE24_banana_blueberry_H__
#define BASE24_banana_blueberry_H__

/**
 * The Base24 Banana Blueberry scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_banana_blueberry;

#endif  /* BASE24_banana_blueberry_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_banana_blueberry_IMPLEMENTATION_ONCE
#define BASE24_banana_blueberry_IMPLEMENTATION_ONCE

const base16_scheme base24_banana_blueberry = {
    .name = "Banana Blueberry",
    .base = {
        { .r = 25, .g = 19, .b = 34 },
        { .r = 22, .g = 20, .b = 30 },
        { .r = 72, .g = 81, .b = 97 },
        { .r = 114, .g = 121, .b = 133 },
        { .r = 156, .g = 161, .b = 169 },
        { .r = 198, .g = 201, .b = 205 },
        { .r = 241, .g = 241, .b = 241 },
        { .r = 254, .g = 255, .b = 255 },
        { .r = 255, .g = 106, .b = 126 },
        { .r = 229, .g = 198, .b = 47 },
        { .r = 145, .g = 255, .b = 243 },
        { .r = 0, .g = 188, .b = 155 },
        { .r = 85, .g = 182, .b = 193 },
        { .r = 34, .g = 232, .b = 223 },
        { .r = 220, .g = 57, .b = 105 },
        { .r = 127, .g = 53, .b = 63 },

        /* Base24 */
        { .r = 48, .g = 54, .b = 64 },
        { .r = 24, .g = 27, .b = 32 },
        { .r = 253, .g = 158, .b = 161 },
        { .r = 249, .g = 228, .b = 106 },
        { .r = 151, .g = 195, .b = 120 },
        { .r = 188, .g = 242, .b = 254 },
        { .r = 145, .g = 255, .b = 243 },
        { .r = 218, .g = 112, .b = 213 }
    },
    .system = 24
};

#endif  /* BASE24_banana_blueberry_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
