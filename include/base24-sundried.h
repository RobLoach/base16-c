/**
 * Base24 Sundried 
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

#ifndef BASE24_sundried_H__
#define BASE24_sundried_H__

/**
 * The Base24 Sundried scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_sundried;

#endif  /* BASE24_sundried_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_sundried_IMPLEMENTATION_ONCE
#define BASE24_sundried_IMPLEMENTATION_ONCE

const base16_scheme base24_sundried = {
    .name = "Sundried",
    .base = {
        { .r = 26, .g = 24, .b = 24 },
        { .r = 48, .g = 43, .b = 42 },
        { .r = 77, .g = 77, .b = 71 },
        { .r = 107, .g = 107, .b = 103 },
        { .r = 138, .g = 138, .b = 135 },
        { .r = 169, .g = 169, .b = 167 },
        { .r = 200, .g = 200, .b = 200 },
        { .r = 255, .g = 254, .b = 254 },
        { .r = 166, .g = 70, .b = 61 },
        { .r = 156, .g = 95, .b = 42 },
        { .r = 120, .g = 152, .b = 247 },
        { .r = 87, .g = 118, .b = 68 },
        { .r = 156, .g = 129, .b = 78 },
        { .r = 72, .g = 90, .b = 152 },
        { .r = 133, .g = 69, .b = 81 },
        { .r = 83, .g = 35, .b = 30 },

        /* Base24 */
        { .r = 51, .g = 51, .b = 47 },
        { .r = 25, .g = 25, .b = 23 },
        { .r = 170, .g = 0, .b = 12 },
        { .r = 252, .g = 106, .b = 32 },
        { .r = 18, .g = 140, .b = 32 },
        { .r = 250, .g = 211, .b = 132 },
        { .r = 120, .g = 152, .b = 247 },
        { .r = 252, .g = 137, .b = 160 }
    },
    .system = 24
};

#endif  /* BASE24_sundried_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
