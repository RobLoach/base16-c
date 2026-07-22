/**
 * Base24 Zenburn 
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

#ifndef BASE24_zenburn_H__
#define BASE24_zenburn_H__

/**
 * The Base24 Zenburn scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_zenburn;

#endif  /* BASE24_zenburn_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_zenburn_IMPLEMENTATION_ONCE
#define BASE24_zenburn_IMPLEMENTATION_ONCE

const base16_scheme base24_zenburn = {
    .name = "Zenburn",
    .base = {
        { .r = 63, .g = 63, .b = 63 },
        { .r = 77, .g = 77, .b = 77 },
        { .r = 112, .g = 144, .b = 128 },
        { .r = 139, .g = 163, .b = 147 },
        { .r = 166, .g = 182, .b = 166 },
        { .r = 193, .g = 201, .b = 185 },
        { .r = 220, .g = 220, .b = 204 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 112, .g = 80, .b = 80 },
        { .r = 240, .g = 223, .b = 175 },
        { .r = 148, .g = 191, .b = 243 },
        { .r = 96, .g = 180, .b = 138 },
        { .r = 140, .g = 208, .b = 211 },
        { .r = 80, .g = 96, .b = 112 },
        { .r = 220, .g = 140, .b = 195 },
        { .r = 56, .g = 40, .b = 40 },

        /* Base24 */
        { .r = 74, .g = 96, .b = 85 },
        { .r = 37, .g = 48, .b = 42 },
        { .r = 220, .g = 163, .b = 163 },
        { .r = 224, .g = 207, .b = 159 },
        { .r = 195, .g = 191, .b = 159 },
        { .r = 147, .g = 224, .b = 227 },
        { .r = 148, .g = 191, .b = 243 },
        { .r = 236, .g = 147, .b = 211 }
    },
    .system = 24
};

#endif  /* BASE24_zenburn_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
