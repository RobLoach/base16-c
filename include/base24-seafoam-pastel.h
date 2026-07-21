/**
 * Base24 Seafoam Pastel 
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

#ifndef BASE24_seafoam_pastel_H__
#define BASE24_seafoam_pastel_H__

/**
 * The Base24 Seafoam Pastel scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_seafoam_pastel;

#endif  /* BASE24_seafoam_pastel_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_seafoam_pastel_IMPLEMENTATION_ONCE
#define BASE24_seafoam_pastel_IMPLEMENTATION_ONCE

const base16_scheme base24_seafoam_pastel = {
    .name = "Seafoam Pastel",
    .base = {
        { .r = 36, .g = 52, .b = 52 },
        { .r = 117, .g = 117, .b = 117 },
        { .r = 138, .g = 138, .b = 138 },
        { .r = 159, .g = 159, .b = 159 },
        { .r = 181, .g = 181, .b = 181 },
        { .r = 202, .g = 202, .b = 202 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 130, .g = 93, .b = 77 },
        { .r = 173, .g = 161, .b = 109 },
        { .r = 121, .g = 195, .b = 207 },
        { .r = 113, .g = 140, .b = 97 },
        { .r = 113, .g = 147, .b = 147 },
        { .r = 77, .g = 123, .b = 130 },
        { .r = 138, .g = 113, .b = 103 },
        { .r = 65, .g = 46, .b = 38 },

        /* Base24 */
        { .r = 92, .g = 92, .b = 92 },
        { .r = 46, .g = 46, .b = 46 },
        { .r = 207, .g = 147, .b = 121 },
        { .r = 250, .g = 231, .b = 157 },
        { .r = 152, .g = 217, .b = 170 },
        { .r = 173, .g = 224, .b = 224 },
        { .r = 121, .g = 195, .b = 207 },
        { .r = 214, .g = 178, .b = 161 }
    },
    .system = 24
};

#endif  /* BASE24_seafoam_pastel_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
