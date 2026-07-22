/**
 * Base24 Warm Neon 
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

#ifndef BASE24_warm_neon_H__
#define BASE24_warm_neon_H__

/**
 * The Base24 Warm Neon scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_warm_neon;

#endif  /* BASE24_warm_neon_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_warm_neon_IMPLEMENTATION_ONCE
#define BASE24_warm_neon_IMPLEMENTATION_ONCE

const base16_scheme base24_warm_neon = {
    .name = "Warm Neon",
    .base = {
        { .r = 63, .g = 63, .b = 63 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 253, .g = 252, .b = 252 },
        { .r = 242, .g = 235, .b = 230 },
        { .r = 231, .g = 218, .b = 208 },
        { .r = 220, .g = 201, .b = 186 },
        { .r = 208, .g = 184, .b = 163 },
        { .r = 216, .g = 200, .b = 187 },
        { .r = 226, .g = 67, .b = 69 },
        { .r = 218, .g = 225, .b = 69 },
        { .r = 122, .g = 144, .b = 213 },
        { .r = 56, .g = 177, .b = 57 },
        { .r = 41, .g = 186, .b = 211 },
        { .r = 66, .g = 96, .b = 197 },
        { .r = 248, .g = 31, .b = 251 },
        { .r = 113, .g = 33, .b = 34 },

        /* Base24 */
        { .r = 168, .g = 168, .b = 168 },
        { .r = 84, .g = 84, .b = 84 },
        { .r = 232, .g = 111, .b = 113 },
        { .r = 221, .g = 217, .b = 121 },
        { .r = 155, .g = 192, .b = 143 },
        { .r = 94, .g = 209, .b = 228 },
        { .r = 122, .g = 144, .b = 213 },
        { .r = 246, .g = 116, .b = 185 }
    },
    .system = 24
};

#endif  /* BASE24_warm_neon_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
