/**
 * Base24 Misterioso 
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

#ifndef BASE24_misterioso_H__
#define BASE24_misterioso_H__

/**
 * The Base24 Misterioso scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_misterioso;

#endif  /* BASE24_misterioso_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_misterioso_IMPLEMENTATION_ONCE
#define BASE24_misterioso_IMPLEMENTATION_ONCE

const base16_scheme base24_misterioso = {
    .name = "Misterioso",
    .base = {
        { .r = 45, .g = 55, .b = 67 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 120, .g = 120, .b = 119 },
        { .r = 155, .g = 155, .b = 154 },
        { .r = 190, .g = 190, .b = 189 },
        { .r = 225, .g = 225, .b = 224 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 66, .b = 66 },
        { .r = 255, .g = 173, .b = 41 },
        { .r = 35, .g = 215, .b = 215 },
        { .r = 116, .g = 175, .b = 104 },
        { .r = 35, .g = 215, .b = 215 },
        { .r = 51, .g = 143, .b = 134 },
        { .r = 148, .g = 19, .b = 229 },
        { .r = 127, .g = 33, .b = 33 },

        /* Base24 */
        { .r = 56, .g = 56, .b = 56 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 255, .g = 50, .b = 66 },
        { .r = 255, .g = 185, .b = 41 },
        { .r = 116, .g = 205, .b = 104 },
        { .r = 0, .g = 237, .b = 225 },
        { .r = 35, .g = 215, .b = 215 },
        { .r = 255, .g = 55, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_misterioso_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
