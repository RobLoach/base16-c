/**
 * Base16 Linux VT 
 *
 * @author j-c-m (https://github.com/j-c-m/)
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

#ifndef BASE16_linux_vt_H__
#define BASE16_linux_vt_H__

/**
 * The Base16 Linux VT scheme.
 *
 * @author j-c-m (https://github.com/j-c-m/)
 */
extern const base16_scheme base16_linux_vt;

#endif  /* BASE16_linux_vt_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_linux_vt_IMPLEMENTATION_ONCE
#define BASE16_linux_vt_IMPLEMENTATION_ONCE

const base16_scheme base16_linux_vt = {
    .name = "Linux VT",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 51, .g = 51, .b = 51 },
        { .r = 68, .g = 68, .b = 68 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 136, .g = 136, .b = 136 },
        { .r = 170, .g = 170, .b = 170 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 170, .g = 0, .b = 0 },
        { .r = 255, .g = 85, .b = 85 },
        { .r = 255, .g = 255, .b = 85 },
        { .r = 0, .g = 170, .b = 0 },
        { .r = 0, .g = 170, .b = 170 },
        { .r = 85, .g = 85, .b = 255 },
        { .r = 255, .g = 85, .b = 255 },
        { .r = 170, .g = 85, .b = 0 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 170, .g = 0, .b = 0 },
        { .r = 255, .g = 255, .b = 85 },
        { .r = 0, .g = 170, .b = 0 },
        { .r = 0, .g = 170, .b = 170 },
        { .r = 85, .g = 85, .b = 255 },
        { .r = 255, .g = 85, .b = 255 }
    },
    .system = 16
};

#endif  /* BASE16_linux_vt_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
