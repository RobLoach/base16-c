/**
 * Base16 Codeschool 
 *
 * @author blockloop
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

#ifndef BASE16_codeschool_H__
#define BASE16_codeschool_H__

/**
 * The Base16 Codeschool scheme.
 *
 * @author blockloop
 */
extern const base16_scheme base16_codeschool;

#endif  /* BASE16_codeschool_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_codeschool_IMPLEMENTATION_ONCE
#define BASE16_codeschool_IMPLEMENTATION_ONCE

const base16_scheme base16_codeschool = {
    .name = "Codeschool",
    .base = {
        { .r = 35, .g = 44, .b = 49 },
        { .r = 28, .g = 54, .b = 87 },
        { .r = 42, .g = 52, .b = 58 },
        { .r = 63, .g = 73, .b = 68 },
        { .r = 132, .g = 137, .b = 140 },
        { .r = 158, .g = 167, .b = 166 },
        { .r = 167, .g = 207, .b = 163 },
        { .r = 181, .g = 216, .b = 246 },
        { .r = 42, .g = 84, .b = 145 },
        { .r = 67, .g = 130, .b = 13 },
        { .r = 160, .g = 59, .b = 30 },
        { .r = 35, .g = 121, .b = 134 },
        { .r = 176, .g = 47, .b = 48 },
        { .r = 72, .g = 77, .b = 121 },
        { .r = 197, .g = 152, .b = 32 },
        { .r = 201, .g = 131, .b = 68 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 35, .g = 44, .b = 49 },
        { .r = 35, .g = 44, .b = 49 },
        { .r = 42, .g = 84, .b = 145 },
        { .r = 160, .g = 59, .b = 30 },
        { .r = 35, .g = 121, .b = 134 },
        { .r = 176, .g = 47, .b = 48 },
        { .r = 72, .g = 77, .b = 121 },
        { .r = 197, .g = 152, .b = 32 }
    },
    .system = 16
};

#endif  /* BASE16_codeschool_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
