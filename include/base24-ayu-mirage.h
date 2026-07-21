/**
 * Base24 Ayu Mirage 
 *
 * @author Tinted Theming (https://github.com/tinted-theming), Ayu Theme (https://github.com/ayu-theme)
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

#ifndef BASE24_ayu_mirage_H__
#define BASE24_ayu_mirage_H__

/**
 * The Base24 Ayu Mirage scheme.
 *
 * @author Tinted Theming (https://github.com/tinted-theming), Ayu Theme (https://github.com/ayu-theme)
 */
extern const base16_scheme base24_ayu_mirage;

#endif  /* BASE24_ayu_mirage_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_ayu_mirage_IMPLEMENTATION_ONCE
#define BASE24_ayu_mirage_IMPLEMENTATION_ONCE

const base16_scheme base24_ayu_mirage = {
    .name = "Ayu Mirage",
    .base = {
        { .r = 31, .g = 36, .b = 48 },
        { .r = 36, .g = 41, .b = 54 },
        { .r = 50, .g = 56, .b = 68 },
        { .r = 74, .g = 80, .b = 89 },
        { .r = 112, .g = 122, .b = 140 },
        { .r = 204, .g = 202, .b = 194 },
        { .r = 217, .g = 215, .b = 206 },
        { .r = 243, .g = 244, .b = 245 },
        { .r = 242, .g = 135, .b = 121 },
        { .r = 255, .g = 173, .b = 102 },
        { .r = 255, .g = 209, .b = 115 },
        { .r = 213, .g = 255, .b = 128 },
        { .r = 149, .g = 230, .b = 203 },
        { .r = 115, .g = 208, .b = 255 },
        { .r = 212, .g = 191, .b = 255 },
        { .r = 242, .g = 121, .b = 131 },

        /* Base24 */
        { .r = 23, .g = 27, .b = 36 },
        { .r = 26, .g = 31, .b = 41 },
        { .r = 255, .g = 102, .b = 102 },
        { .r = 255, .g = 204, .b = 102 },
        { .r = 135, .g = 217, .b = 99 },
        { .r = 92, .g = 207, .b = 230 },
        { .r = 128, .g = 176, .b = 255 },
        { .r = 182, .g = 146, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_ayu_mirage_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
