/**
 * Base16 Cacao 
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

#ifndef BASE16_cacao_H__
#define BASE16_cacao_H__

/**
 * The Base16 Cacao scheme.
 *
 * @author Teshre
 */
extern const base16_scheme base16_cacao;

#endif  /* BASE16_cacao_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_cacao_IMPLEMENTATION_ONCE
#define BASE16_cacao_IMPLEMENTATION_ONCE

const base16_scheme base16_cacao = {
    .name = "Cacao",
    .base = {
        { .r = 22, .g = 15, .b = 12 },
        { .r = 36, .g = 25, .b = 19 },
        { .r = 58, .g = 40, .b = 30 },
        { .r = 118, .g = 96, .b = 82 },
        { .r = 175, .g = 155, .b = 139 },
        { .r = 232, .g = 214, .b = 196 },
        { .r = 238, .g = 222, .b = 205 },
        { .r = 244, .g = 230, .b = 214 },
        { .r = 224, .g = 112, .b = 92 },
        { .r = 199, .g = 123, .b = 74 },
        { .r = 232, .g = 168, .b = 74 },
        { .r = 154, .g = 201, .b = 122 },
        { .r = 116, .g = 200, .b = 176 },
        { .r = 168, .g = 154, .b = 208 },
        { .r = 206, .g = 138, .b = 176 },
        { .r = 78, .g = 56, .b = 42 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 22, .g = 15, .b = 12 },
        { .r = 22, .g = 15, .b = 12 },
        { .r = 224, .g = 112, .b = 92 },
        { .r = 232, .g = 168, .b = 74 },
        { .r = 154, .g = 201, .b = 122 },
        { .r = 116, .g = 200, .b = 176 },
        { .r = 168, .g = 154, .b = 208 },
        { .r = 206, .g = 138, .b = 176 }
    },
    .system = 16
};

#endif  /* BASE16_cacao_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
