/**
 * Base16 Windows 10 
 *
 * @author Fergus Collins (https://github.com/C-Fergus)
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

#ifndef BASE16_windows_10_H__
#define BASE16_windows_10_H__

/**
 * The Base16 Windows 10 scheme.
 *
 * @author Fergus Collins (https://github.com/C-Fergus)
 */
extern const base16_scheme base16_windows_10;

#endif  /* BASE16_windows_10_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_windows_10_IMPLEMENTATION_ONCE
#define BASE16_windows_10_IMPLEMENTATION_ONCE

const base16_scheme base16_windows_10 = {
    .name = "Windows 10",
    .base = {
        { .r = 12, .g = 12, .b = 12 },
        { .r = 47, .g = 47, .b = 47 },
        { .r = 83, .g = 83, .b = 83 },
        { .r = 118, .g = 118, .b = 118 },
        { .r = 185, .g = 185, .b = 185 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 223, .g = 223, .b = 223 },
        { .r = 242, .g = 242, .b = 242 },
        { .r = 231, .g = 72, .b = 86 },
        { .r = 193, .g = 156, .b = 0 },
        { .r = 249, .g = 241, .b = 165 },
        { .r = 22, .g = 198, .b = 12 },
        { .r = 97, .g = 214, .b = 214 },
        { .r = 59, .g = 120, .b = 255 },
        { .r = 180, .g = 0, .b = 158 },
        { .r = 19, .g = 161, .b = 14 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 12, .g = 12, .b = 12 },
        { .r = 12, .g = 12, .b = 12 },
        { .r = 231, .g = 72, .b = 86 },
        { .r = 249, .g = 241, .b = 165 },
        { .r = 22, .g = 198, .b = 12 },
        { .r = 97, .g = 214, .b = 214 },
        { .r = 59, .g = 120, .b = 255 },
        { .r = 180, .g = 0, .b = 158 }
    },
    .system = 16
};

#endif  /* BASE16_windows_10_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
