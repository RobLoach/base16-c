/**
 * Base24 PaperColor Dark 
 *
 * @author Nguyen Nguyen (https://github.com/NLKNguyen/papercolor-theme)
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

#ifndef BASE24_papercolor_dark_H__
#define BASE24_papercolor_dark_H__

/**
 * The Base24 PaperColor Dark scheme.
 *
 * @author Nguyen Nguyen (https://github.com/NLKNguyen/papercolor-theme)
 */
extern const base16_scheme base24_papercolor_dark;

#endif  /* BASE24_papercolor_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_papercolor_dark_IMPLEMENTATION_ONCE
#define BASE24_papercolor_dark_IMPLEMENTATION_ONCE

const base16_scheme base24_papercolor_dark = {
    .name = "PaperColor Dark",
    .base = {
        { .r = 28, .g = 28, .b = 28 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 58, .g = 58, .b = 58 },
        { .r = 128, .g = 128, .b = 128 },
        { .r = 88, .g = 88, .b = 88 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 188, .g = 188, .b = 188 },
        { .r = 198, .g = 198, .b = 198 },
        { .r = 175, .g = 0, .b = 95 },
        { .r = 95, .g = 175, .b = 95 },
        { .r = 215, .g = 175, .b = 95 },
        { .r = 95, .g = 175, .b = 0 },
        { .r = 255, .g = 175, .b = 0 },
        { .r = 95, .g = 175, .b = 215 },
        { .r = 175, .g = 135, .b = 215 },
        { .r = 255, .g = 95, .b = 175 },

        /* Base24 */
        { .r = 18, .g = 18, .b = 18 },
        { .r = 8, .g = 8, .b = 8 },
        { .r = 215, .g = 0, .b = 95 },
        { .r = 135, .g = 215, .b = 95 },
        { .r = 255, .g = 215, .b = 95 },
        { .r = 135, .g = 215, .b = 0 },
        { .r = 255, .g = 215, .b = 0 },
        { .r = 135, .g = 215, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_papercolor_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
