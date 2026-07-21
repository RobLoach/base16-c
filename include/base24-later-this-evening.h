/**
 * Base24 Later This Evening 
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

#ifndef BASE24_later_this_evening_H__
#define BASE24_later_this_evening_H__

/**
 * The Base24 Later This Evening scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_later_this_evening;

#endif  /* BASE24_later_this_evening_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_later_this_evening_IMPLEMENTATION_ONCE
#define BASE24_later_this_evening_IMPLEMENTATION_ONCE

const base16_scheme base24_later_this_evening = {
    .name = "Later This Evening",
    .base = {
        { .r = 33, .g = 33, .b = 33 },
        { .r = 49, .g = 49, .b = 49 },
        { .r = 79, .g = 79, .b = 79 },
        { .r = 111, .g = 111, .b = 111 },
        { .r = 140, .g = 140, .b = 140 },
        { .r = 166, .g = 166, .b = 166 },
        { .r = 191, .g = 191, .b = 191 },
        { .r = 217, .g = 217, .b = 217 },
        { .r = 211, .g = 90, .b = 95 },
        { .r = 229, .g = 175, .b = 137 },
        { .r = 229, .g = 210, .b = 137 },
        { .r = 175, .g = 186, .b = 102 },
        { .r = 145, .g = 190, .b = 182 },
        { .r = 160, .g = 185, .b = 213 },
        { .r = 191, .g = 146, .b = 213 },
        { .r = 105, .g = 45, .b = 47 },

        /* Base24 */
        { .r = 45, .g = 47, .b = 47 },
        { .r = 22, .g = 23, .b = 23 },
        { .r = 211, .g = 34, .b = 46 },
        { .r = 228, .g = 189, .b = 57 },
        { .r = 170, .g = 187, .b = 57 },
        { .r = 95, .g = 191, .b = 173 },
        { .r = 101, .g = 153, .b = 213 },
        { .r = 170, .g = 82, .b = 213 }
    },
    .system = 24
};

#endif  /* BASE24_later_this_evening_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
