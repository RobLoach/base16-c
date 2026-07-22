/**
 * Base24 IC-Orange-PPL 
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

#ifndef BASE24_ic_orange_ppl_H__
#define BASE24_ic_orange_ppl_H__

/**
 * The Base24 IC-Orange-PPL scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_ic_orange_ppl;

#endif  /* BASE24_ic_orange_ppl_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_ic_orange_ppl_IMPLEMENTATION_ONCE
#define BASE24_ic_orange_ppl_IMPLEMENTATION_ONCE

const base16_scheme base24_ic_orange_ppl = {
    .name = "IC-Orange-PPL",
    .base = {
        { .r = 38, .g = 38, .b = 38 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 106, .g = 78, .b = 41 },
        { .r = 143, .g = 108, .b = 65 },
        { .r = 180, .g = 139, .b = 89 },
        { .r = 217, .g = 169, .b = 113 },
        { .r = 255, .g = 200, .b = 138 },
        { .r = 249, .g = 249, .b = 254 },
        { .r = 192, .g = 57, .b = 0 },
        { .r = 202, .g = 174, .b = 0 },
        { .r = 255, .g = 189, .b = 84 },
        { .r = 163, .g = 169, .b = 0 },
        { .r = 247, .g = 148, .b = 0 },
        { .r = 189, .g = 108, .b = 0 },
        { .r = 251, .g = 93, .b = 0 },
        { .r = 96, .g = 28, .b = 0 },

        /* Base24 */
        { .r = 70, .g = 52, .b = 27 },
        { .r = 35, .g = 26, .b = 13 },
        { .r = 255, .g = 139, .b = 103 },
        { .r = 255, .g = 227, .b = 110 },
        { .r = 246, .g = 255, .b = 63 },
        { .r = 197, .g = 151, .b = 82 },
        { .r = 255, .g = 189, .b = 84 },
        { .r = 252, .g = 135, .b = 79 }
    },
    .system = 24
};

#endif  /* BASE24_ic_orange_ppl_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
