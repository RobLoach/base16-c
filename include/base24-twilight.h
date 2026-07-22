/**
 * Base24 Twilight 
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

#ifndef BASE24_twilight_H__
#define BASE24_twilight_H__

/**
 * The Base24 Twilight scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_twilight;

#endif  /* BASE24_twilight_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_twilight_IMPLEMENTATION_ONCE
#define BASE24_twilight_IMPLEMENTATION_ONCE

const base16_scheme base24_twilight = {
    .name = "Twilight",
    .base = {
        { .r = 20, .g = 20, .b = 20 },
        { .r = 20, .g = 20, .b = 20 },
        { .r = 38, .g = 38, .b = 38 },
        { .r = 92, .g = 92, .b = 81 },
        { .r = 146, .g = 146, .b = 124 },
        { .r = 200, .g = 200, .b = 167 },
        { .r = 254, .g = 255, .b = 211 },
        { .r = 254, .g = 255, .b = 211 },
        { .r = 192, .g = 108, .b = 67 },
        { .r = 194, .g = 168, .b = 108 },
        { .r = 90, .g = 93, .b = 97 },
        { .r = 175, .g = 185, .b = 121 },
        { .r = 119, .g = 130, .b = 132 },
        { .r = 68, .g = 70, .b = 73 },
        { .r = 180, .g = 190, .b = 123 },
        { .r = 96, .g = 54, .b = 33 },

        /* Base24 */
        { .r = 25, .g = 25, .b = 25 },
        { .r = 12, .g = 12, .b = 12 },
        { .r = 221, .g = 124, .b = 76 },
        { .r = 225, .g = 196, .b = 125 },
        { .r = 203, .g = 216, .b = 140 },
        { .r = 138, .g = 152, .b = 154 },
        { .r = 90, .g = 93, .b = 97 },
        { .r = 208, .g = 219, .b = 142 }
    },
    .system = 24
};

#endif  /* BASE24_twilight_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
