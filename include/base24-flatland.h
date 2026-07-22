/**
 * Base24 Flatland 
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

#ifndef BASE24_flatland_H__
#define BASE24_flatland_H__

/**
 * The Base24 Flatland scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_flatland;

#endif  /* BASE24_flatland_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_flatland_IMPLEMENTATION_ONCE
#define BASE24_flatland_IMPLEMENTATION_ONCE

const base16_scheme base24_flatland = {
    .name = "Flatland",
    .base = {
        { .r = 28, .g = 30, .b = 32 },
        { .r = 28, .g = 29, .b = 25 },
        { .r = 28, .g = 29, .b = 25 },
        { .r = 84, .g = 85, .b = 82 },
        { .r = 141, .g = 142, .b = 139 },
        { .r = 197, .g = 198, .b = 196 },
        { .r = 254, .g = 255, .b = 254 },
        { .r = 254, .g = 255, .b = 254 },
        { .r = 241, .g = 130, .b = 56 },
        { .r = 243, .g = 239, .b = 109 },
        { .r = 97, .g = 184, .b = 208 },
        { .r = 158, .g = 210, .b = 100 },
        { .r = 213, .g = 56, .b = 100 },
        { .r = 79, .g = 150, .b = 190 },
        { .r = 105, .g = 90, .b = 187 },
        { .r = 120, .g = 65, .b = 28 },

        /* Base24 */
        { .r = 18, .g = 19, .b = 16 },
        { .r = 9, .g = 9, .b = 8 },
        { .r = 209, .g = 42, .b = 36 },
        { .r = 255, .g = 137, .b = 72 },
        { .r = 167, .g = 211, .b = 44 },
        { .r = 213, .g = 56, .b = 100 },
        { .r = 97, .g = 184, .b = 208 },
        { .r = 105, .g = 90, .b = 187 }
    },
    .system = 24
};

#endif  /* BASE24_flatland_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
