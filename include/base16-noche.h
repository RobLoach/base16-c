/**
 * Base16 Noche 
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

#ifndef BASE16_noche_H__
#define BASE16_noche_H__

/**
 * The Base16 Noche scheme.
 *
 * @author Teshre
 */
extern const base16_scheme base16_noche;

#endif  /* BASE16_noche_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_noche_IMPLEMENTATION_ONCE
#define BASE16_noche_IMPLEMENTATION_ONCE

const base16_scheme base16_noche = {
    .name = "Noche",
    .base = {
        { .r = 12, .g = 14, .b = 22 },
        { .r = 24, .g = 28, .b = 44 },
        { .r = 35, .g = 42, .b = 64 },
        { .r = 90, .g = 97, .b = 120 },
        { .r = 147, .g = 155, .b = 178 },
        { .r = 203, .g = 212, .b = 236 },
        { .r = 217, .g = 224, .b = 243 },
        { .r = 230, .g = 236, .b = 250 },
        { .r = 226, .g = 114, .b = 126 },
        { .r = 130, .g = 166, .b = 224 },
        { .r = 216, .g = 192, .b = 98 },
        { .r = 124, .g = 197, .b = 150 },
        { .r = 109, .g = 216, .b = 208 },
        { .r = 122, .g = 160, .b = 232 },
        { .r = 183, .g = 154, .b = 224 },
        { .r = 58, .g = 66, .b = 96 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 12, .g = 14, .b = 22 },
        { .r = 12, .g = 14, .b = 22 },
        { .r = 226, .g = 114, .b = 126 },
        { .r = 216, .g = 192, .b = 98 },
        { .r = 124, .g = 197, .b = 150 },
        { .r = 109, .g = 216, .b = 208 },
        { .r = 122, .g = 160, .b = 232 },
        { .r = 183, .g = 154, .b = 224 }
    },
    .system = 16
};

#endif  /* BASE16_noche_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
