/**
 * Base24 Laser 
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

#ifndef BASE24_laser_H__
#define BASE24_laser_H__

/**
 * The Base24 Laser scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_laser;

#endif  /* BASE24_laser_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_laser_IMPLEMENTATION_ONCE
#define BASE24_laser_IMPLEMENTATION_ONCE

const base16_scheme base24_laser = {
    .name = "Laser",
    .base = {
        { .r = 3, .g = 13, .b = 24 },
        { .r = 97, .g = 97, .b = 97 },
        { .r = 142, .g = 142, .b = 142 },
        { .r = 166, .g = 166, .b = 166 },
        { .r = 191, .g = 191, .b = 191 },
        { .r = 216, .g = 216, .b = 216 },
        { .r = 241, .g = 241, .b = 241 },
        { .r = 254, .g = 255, .b = 255 },
        { .r = 255, .g = 130, .b = 114 },
        { .r = 9, .g = 180, .b = 189 },
        { .r = 249, .g = 40, .b = 131 },
        { .r = 180, .g = 250, .b = 114 },
        { .r = 208, .g = 209, .b = 254 },
        { .r = 254, .g = 211, .b = 0 },
        { .r = 255, .g = 143, .b = 253 },
        { .r = 127, .g = 65, .b = 57 },

        /* Base24 */
        { .r = 94, .g = 94, .b = 94 },
        { .r = 47, .g = 47, .b = 47 },
        { .r = 255, .g = 196, .b = 189 },
        { .r = 254, .g = 253, .b = 213 },
        { .r = 214, .g = 252, .b = 185 },
        { .r = 229, .g = 230, .b = 254 },
        { .r = 249, .g = 40, .b = 131 },
        { .r = 255, .g = 177, .b = 254 }
    },
    .system = 24
};

#endif  /* BASE24_laser_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
