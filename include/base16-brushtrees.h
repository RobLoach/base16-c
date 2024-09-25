/**
 * Base16 Brush Trees 
 *
 * @author Abraham White &lt;abelincoln.white@gmail.com&gt;
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

#ifndef BASE16_brushtrees_H__
#define BASE16_brushtrees_H__

/**
 * The Base16 Brush Trees scheme.
 *
 * @author Abraham White &lt;abelincoln.white@gmail.com&gt;
 */
extern const base16_scheme base16_brushtrees;

#endif  /* BASE16_brushtrees_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_brushtrees_IMPLEMENTATION_ONCE
#define BASE16_brushtrees_IMPLEMENTATION_ONCE

const base16_scheme base16_brushtrees = {
    .name = "Brush Trees",
    .base = {
        { .r = 227, .g = 239, .b = 239 },
        { .r = 201, .g = 219, .b = 220 },
        { .r = 176, .g = 197, .b = 200 },
        { .r = 152, .g = 175, .b = 181 },
        { .r = 130, .g = 153, .b = 161 },
        { .r = 109, .g = 130, .b = 142 },
        { .r = 90, .g = 109, .b = 122 },
        { .r = 72, .g = 88, .b = 103 },
        { .r = 179, .g = 134, .b = 134 },
        { .r = 216, .g = 187, .b = 162 },
        { .r = 170, .g = 179, .b = 134 },
        { .r = 135, .g = 179, .b = 134 },
        { .r = 134, .g = 179, .b = 179 },
        { .r = 134, .g = 140, .b = 179 },
        { .r = 179, .g = 134, .b = 178 },
        { .r = 179, .g = 159, .b = 159 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 227, .g = 239, .b = 239 },
        { .r = 227, .g = 239, .b = 239 },
        { .r = 179, .g = 134, .b = 134 },
        { .r = 170, .g = 179, .b = 134 },
        { .r = 135, .g = 179, .b = 134 },
        { .r = 134, .g = 179, .b = 179 },
        { .r = 134, .g = 140, .b = 179 },
        { .r = 179, .g = 134, .b = 178 }
    },
    .system = 16
};

#endif  /* BASE16_brushtrees_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
