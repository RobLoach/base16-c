/**
 * Base16 Tokyo City Terminal Dark 
 *
 * @author Michaël Ball
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

#ifndef BASE16_tokyo_city_terminal_dark_H__
#define BASE16_tokyo_city_terminal_dark_H__

/**
 * The Base16 Tokyo City Terminal Dark scheme.
 *
 * @author Michaël Ball
 */
extern const base16_scheme base16_tokyo_city_terminal_dark;

#endif  /* BASE16_tokyo_city_terminal_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tokyo_city_terminal_dark_IMPLEMENTATION_ONCE
#define BASE16_tokyo_city_terminal_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_tokyo_city_terminal_dark = {
    .name = "Tokyo City Terminal Dark",
    .base = {
        { .r = 23, .g = 29, .b = 35 },
        { .r = 29, .g = 37, .b = 44 },
        { .r = 40, .g = 50, .b = 58 },
        { .r = 82, .g = 98, .b = 112 },
        { .r = 183, .g = 197, .b = 211 },
        { .r = 216, .g = 226, .b = 236 },
        { .r = 246, .g = 246, .b = 248 },
        { .r = 251, .g = 251, .b = 253 },
        { .r = 217, .g = 84, .b = 104 },
        { .r = 255, .g = 158, .b = 100 },
        { .r = 235, .g = 191, .b = 131 },
        { .r = 139, .g = 212, .b = 156 },
        { .r = 112, .g = 225, .b = 232 },
        { .r = 83, .g = 154, .b = 252 },
        { .r = 182, .g = 45, .b = 101 },
        { .r = 221, .g = 157, .b = 130 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 23, .g = 29, .b = 35 },
        { .r = 23, .g = 29, .b = 35 },
        { .r = 217, .g = 84, .b = 104 },
        { .r = 235, .g = 191, .b = 131 },
        { .r = 139, .g = 212, .b = 156 },
        { .r = 112, .g = 225, .b = 232 },
        { .r = 83, .g = 154, .b = 252 },
        { .r = 182, .g = 45, .b = 101 }
    },
    .system = 16
};

#endif  /* BASE16_tokyo_city_terminal_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
