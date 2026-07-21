/**
 * Base24 Adventure Time 
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

#ifndef BASE24_adventure_time_H__
#define BASE24_adventure_time_H__

/**
 * The Base24 Adventure Time scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_adventure_time;

#endif  /* BASE24_adventure_time_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_adventure_time_IMPLEMENTATION_ONCE
#define BASE24_adventure_time_IMPLEMENTATION_ONCE

const base16_scheme base24_adventure_time = {
    .name = "Adventure Time",
    .base = {
        { .r = 30, .g = 28, .b = 68 },
        { .r = 5, .g = 4, .b = 4 },
        { .r = 78, .g = 123, .b = 191 },
        { .r = 120, .g = 147, .b = 191 },
        { .r = 163, .g = 171, .b = 191 },
        { .r = 205, .g = 195, .b = 191 },
        { .r = 248, .g = 219, .b = 192 },
        { .r = 245, .g = 244, .b = 251 },
        { .r = 188, .g = 0, .b = 19 },
        { .r = 230, .g = 116, .b = 29 },
        { .r = 24, .g = 150, .b = 198 },
        { .r = 73, .g = 177, .b = 23 },
        { .r = 111, .g = 164, .b = 151 },
        { .r = 15, .g = 73, .b = 198 },
        { .r = 102, .g = 89, .b = 146 },
        { .r = 94, .g = 0, .b = 9 },

        /* Base24 */
        { .r = 52, .g = 82, .b = 127 },
        { .r = 26, .g = 41, .b = 63 },
        { .r = 252, .g = 94, .b = 89 },
        { .r = 239, .g = 193, .b = 26 },
        { .r = 157, .g = 255, .b = 110 },
        { .r = 200, .g = 249, .b = 243 },
        { .r = 24, .g = 150, .b = 198 },
        { .r = 154, .g = 89, .b = 82 }
    },
    .system = 24
};

#endif  /* BASE24_adventure_time_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
