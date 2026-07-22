/**
 * Base24 Spacedust 
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

#ifndef BASE24_spacedust_H__
#define BASE24_spacedust_H__

/**
 * The Base24 Spacedust scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_spacedust;

#endif  /* BASE24_spacedust_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_spacedust_IMPLEMENTATION_ONCE
#define BASE24_spacedust_IMPLEMENTATION_ONCE

const base16_scheme base24_spacedust = {
    .name = "Spacedust",
    .base = {
        { .r = 10, .g = 30, .b = 36 },
        { .r = 110, .g = 82, .b = 70 },
        { .r = 103, .g = 76, .b = 49 },
        { .r = 137, .g = 117, .b = 88 },
        { .r = 171, .g = 158, .b = 127 },
        { .r = 205, .g = 199, .b = 166 },
        { .r = 240, .g = 241, .b = 206 },
        { .r = 254, .g = 255, .b = 240 },
        { .r = 227, .g = 90, .b = 0 },
        { .r = 227, .g = 205, .b = 123 },
        { .r = 103, .g = 160, .b = 205 },
        { .r = 92, .g = 171, .b = 150 },
        { .r = 6, .g = 175, .b = 199 },
        { .r = 14, .g = 84, .b = 139 },
        { .r = 227, .g = 90, .b = 0 },
        { .r = 113, .g = 45, .b = 0 },

        /* Base24 */
        { .r = 68, .g = 50, .b = 32 },
        { .r = 34, .g = 25, .b = 16 },
        { .r = 255, .g = 138, .b = 57 },
        { .r = 255, .g = 199, .b = 119 },
        { .r = 173, .g = 202, .b = 184 },
        { .r = 131, .g = 166, .b = 179 },
        { .r = 103, .g = 160, .b = 205 },
        { .r = 255, .g = 138, .b = 57 }
    },
    .system = 24
};

#endif  /* BASE24_spacedust_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
