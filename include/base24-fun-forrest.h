/**
 * Base24 Fun Forrest 
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

#ifndef BASE24_fun_forrest_H__
#define BASE24_fun_forrest_H__

/**
 * The Base24 Fun Forrest scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_fun_forrest;

#endif  /* BASE24_fun_forrest_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_fun_forrest_IMPLEMENTATION_ONCE
#define BASE24_fun_forrest_IMPLEMENTATION_ONCE

const base16_scheme base24_fun_forrest = {
    .name = "Fun Forrest",
    .base = {
        { .r = 36, .g = 18, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 126, .g = 105, .b = 84 },
        { .r = 149, .g = 127, .b = 88 },
        { .r = 173, .g = 149, .b = 92 },
        { .r = 197, .g = 171, .b = 96 },
        { .r = 221, .g = 193, .b = 101 },
        { .r = 255, .g = 233, .b = 163 },
        { .r = 213, .g = 37, .b = 43 },
        { .r = 189, .g = 138, .b = 19 },
        { .r = 124, .g = 201, .b = 206 },
        { .r = 144, .g = 155, .b = 0 },
        { .r = 217, .g = 129, .b = 18 },
        { .r = 70, .g = 152, .b = 162 },
        { .r = 140, .g = 66, .b = 49 },
        { .r = 106, .g = 18, .b = 21 },

        /* Base24 */
        { .r = 84, .g = 70, .b = 56 },
        { .r = 42, .g = 35, .b = 28 },
        { .r = 228, .g = 89, .b = 27 },
        { .r = 255, .g = 202, .b = 27 },
        { .r = 191, .g = 198, .b = 89 },
        { .r = 230, .g = 169, .b = 107 },
        { .r = 124, .g = 201, .b = 206 },
        { .r = 209, .g = 99, .b = 73 }
    },
    .system = 24
};

#endif  /* BASE24_fun_forrest_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
