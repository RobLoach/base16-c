/**
 * Base24 Red Planet 
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

#ifndef BASE24_red_planet_H__
#define BASE24_red_planet_H__

/**
 * The Base24 Red Planet scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_red_planet;

#endif  /* BASE24_red_planet_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_red_planet_IMPLEMENTATION_ONCE
#define BASE24_red_planet_IMPLEMENTATION_ONCE

const base16_scheme base24_red_planet = {
    .name = "Red Planet",
    .base = {
        { .r = 34, .g = 34, .b = 34 },
        { .r = 32, .g = 31, .b = 31 },
        { .r = 103, .g = 103, .b = 103 },
        { .r = 123, .g = 119, .b = 115 },
        { .r = 144, .g = 136, .b = 128 },
        { .r = 164, .g = 153, .b = 140 },
        { .r = 185, .g = 170, .b = 153 },
        { .r = 214, .g = 191, .b = 184 },
        { .r = 140, .g = 52, .b = 50 },
        { .r = 232, .g = 191, .b = 106 },
        { .r = 96, .g = 130, .b = 126 },
        { .r = 114, .g = 130, .b = 113 },
        { .r = 91, .g = 131, .b = 144 },
        { .r = 105, .g = 128, .b = 158 },
        { .r = 137, .g = 100, .b = 146 },
        { .r = 70, .g = 26, .b = 25 },

        /* Base24 */
        { .r = 68, .g = 68, .b = 68 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 181, .g = 82, .b = 66 },
        { .r = 235, .g = 235, .b = 145 },
        { .r = 134, .g = 153, .b = 133 },
        { .r = 56, .g = 173, .b = 216 },
        { .r = 96, .g = 130, .b = 126 },
        { .r = 222, .g = 72, .b = 115 }
    },
    .system = 24
};

#endif  /* BASE24_red_planet_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
