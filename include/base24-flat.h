/**
 * Base24 Flat 
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

#ifndef BASE16_flat_H__
#define BASE16_flat_H__

/**
 * The Base24 Flat scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_flat;

#endif  /* BASE16_flat_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_flat_IMPLEMENTATION_ONCE
#define BASE24_flat_IMPLEMENTATION_ONCE

const base16_scheme base24_flat = {
    .name = "Flat",
    .base = {
        { .r = 8, .g = 40, .b = 69 },
        { .r = 29, .g = 40, .b = 69 },
        { .r = 46, .g = 46, .b = 69 },
        { .r = 68, .g = 78, .b = 91 },
        { .r = 104, .g = 113, .b = 123 },
        { .r = 140, .g = 147, .b = 154 },
        { .r = 176, .g = 182, .b = 186 },
        { .r = 231, .g = 236, .b = 237 },
        { .r = 168, .g = 35, .b = 32 },
        { .r = 229, .g = 141, .b = 17 },
        { .r = 60, .g = 125, .b = 210 },
        { .r = 45, .g = 148, .b = 64 },
        { .r = 44, .g = 147, .b = 112 },
        { .r = 49, .g = 103, .b = 172 },
        { .r = 120, .g = 26, .b = 160 },
        { .r = 84, .g = 17, .b = 16 },

        /* Base24 */
        { .r = 0, .g = 34, .b = 64 },
        { .r = 0, .g = 22, .b = 41 },
        { .r = 212, .g = 49, .b = 46 },
        { .r = 229, .g = 190, .b = 12 },
        { .r = 50, .g = 165, .b = 72 },
        { .r = 53, .g = 179, .b = 135 },
        { .r = 60, .g = 125, .b = 210 },
        { .r = 130, .g = 48, .b = 167 }
    },
    .system = 24
};

#endif  /* BASE24_flat_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
