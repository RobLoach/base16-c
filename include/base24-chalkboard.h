/**
 * Base24 Chalkboard 
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

#ifndef BASE24_chalkboard_H__
#define BASE24_chalkboard_H__

/**
 * The Base24 Chalkboard scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_chalkboard;

#endif  /* BASE24_chalkboard_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_chalkboard_IMPLEMENTATION_ONCE
#define BASE24_chalkboard_IMPLEMENTATION_ONCE

const base16_scheme base24_chalkboard = {
    .name = "Chalkboard",
    .base = {
        { .r = 41, .g = 38, .b = 47 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 50, .g = 50, .b = 50 },
        { .r = 91, .g = 91, .b = 91 },
        { .r = 133, .g = 133, .b = 133 },
        { .r = 175, .g = 175, .b = 175 },
        { .r = 217, .g = 217, .b = 217 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 195, .g = 115, .b = 114 },
        { .r = 194, .g = 195, .b = 114 },
        { .r = 170, .g = 170, .b = 219 },
        { .r = 114, .g = 195, .b = 115 },
        { .r = 114, .g = 194, .b = 195 },
        { .r = 115, .g = 114, .b = 195 },
        { .r = 195, .g = 114, .b = 194 },
        { .r = 97, .g = 57, .b = 57 },

        /* Base24 */
        { .r = 33, .g = 33, .b = 33 },
        { .r = 16, .g = 16, .b = 16 },
        { .r = 219, .g = 170, .b = 170 },
        { .r = 218, .g = 219, .b = 170 },
        { .r = 170, .g = 219, .b = 170 },
        { .r = 170, .g = 218, .b = 219 },
        { .r = 170, .g = 170, .b = 219 },
        { .r = 219, .g = 170, .b = 218 }
    },
    .system = 24
};

#endif  /* BASE24_chalkboard_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
