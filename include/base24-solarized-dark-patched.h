/**
 * Base24 Solarized Dark Patched 
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

#ifndef BASE24_solarized_dark_patched_H__
#define BASE24_solarized_dark_patched_H__

/**
 * The Base24 Solarized Dark Patched scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_solarized_dark_patched;

#endif  /* BASE24_solarized_dark_patched_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_solarized_dark_patched_IMPLEMENTATION_ONCE
#define BASE24_solarized_dark_patched_IMPLEMENTATION_ONCE

const base16_scheme base24_solarized_dark_patched = {
    .name = "Solarized Dark Patched",
    .base = {
        { .r = 0, .g = 30, .b = 38 },
        { .r = 0, .g = 39, .b = 49 },
        { .r = 70, .g = 90, .b = 97 },
        { .r = 110, .g = 124, .b = 123 },
        { .r = 151, .g = 158, .b = 150 },
        { .r = 192, .g = 192, .b = 176 },
        { .r = 233, .g = 226, .b = 203 },
        { .r = 252, .g = 244, .b = 220 },
        { .r = 208, .g = 27, .b = 36 },
        { .r = 165, .g = 119, .b = 5 },
        { .r = 112, .g = 129, .b = 131 },
        { .r = 114, .g = 137, .b = 5 },
        { .r = 37, .g = 145, .b = 133 },
        { .r = 32, .g = 117, .b = 199 },
        { .r = 198, .g = 27, .b = 110 },
        { .r = 104, .g = 13, .b = 18 },

        /* Base24 */
        { .r = 46, .g = 60, .b = 64 },
        { .r = 23, .g = 30, .b = 32 },
        { .r = 189, .g = 54, .b = 18 },
        { .r = 82, .g = 103, .b = 111 },
        { .r = 70, .g = 90, .b = 97 },
        { .r = 129, .g = 144, .b = 143 },
        { .r = 112, .g = 129, .b = 131 },
        { .r = 88, .g = 86, .b = 185 }
    },
    .system = 24
};

#endif  /* BASE24_solarized_dark_patched_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
