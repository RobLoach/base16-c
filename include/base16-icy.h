/**
 * Base16 Icy Dark 
 *
 * @author icyphox (https://icyphox.ga)
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

#ifndef BASE16_icy_H__
#define BASE16_icy_H__

/**
 * The Base16 Icy Dark scheme.
 *
 * @author icyphox (https://icyphox.ga)
 */
extern const base16_scheme base16_icy;

#endif  /* BASE16_icy_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_icy_IMPLEMENTATION_ONCE
#define BASE16_icy_IMPLEMENTATION_ONCE

const base16_scheme base16_icy = {
    .name = "Icy Dark",
    .base = {
        { .r = 2, .g = 16, .b = 18 },
        { .r = 3, .g = 22, .b = 25 },
        { .r = 4, .g = 31, .b = 35 },
        { .r = 5, .g = 46, .b = 52 },
        { .r = 6, .g = 64, .b = 72 },
        { .r = 9, .g = 91, .b = 103 },
        { .r = 12, .g = 124, .b = 140 },
        { .r = 16, .g = 156, .b = 176 },
        { .r = 22, .g = 193, .b = 217 },
        { .r = 179, .g = 235, .b = 242 },
        { .r = 128, .g = 222, .b = 234 },
        { .r = 77, .g = 208, .b = 225 },
        { .r = 38, .g = 198, .b = 218 },
        { .r = 0, .g = 188, .b = 212 },
        { .r = 0, .g = 172, .b = 193 },
        { .r = 0, .g = 151, .b = 167 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 2, .g = 16, .b = 18 },
        { .r = 2, .g = 16, .b = 18 },
        { .r = 22, .g = 193, .b = 217 },
        { .r = 128, .g = 222, .b = 234 },
        { .r = 77, .g = 208, .b = 225 },
        { .r = 38, .g = 198, .b = 218 },
        { .r = 0, .g = 188, .b = 212 },
        { .r = 0, .g = 172, .b = 193 }
    },
    .system = 16
};

#endif  /* BASE16_icy_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
