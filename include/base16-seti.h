/**
 * Base16 Seti UI 
 *
 * @author 
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

#ifndef BASE16_seti_H__
#define BASE16_seti_H__

/**
 * The Base16 Seti UI scheme.
 *
 * @author 
 */
extern const base16_scheme base16_seti;

#endif  /* BASE16_seti_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_seti_IMPLEMENTATION_ONCE
#define BASE16_seti_IMPLEMENTATION_ONCE

const base16_scheme base16_seti = {
    .name = "Seti UI",
    .base = {
        { .r = 21, .g = 23, .b = 24 },
        { .r = 40, .g = 42, .b = 43 },
        { .r = 59, .g = 117, .b = 140 },
        { .r = 65, .g = 83, .b = 91 },
        { .r = 67, .g = 165, .b = 213 },
        { .r = 214, .g = 214, .b = 214 },
        { .r = 238, .g = 238, .b = 238 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 205, .g = 63, .b = 69 },
        { .r = 219, .g = 123, .b = 85 },
        { .r = 230, .g = 205, .b = 105 },
        { .r = 159, .g = 202, .b = 86 },
        { .r = 85, .g = 219, .b = 190 },
        { .r = 85, .g = 181, .b = 219 },
        { .r = 160, .g = 116, .b = 196 },
        { .r = 138, .g = 85, .b = 63 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 21, .g = 23, .b = 24 },
        { .r = 21, .g = 23, .b = 24 },
        { .r = 205, .g = 63, .b = 69 },
        { .r = 230, .g = 205, .b = 105 },
        { .r = 159, .g = 202, .b = 86 },
        { .r = 85, .g = 219, .b = 190 },
        { .r = 85, .g = 181, .b = 219 },
        { .r = 160, .g = 116, .b = 196 }
    },
    .system = 16
};

#endif  /* BASE16_seti_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
