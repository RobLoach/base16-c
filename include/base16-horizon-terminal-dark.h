/**
 * Base16 Horizon Terminal Dark 
 *
 * @author Michaël Ball (http://github.com/michael-ball/)
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

#ifndef BASE16_horizon_terminal_dark_H__
#define BASE16_horizon_terminal_dark_H__

/**
 * The Base16 Horizon Terminal Dark scheme.
 *
 * @author Michaël Ball (http://github.com/michael-ball/)
 */
extern const base16_scheme base16_horizon_terminal_dark;

#endif  /* BASE16_horizon_terminal_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_horizon_terminal_dark_IMPLEMENTATION_ONCE
#define BASE16_horizon_terminal_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_horizon_terminal_dark = {
    .name = "Horizon Terminal Dark",
    .base = {
        { .r = 28, .g = 30, .b = 38 },
        { .r = 35, .g = 37, .b = 48 },
        { .r = 46, .g = 48, .b = 62 },
        { .r = 111, .g = 111, .b = 112 },
        { .r = 157, .g = 160, .b = 162 },
        { .r = 203, .g = 206, .b = 208 },
        { .r = 220, .g = 223, .b = 228 },
        { .r = 227, .g = 230, .b = 238 },
        { .r = 233, .g = 86, .b = 120 },
        { .r = 250, .g = 183, .b = 149 },
        { .r = 250, .g = 194, .b = 154 },
        { .r = 41, .g = 211, .b = 152 },
        { .r = 89, .g = 225, .b = 227 },
        { .r = 38, .g = 187, .b = 217 },
        { .r = 238, .g = 100, .b = 172 },
        { .r = 240, .g = 147, .b = 131 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 28, .g = 30, .b = 38 },
        { .r = 28, .g = 30, .b = 38 },
        { .r = 233, .g = 86, .b = 120 },
        { .r = 250, .g = 194, .b = 154 },
        { .r = 41, .g = 211, .b = 152 },
        { .r = 89, .g = 225, .b = 227 },
        { .r = 38, .g = 187, .b = 217 },
        { .r = 238, .g = 100, .b = 172 }
    },
    .system = 16
};

#endif  /* BASE16_horizon_terminal_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
