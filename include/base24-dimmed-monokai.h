/**
 * Base24 Dimmed Monokai 
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

#ifndef BASE24_dimmed_monokai_H__
#define BASE24_dimmed_monokai_H__

/**
 * The Base24 Dimmed Monokai scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_dimmed_monokai;

#endif  /* BASE24_dimmed_monokai_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_dimmed_monokai_IMPLEMENTATION_ONCE
#define BASE24_dimmed_monokai_IMPLEMENTATION_ONCE

const base16_scheme base24_dimmed_monokai = {
    .name = "Dimmed Monokai",
    .base = {
        { .r = 30, .g = 30, .b = 30 },
        { .r = 58, .g = 60, .b = 67 },
        { .r = 136, .g = 137, .b = 135 },
        { .r = 148, .g = 149, .b = 147 },
        { .r = 160, .g = 162, .b = 160 },
        { .r = 172, .g = 175, .b = 172 },
        { .r = 184, .g = 188, .b = 185 },
        { .r = 252, .g = 255, .b = 184 },
        { .r = 190, .g = 62, .b = 72 },
        { .r = 196, .g = 165, .b = 53 },
        { .r = 23, .g = 108, .b = 227 },
        { .r = 134, .g = 154, .b = 58 },
        { .r = 86, .g = 142, .b = 163 },
        { .r = 78, .g = 118, .b = 161 },
        { .r = 133, .g = 91, .b = 141 },
        { .r = 95, .g = 31, .b = 36 },

        /* Base24 */
        { .r = 90, .g = 91, .b = 90 },
        { .r = 45, .g = 45, .b = 45 },
        { .r = 251, .g = 0, .b = 30 },
        { .r = 195, .g = 112, .b = 51 },
        { .r = 14, .g = 113, .b = 46 },
        { .r = 45, .g = 111, .b = 108 },
        { .r = 23, .g = 108, .b = 227 },
        { .r = 251, .g = 0, .b = 103 }
    },
    .system = 24
};

#endif  /* BASE24_dimmed_monokai_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
