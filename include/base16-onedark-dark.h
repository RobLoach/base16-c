/**
 * Base16 OneDark Dark 
 *
 * @author olimorris (https://github.com/olimorris)
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

#ifndef BASE16_onedark_dark_H__
#define BASE16_onedark_dark_H__

/**
 * The Base16 OneDark Dark scheme.
 *
 * @author olimorris (https://github.com/olimorris)
 */
extern const base16_scheme base16_onedark_dark;

#endif  /* BASE16_onedark_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_onedark_dark_IMPLEMENTATION_ONCE
#define BASE16_onedark_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_onedark_dark = {
    .name = "OneDark Dark",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 28, .g = 31, .b = 36 },
        { .r = 44, .g = 49, .b = 58 },
        { .r = 67, .g = 72, .b = 82 },
        { .r = 86, .g = 92, .b = 100 },
        { .r = 171, .g = 178, .b = 191 },
        { .r = 182, .g = 189, .b = 202 },
        { .r = 200, .g = 204, .b = 212 },
        { .r = 239, .g = 89, .b = 111 },
        { .r = 209, .g = 154, .b = 102 },
        { .r = 229, .g = 192, .b = 123 },
        { .r = 137, .g = 202, .b = 120 },
        { .r = 43, .g = 186, .b = 197 },
        { .r = 97, .g = 175, .b = 239 },
        { .r = 213, .g = 95, .b = 222 },
        { .r = 190, .g = 80, .b = 70 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 239, .g = 89, .b = 111 },
        { .r = 229, .g = 192, .b = 123 },
        { .r = 137, .g = 202, .b = 120 },
        { .r = 43, .g = 186, .b = 197 },
        { .r = 97, .g = 175, .b = 239 },
        { .r = 213, .g = 95, .b = 222 }
    },
    .system = 16
};

#endif  /* BASE16_onedark_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
