/**
 * Base24 Elemental 
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

#ifndef BASE24_elemental_H__
#define BASE24_elemental_H__

/**
 * The Base24 Elemental scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_elemental;

#endif  /* BASE24_elemental_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_elemental_IMPLEMENTATION_ONCE
#define BASE24_elemental_IMPLEMENTATION_ONCE

const base16_scheme base24_elemental = {
    .name = "Elemental",
    .base = {
        { .r = 33, .g = 33, .b = 28 },
        { .r = 60, .g = 59, .b = 48 },
        { .r = 84, .g = 84, .b = 68 },
        { .r = 95, .g = 93, .b = 80 },
        { .r = 106, .g = 102, .b = 92 },
        { .r = 117, .g = 111, .b = 104 },
        { .r = 128, .g = 121, .b = 116 },
        { .r = 255, .g = 241, .b = 232 },
        { .r = 151, .g = 40, .b = 15 },
        { .r = 127, .g = 113, .b = 16 },
        { .r = 120, .g = 216, .b = 216 },
        { .r = 71, .g = 153, .b = 66 },
        { .r = 56, .g = 127, .b = 88 },
        { .r = 73, .g = 127, .b = 125 },
        { .r = 126, .g = 78, .b = 46 },
        { .r = 75, .g = 20, .b = 7 },

        /* Base24 */
        { .r = 56, .g = 56, .b = 45 },
        { .r = 28, .g = 28, .b = 22 },
        { .r = 223, .g = 80, .b = 42 },
        { .r = 214, .g = 152, .b = 39 },
        { .r = 96, .g = 224, .b = 111 },
        { .r = 88, .g = 213, .b = 152 },
        { .r = 120, .g = 216, .b = 216 },
        { .r = 205, .g = 124, .b = 83 }
    },
    .system = 24
};

#endif  /* BASE24_elemental_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
