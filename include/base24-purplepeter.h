/**
 * Base24 Purplepeter 
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

#ifndef BASE24_purplepeter_H__
#define BASE24_purplepeter_H__

/**
 * The Base24 Purplepeter scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_purplepeter;

#endif  /* BASE24_purplepeter_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_purplepeter_IMPLEMENTATION_ONCE
#define BASE24_purplepeter_IMPLEMENTATION_ONCE

const base16_scheme base24_purplepeter = {
    .name = "Purplepeter",
    .base = {
        { .r = 42, .g = 26, .b = 74 },
        { .r = 10, .g = 4, .b = 31 },
        { .r = 16, .g = 11, .b = 34 },
        { .r = 75, .g = 54, .b = 57 },
        { .r = 135, .g = 98, .b = 81 },
        { .r = 195, .g = 142, .b = 105 },
        { .r = 255, .g = 186, .b = 129 },
        { .r = 185, .g = 174, .b = 211 },
        { .r = 255, .g = 120, .b = 108 },
        { .r = 239, .g = 222, .b = 171 },
        { .r = 121, .g = 218, .b = 237 },
        { .r = 152, .g = 180, .b = 129 },
        { .r = 185, .g = 140, .b = 255 },
        { .r = 102, .g = 217, .b = 239 },
        { .r = 230, .g = 142, .b = 205 },
        { .r = 127, .g = 60, .b = 54 },

        /* Base24 */
        { .r = 10, .g = 7, .b = 22 },
        { .r = 5, .g = 3, .b = 11 },
        { .r = 248, .g = 159, .b = 146 },
        { .r = 241, .g = 233, .b = 191 },
        { .r = 180, .g = 189, .b = 142 },
        { .r = 160, .g = 160, .b = 214 },
        { .r = 121, .g = 218, .b = 237 },
        { .r = 185, .g = 145, .b = 212 }
    },
    .system = 24
};

#endif  /* BASE24_purplepeter_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
