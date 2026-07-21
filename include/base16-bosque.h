/**
 * Base16 Bosque 
 *
 * @author Teshre
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

#ifndef BASE16_bosque_H__
#define BASE16_bosque_H__

/**
 * The Base16 Bosque scheme.
 *
 * @author Teshre
 */
extern const base16_scheme base16_bosque;

#endif  /* BASE16_bosque_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_bosque_IMPLEMENTATION_ONCE
#define BASE16_bosque_IMPLEMENTATION_ONCE

const base16_scheme base16_bosque = {
    .name = "Bosque",
    .base = {
        { .r = 14, .g = 20, .b = 16 },
        { .r = 22, .g = 33, .b = 26 },
        { .r = 30, .g = 48, .b = 35 },
        { .r = 92, .g = 110, .b = 94 },
        { .r = 150, .g = 170, .b = 152 },
        { .r = 207, .g = 229, .b = 210 },
        { .r = 218, .g = 235, .b = 218 },
        { .r = 228, .g = 240, .b = 226 },
        { .r = 226, .g = 112, .b = 106 },
        { .r = 125, .g = 201, .b = 122 },
        { .r = 200, .g = 184, .b = 74 },
        { .r = 111, .g = 197, .b = 110 },
        { .r = 95, .g = 208, .b = 184 },
        { .r = 109, .g = 174, .b = 158 },
        { .r = 184, .g = 148, .b = 208 },
        { .r = 53, .g = 80, .b = 62 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 14, .g = 20, .b = 16 },
        { .r = 14, .g = 20, .b = 16 },
        { .r = 226, .g = 112, .b = 106 },
        { .r = 200, .g = 184, .b = 74 },
        { .r = 111, .g = 197, .b = 110 },
        { .r = 95, .g = 208, .b = 184 },
        { .r = 109, .g = 174, .b = 158 },
        { .r = 184, .g = 148, .b = 208 }
    },
    .system = 16
};

#endif  /* BASE16_bosque_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
