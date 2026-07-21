/**
 * Base24 One Half Light 
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

#ifndef BASE24_one_half_light_H__
#define BASE24_one_half_light_H__

/**
 * The Base24 One Half Light scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_one_half_light;

#endif  /* BASE24_one_half_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_one_half_light_IMPLEMENTATION_ONCE
#define BASE24_one_half_light_IMPLEMENTATION_ONCE

const base16_scheme base24_one_half_light = {
    .name = "One Half Light",
    .base = {
        { .r = 42, .g = 43, .b = 50 },
        { .r = 55, .g = 57, .b = 66 },
        { .r = 79, .g = 82, .b = 93 },
        { .r = 121, .g = 124, .b = 132 },
        { .r = 164, .g = 166, .b = 171 },
        { .r = 207, .g = 208, .b = 210 },
        { .r = 250, .g = 250, .b = 250 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 228, .g = 86, .b = 73 },
        { .r = 192, .g = 132, .b = 0 },
        { .r = 192, .g = 170, .b = 0 },
        { .r = 79, .g = 161, .b = 79 },
        { .r = 9, .g = 150, .b = 179 },
        { .r = 0, .g = 132, .b = 188 },
        { .r = 166, .g = 37, .b = 164 },
        { .r = 114, .g = 43, .b = 36 },

        /* Base24 */
        { .r = 52, .g = 54, .b = 62 },
        { .r = 26, .g = 27, .b = 31 },
        { .r = 223, .g = 108, .b = 117 },
        { .r = 228, .g = 192, .b = 122 },
        { .r = 152, .g = 195, .b = 121 },
        { .r = 86, .g = 181, .b = 193 },
        { .r = 97, .g = 175, .b = 239 },
        { .r = 197, .g = 119, .b = 221 }
    },
    .system = 24
};

#endif  /* BASE24_one_half_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
