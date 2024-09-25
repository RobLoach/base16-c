/**
 * Base16 Silk Dark 
 *
 * @author Gabriel Fontes (https://github.com/Misterio77)
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

#ifndef BASE16_silk_dark_H__
#define BASE16_silk_dark_H__

/**
 * The Base16 Silk Dark scheme.
 *
 * @author Gabriel Fontes (https://github.com/Misterio77)
 */
extern const base16_scheme base16_silk_dark;

#endif  /* BASE16_silk_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_silk_dark_IMPLEMENTATION_ONCE
#define BASE16_silk_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_silk_dark = {
    .name = "Silk Dark",
    .base = {
        { .r = 14, .g = 60, .b = 70 },
        { .r = 29, .g = 73, .b = 78 },
        { .r = 42, .g = 80, .b = 84 },
        { .r = 88, .g = 112, .b = 115 },
        { .r = 157, .g = 200, .b = 205 },
        { .r = 199, .g = 219, .b = 221 },
        { .r = 203, .g = 242, .b = 247 },
        { .r = 210, .g = 250, .b = 255 },
        { .r = 251, .g = 105, .b = 83 },
        { .r = 252, .g = 171, .b = 116 },
        { .r = 252, .g = 227, .b = 128 },
        { .r = 115, .g = 216, .b = 173 },
        { .r = 63, .g = 178, .b = 185 },
        { .r = 70, .g = 189, .b = 221 },
        { .r = 117, .g = 107, .b = 138 },
        { .r = 155, .g = 100, .b = 123 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 14, .g = 60, .b = 70 },
        { .r = 14, .g = 60, .b = 70 },
        { .r = 251, .g = 105, .b = 83 },
        { .r = 252, .g = 227, .b = 128 },
        { .r = 115, .g = 216, .b = 173 },
        { .r = 63, .g = 178, .b = 185 },
        { .r = 70, .g = 189, .b = 221 },
        { .r = 117, .g = 107, .b = 138 }
    },
    .system = 16
};

#endif  /* BASE16_silk_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
