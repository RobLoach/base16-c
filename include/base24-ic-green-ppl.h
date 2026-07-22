/**
 * Base24 IC-Green-PPL 
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

#ifndef BASE24_ic_green_ppl_H__
#define BASE24_ic_green_ppl_H__

/**
 * The Base24 IC-Green-PPL scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_ic_green_ppl;

#endif  /* BASE24_ic_green_ppl_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_ic_green_ppl_IMPLEMENTATION_ONCE
#define BASE24_ic_green_ppl_IMPLEMENTATION_ONCE

const base16_scheme base24_ic_green_ppl = {
    .name = "IC-Green-PPL",
    .base = {
        { .r = 44, .g = 44, .b = 44 },
        { .r = 1, .g = 68, .b = 1 },
        { .r = 2, .g = 92, .b = 2 },
        { .r = 59, .g = 132, .b = 62 },
        { .r = 116, .g = 173, .b = 122 },
        { .r = 173, .g = 213, .b = 182 },
        { .r = 230, .g = 254, .b = 242 },
        { .r = 224, .g = 241, .b = 220 },
        { .r = 254, .g = 38, .b = 53 },
        { .r = 118, .g = 168, .b = 48 },
        { .r = 46, .g = 250, .b = 235 },
        { .r = 65, .g = 166, .b = 56 },
        { .r = 60, .g = 160, .b = 120 },
        { .r = 46, .g = 195, .b = 185 },
        { .r = 80, .g = 160, .b = 150 },
        { .r = 127, .g = 19, .b = 26 },

        /* Base24 */
        { .r = 1, .g = 61, .b = 1 },
        { .r = 0, .g = 30, .b = 0 },
        { .r = 180, .g = 250, .b = 92 },
        { .r = 218, .g = 250, .b = 135 },
        { .r = 174, .g = 250, .b = 134 },
        { .r = 60, .g = 250, .b = 200 },
        { .r = 46, .g = 250, .b = 235 },
        { .r = 80, .g = 250, .b = 250 }
    },
    .system = 24
};

#endif  /* BASE24_ic_green_ppl_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
