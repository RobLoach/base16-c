/**
 * Base24 Unikitty 
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

#ifndef BASE24_unikitty_H__
#define BASE24_unikitty_H__

/**
 * The Base24 Unikitty scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_unikitty;

#endif  /* BASE24_unikitty_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_unikitty_IMPLEMENTATION_ONCE
#define BASE24_unikitty_IMPLEMENTATION_ONCE

const base16_scheme base24_unikitty = {
    .name = "Unikitty",
    .base = {
        { .r = 255, .g = 122, .b = 211 },
        { .r = 12, .g = 12, .b = 12 },
        { .r = 66, .g = 66, .b = 66 },
        { .r = 105, .g = 103, .b = 105 },
        { .r = 145, .g = 140, .b = 145 },
        { .r = 185, .g = 177, .b = 184 },
        { .r = 225, .g = 214, .b = 224 },
        { .r = 255, .g = 242, .b = 253 },
        { .r = 168, .g = 15, .b = 32 },
        { .r = 238, .g = 170, .b = 75 },
        { .r = 238, .g = 223, .b = 75 },
        { .r = 186, .g = 252, .b = 139 },
        { .r = 107, .g = 208, .b = 188 },
        { .r = 20, .g = 95, .b = 205 },
        { .r = 255, .g = 54, .b = 162 },
        { .r = 84, .g = 7, .b = 16 },

        /* Base24 */
        { .r = 44, .g = 44, .b = 44 },
        { .r = 22, .g = 22, .b = 22 },
        { .r = 216, .g = 19, .b = 41 },
        { .r = 255, .g = 238, .b = 80 },
        { .r = 210, .g = 255, .b = 175 },
        { .r = 121, .g = 235, .b = 213 },
        { .r = 0, .g = 116, .b = 234 },
        { .r = 253, .g = 213, .b = 229 }
    },
    .system = 24
};

#endif  /* BASE24_unikitty_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
