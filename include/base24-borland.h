/**
 * Base24 Borland 
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

#ifndef BASE24_borland_H__
#define BASE24_borland_H__

/**
 * The Base24 Borland scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_borland;

#endif  /* BASE24_borland_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_borland_IMPLEMENTATION_ONCE
#define BASE24_borland_IMPLEMENTATION_ONCE

const base16_scheme base24_borland = {
    .name = "Borland",
    .base = {
        { .r = 0, .g = 0, .b = 164 },
        { .r = 78, .g = 78, .b = 78 },
        { .r = 124, .g = 124, .b = 124 },
        { .r = 152, .g = 152, .b = 152 },
        { .r = 181, .g = 181, .b = 181 },
        { .r = 209, .g = 209, .b = 209 },
        { .r = 238, .g = 238, .b = 238 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 107, .b = 96 },
        { .r = 255, .g = 255, .b = 182 },
        { .r = 181, .g = 220, .b = 254 },
        { .r = 167, .g = 255, .b = 96 },
        { .r = 198, .g = 196, .b = 253 },
        { .r = 150, .g = 202, .b = 253 },
        { .r = 255, .g = 115, .b = 253 },
        { .r = 127, .g = 53, .b = 48 },

        /* Base24 */
        { .r = 82, .g = 82, .b = 82 },
        { .r = 41, .g = 41, .b = 41 },
        { .r = 255, .g = 182, .b = 176 },
        { .r = 255, .g = 255, .b = 203 },
        { .r = 206, .g = 255, .b = 171 },
        { .r = 223, .g = 223, .b = 254 },
        { .r = 181, .g = 220, .b = 254 },
        { .r = 255, .g = 156, .b = 254 }
    },
    .system = 24
};

#endif  /* BASE24_borland_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
