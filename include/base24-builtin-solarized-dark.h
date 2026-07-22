/**
 * Base24 Builtin Solarized Dark 
 *
 * @author FredHappyface (https://github.com/fredHappyface)
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

#ifndef BASE24_builtin_solarized_dark_H__
#define BASE24_builtin_solarized_dark_H__

/**
 * The Base24 Builtin Solarized Dark scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_builtin_solarized_dark;

#endif  /* BASE24_builtin_solarized_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_builtin_solarized_dark_IMPLEMENTATION_ONCE
#define BASE24_builtin_solarized_dark_IMPLEMENTATION_ONCE

const base16_scheme base24_builtin_solarized_dark = {
    .name = "Builtin Solarized Dark",
    .base = {
        { .r = 0, .g = 43, .b = 54 },
        { .r = 7, .g = 54, .b = 66 },
        { .r = 0, .g = 43, .b = 54 },
        { .r = 59, .g = 90, .b = 93 },
        { .r = 119, .g = 137, .b = 133 },
        { .r = 178, .g = 184, .b = 173 },
        { .r = 238, .g = 232, .b = 213 },
        { .r = 253, .g = 246, .b = 227 },
        { .r = 220, .g = 50, .b = 47 },
        { .r = 181, .g = 137, .b = 0 },
        { .r = 131, .g = 148, .b = 150 },
        { .r = 133, .g = 153, .b = 0 },
        { .r = 42, .g = 161, .b = 152 },
        { .r = 38, .g = 139, .b = 210 },
        { .r = 211, .g = 54, .b = 130 },
        { .r = 110, .g = 25, .b = 23 },

        /* Base24 */
        { .r = 0, .g = 28, .b = 36 },
        { .r = 0, .g = 14, .b = 18 },
        { .r = 203, .g = 75, .b = 22 },
        { .r = 101, .g = 123, .b = 131 },
        { .r = 88, .g = 110, .b = 117 },
        { .r = 147, .g = 161, .b = 161 },
        { .r = 131, .g = 148, .b = 150 },
        { .r = 108, .g = 113, .b = 196 }
    },
    .system = 24
};

#endif  /* BASE24_builtin_solarized_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
