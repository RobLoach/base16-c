/**
 * Base16 caroline 
 *
 * @author ed (https://codeberg.org/ed)
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

#ifndef BASE16_caroline_H__
#define BASE16_caroline_H__

/**
 * The Base16 caroline scheme.
 *
 * @author ed (https://codeberg.org/ed)
 */
extern const base16_scheme base16_caroline;

#endif  /* BASE16_caroline_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_caroline_IMPLEMENTATION_ONCE
#define BASE16_caroline_IMPLEMENTATION_ONCE

const base16_scheme base16_caroline = {
    .name = "caroline",
    .base = {
        { .r = 28, .g = 18, .b = 19 },
        { .r = 58, .g = 36, .b = 37 },
        { .r = 86, .g = 56, .b = 55 },
        { .r = 109, .g = 71, .b = 69 },
        { .r = 139, .g = 93, .b = 87 },
        { .r = 168, .g = 117, .b = 105 },
        { .r = 197, .g = 141, .b = 123 },
        { .r = 227, .g = 166, .b = 140 },
        { .r = 194, .g = 79, .b = 87 },
        { .r = 166, .g = 54, .b = 80 },
        { .r = 242, .g = 129, .b = 113 },
        { .r = 128, .g = 108, .b = 97 },
        { .r = 107, .g = 101, .b = 102 },
        { .r = 104, .g = 76, .b = 89 },
        { .r = 166, .g = 54, .b = 80 },
        { .r = 137, .g = 63, .b = 69 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 28, .g = 18, .b = 19 },
        { .r = 28, .g = 18, .b = 19 },
        { .r = 194, .g = 79, .b = 87 },
        { .r = 242, .g = 129, .b = 113 },
        { .r = 128, .g = 108, .b = 97 },
        { .r = 107, .g = 101, .b = 102 },
        { .r = 104, .g = 76, .b = 89 },
        { .r = 166, .g = 54, .b = 80 }
    },
    .system = 16
};

#endif  /* BASE16_caroline_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
