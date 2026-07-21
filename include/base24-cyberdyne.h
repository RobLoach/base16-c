/**
 * Base24 Cyberdyne 
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

#ifndef BASE24_cyberdyne_H__
#define BASE24_cyberdyne_H__

/**
 * The Base24 Cyberdyne scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_cyberdyne;

#endif  /* BASE24_cyberdyne_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_cyberdyne_IMPLEMENTATION_ONCE
#define BASE24_cyberdyne_IMPLEMENTATION_ONCE

const base16_scheme base24_cyberdyne = {
    .name = "Cyberdyne",
    .base = {
        { .r = 21, .g = 17, .b = 68 },
        { .r = 8, .g = 8, .b = 8 },
        { .r = 45, .g = 45, .b = 45 },
        { .r = 94, .g = 94, .b = 94 },
        { .r = 143, .g = 143, .b = 143 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 241, .g = 241, .b = 241 },
        { .r = 254, .g = 255, .b = 255 },
        { .r = 255, .g = 130, .b = 114 },
        { .r = 210, .g = 167, .b = 0 },
        { .r = 193, .g = 227, .b = 254 },
        { .r = 0, .g = 193, .b = 114 },
        { .r = 107, .g = 255, .b = 220 },
        { .r = 0, .g = 113, .b = 207 },
        { .r = 255, .g = 143, .b = 253 },
        { .r = 127, .g = 65, .b = 57 },

        /* Base24 */
        { .r = 30, .g = 30, .b = 30 },
        { .r = 15, .g = 15, .b = 15 },
        { .r = 255, .g = 196, .b = 189 },
        { .r = 254, .g = 253, .b = 213 },
        { .r = 214, .g = 252, .b = 185 },
        { .r = 229, .g = 230, .b = 254 },
        { .r = 193, .g = 227, .b = 254 },
        { .r = 255, .g = 177, .b = 254 }
    },
    .system = 24
};

#endif  /* BASE24_cyberdyne_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
