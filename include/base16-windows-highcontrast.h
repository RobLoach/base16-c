/**
 * Base16 Windows High Contrast 
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

#ifndef BASE16_windows_highcontrast_H__
#define BASE16_windows_highcontrast_H__

/**
 * The Base16 Windows High Contrast scheme.
 *
 * @author Fergus Collins (https://github.com/C-Fergus)
 */
extern const base16_scheme base16_windows_highcontrast;

#endif  /* BASE16_windows_highcontrast_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_windows_highcontrast_IMPLEMENTATION_ONCE
#define BASE16_windows_highcontrast_IMPLEMENTATION_ONCE

const base16_scheme base16_windows_highcontrast = {
    .name = "Windows High Contrast",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 56, .g = 56, .b = 56 },
        { .r = 84, .g = 84, .b = 84 },
        { .r = 162, .g = 162, .b = 162 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 222, .g = 222, .b = 222 },
        { .r = 252, .g = 252, .b = 252 },
        { .r = 252, .g = 84, .b = 84 },
        { .r = 128, .g = 128, .b = 0 },
        { .r = 252, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 252 },
        { .r = 84, .g = 84, .b = 252 },
        { .r = 252, .g = 84, .b = 252 },
        { .r = 0, .g = 128, .b = 0 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 252, .g = 84, .b = 84 },
        { .r = 252, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 84 },
        { .r = 84, .g = 252, .b = 252 },
        { .r = 84, .g = 84, .b = 252 },
        { .r = 252, .g = 84, .b = 252 }
    },
    .system = 16
};

#endif  /* BASE16_windows_highcontrast_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
