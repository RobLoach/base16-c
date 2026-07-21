/**
 * Base16 Tinta 
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

#ifndef BASE16_tinta_H__
#define BASE16_tinta_H__

/**
 * The Base16 Tinta scheme.
 *
 * @author Teshre
 */
extern const base16_scheme base16_tinta;

#endif  /* BASE16_tinta_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tinta_IMPLEMENTATION_ONCE
#define BASE16_tinta_IMPLEMENTATION_ONCE

const base16_scheme base16_tinta = {
    .name = "Tinta",
    .base = {
        { .r = 16, .g = 16, .b = 18 },
        { .r = 32, .g = 32, .b = 35 },
        { .r = 44, .g = 44, .b = 48 },
        { .r = 98, .g = 98, .b = 106 },
        { .r = 157, .g = 156, .b = 157 },
        { .r = 216, .g = 214, .b = 208 },
        { .r = 227, .g = 225, .b = 219 },
        { .r = 238, .g = 236, .b = 230 },
        { .r = 208, .g = 114, .b = 106 },
        { .r = 232, .g = 132, .b = 58 },
        { .r = 200, .g = 184, .b = 106 },
        { .r = 154, .g = 168, .b = 144 },
        { .r = 128, .g = 184, .b = 180 },
        { .r = 138, .g = 154, .b = 176 },
        { .r = 176, .g = 160, .b = 184 },
        { .r = 74, .g = 74, .b = 80 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 16, .g = 16, .b = 18 },
        { .r = 16, .g = 16, .b = 18 },
        { .r = 208, .g = 114, .b = 106 },
        { .r = 200, .g = 184, .b = 106 },
        { .r = 154, .g = 168, .b = 144 },
        { .r = 128, .g = 184, .b = 180 },
        { .r = 138, .g = 154, .b = 176 },
        { .r = 176, .g = 160, .b = 184 }
    },
    .system = 16
};

#endif  /* BASE16_tinta_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
