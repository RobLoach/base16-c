/**
 * Base24 Wild Cherry 
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

#ifndef BASE24_wild_cherry_H__
#define BASE24_wild_cherry_H__

/**
 * The Base24 Wild Cherry scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_wild_cherry;

#endif  /* BASE24_wild_cherry_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_wild_cherry_IMPLEMENTATION_ONCE
#define BASE24_wild_cherry_IMPLEMENTATION_ONCE

const base16_scheme base24_wild_cherry = {
    .name = "Wild Cherry",
    .base = {
        { .r = 31, .g = 22, .b = 38 },
        { .r = 0, .g = 5, .b = 6 },
        { .r = 0, .g = 156, .b = 201 },
        { .r = 63, .g = 179, .b = 206 },
        { .r = 127, .g = 202, .b = 211 },
        { .r = 191, .g = 225, .b = 216 },
        { .r = 255, .g = 248, .b = 221 },
        { .r = 228, .g = 131, .b = 141 },
        { .r = 217, .g = 64, .b = 133 },
        { .r = 255, .g = 209, .b = 111 },
        { .r = 47, .g = 139, .b = 185 },
        { .r = 42, .g = 178, .b = 80 },
        { .r = 193, .g = 184, .b = 183 },
        { .r = 136, .g = 60, .b = 220 },
        { .r = 236, .g = 236, .b = 236 },
        { .r = 108, .g = 32, .b = 66 },

        /* Base24 */
        { .r = 0, .g = 104, .b = 134 },
        { .r = 0, .g = 52, .b = 67 },
        { .r = 218, .g = 107, .b = 171 },
        { .r = 234, .g = 192, .b = 102 },
        { .r = 244, .g = 219, .b = 165 },
        { .r = 255, .g = 145, .b = 157 },
        { .r = 47, .g = 139, .b = 185 },
        { .r = 174, .g = 99, .b = 107 }
    },
    .system = 24
};

#endif  /* BASE24_wild_cherry_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
