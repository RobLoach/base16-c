/**
 * Base16 3024 
 *
 * @author Jan T. Sott (http://github.com/idleberg)
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

#ifndef BASE16_3024_H__
#define BASE16_3024_H__

/**
 * The Base16 3024 scheme.
 *
 * @author Jan T. Sott (http://github.com/idleberg)
 */
extern const base16_scheme base16_3024;

#endif  /* BASE16_3024_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_3024_IMPLEMENTATION_ONCE
#define BASE16_3024_IMPLEMENTATION_ONCE

const base16_scheme base16_3024 = {
    .name = "3024",
    .base = {
        { .r = 9, .g = 3, .b = 0 },
        { .r = 58, .g = 52, .b = 50 },
        { .r = 74, .g = 69, .b = 67 },
        { .r = 92, .g = 88, .b = 85 },
        { .r = 128, .g = 125, .b = 124 },
        { .r = 165, .g = 162, .b = 162 },
        { .r = 214, .g = 213, .b = 212 },
        { .r = 247, .g = 247, .b = 247 },
        { .r = 219, .g = 45, .b = 32 },
        { .r = 232, .g = 187, .b = 208 },
        { .r = 253, .g = 237, .b = 2 },
        { .r = 1, .g = 162, .b = 82 },
        { .r = 181, .g = 228, .b = 244 },
        { .r = 1, .g = 160, .b = 228 },
        { .r = 161, .g = 106, .b = 148 },
        { .r = 205, .g = 171, .b = 83 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 9, .g = 3, .b = 0 },
        { .r = 9, .g = 3, .b = 0 },
        { .r = 219, .g = 45, .b = 32 },
        { .r = 253, .g = 237, .b = 2 },
        { .r = 1, .g = 162, .b = 82 },
        { .r = 181, .g = 228, .b = 244 },
        { .r = 1, .g = 160, .b = 228 },
        { .r = 161, .g = 106, .b = 148 }
    },
    .system = 16
};

#endif  /* BASE16_3024_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
