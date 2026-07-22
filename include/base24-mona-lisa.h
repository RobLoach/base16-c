/**
 * Base24 Mona Lisa 
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

#ifndef BASE24_mona_lisa_H__
#define BASE24_mona_lisa_H__

/**
 * The Base24 Mona Lisa scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_mona_lisa;

#endif  /* BASE24_mona_lisa_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_mona_lisa_IMPLEMENTATION_ONCE
#define BASE24_mona_lisa_IMPLEMENTATION_ONCE

const base16_scheme base24_mona_lisa = {
    .name = "Mona Lisa",
    .base = {
        { .r = 17, .g = 11, .b = 13 },
        { .r = 52, .g = 26, .b = 13 },
        { .r = 135, .g = 66, .b = 39 },
        { .r = 162, .g = 103, .b = 52 },
        { .r = 190, .g = 140, .b = 65 },
        { .r = 218, .g = 177, .b = 78 },
        { .r = 246, .g = 215, .b = 92 },
        { .r = 255, .g = 229, .b = 151 },
        { .r = 155, .g = 40, .b = 27 },
        { .r = 194, .g = 110, .b = 39 },
        { .r = 158, .g = 178, .b = 179 },
        { .r = 98, .g = 97, .b = 50 },
        { .r = 88, .g = 128, .b = 86 },
        { .r = 81, .g = 91, .b = 92 },
        { .r = 155, .g = 29, .b = 41 },
        { .r = 77, .g = 20, .b = 13 },

        /* Base24 */
        { .r = 90, .g = 44, .b = 26 },
        { .r = 45, .g = 22, .b = 13 },
        { .r = 255, .g = 66, .b = 48 },
        { .r = 255, .g = 149, .b = 101 },
        { .r = 179, .g = 177, .b = 99 },
        { .r = 137, .g = 204, .b = 142 },
        { .r = 158, .g = 178, .b = 179 },
        { .r = 255, .g = 91, .b = 106 }
    },
    .system = 24
};

#endif  /* BASE24_mona_lisa_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
