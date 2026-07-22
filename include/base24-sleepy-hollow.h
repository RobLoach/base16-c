/**
 * Base24 Sleepy Hollow 
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

#ifndef BASE24_sleepy_hollow_H__
#define BASE24_sleepy_hollow_H__

/**
 * The Base24 Sleepy Hollow scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_sleepy_hollow;

#endif  /* BASE24_sleepy_hollow_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_sleepy_hollow_IMPLEMENTATION_ONCE
#define BASE24_sleepy_hollow_IMPLEMENTATION_ONCE

const base16_scheme base24_sleepy_hollow = {
    .name = "Sleepy Hollow",
    .base = {
        { .r = 18, .g = 18, .b = 19 },
        { .r = 87, .g = 32, .b = 0 },
        { .r = 78, .g = 75, .b = 96 },
        { .r = 102, .g = 94, .b = 108 },
        { .r = 126, .g = 114, .b = 120 },
        { .r = 150, .g = 134, .b = 132 },
        { .r = 175, .g = 154, .b = 145 },
        { .r = 209, .g = 199, .b = 169 },
        { .r = 185, .g = 57, .b = 52 },
        { .r = 180, .g = 86, .b = 0 },
        { .r = 128, .g = 133, .b = 239 },
        { .r = 144, .g = 119, .b = 62 },
        { .r = 142, .g = 174, .b = 169 },
        { .r = 94, .g = 98, .b = 180 },
        { .r = 160, .g = 124, .b = 123 },
        { .r = 92, .g = 28, .b = 26 },

        /* Base24 */
        { .r = 52, .g = 50, .b = 64 },
        { .r = 26, .g = 25, .b = 32 },
        { .r = 217, .g = 68, .b = 62 },
        { .r = 246, .g = 103, .b = 19 },
        { .r = 214, .g = 176, .b = 78 },
        { .r = 164, .g = 219, .b = 231 },
        { .r = 128, .g = 133, .b = 239 },
        { .r = 225, .g = 194, .b = 186 }
    },
    .system = 24
};

#endif  /* BASE24_sleepy_hollow_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
