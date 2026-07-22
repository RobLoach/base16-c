/**
 * Base24 Desert 
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

#ifndef BASE24_desert_H__
#define BASE24_desert_H__

/**
 * The Base24 Desert scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_desert;

#endif  /* BASE24_desert_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_desert_IMPLEMENTATION_ONCE
#define BASE24_desert_IMPLEMENTATION_ONCE

const base16_scheme base24_desert = {
    .name = "Desert",
    .base = {
        { .r = 51, .g = 51, .b = 51 },
        { .r = 77, .g = 77, .b = 77 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 125, .g = 119, .b = 108 },
        { .r = 165, .g = 153, .b = 132 },
        { .r = 205, .g = 187, .b = 155 },
        { .r = 245, .g = 222, .b = 179 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 43, .b = 43 },
        { .r = 240, .g = 230, .b = 140 },
        { .r = 135, .g = 206, .b = 255 },
        { .r = 152, .g = 251, .b = 152 },
        { .r = 255, .g = 160, .b = 160 },
        { .r = 205, .g = 133, .b = 63 },
        { .r = 255, .g = 222, .b = 173 },
        { .r = 127, .g = 21, .b = 21 },

        /* Base24 */
        { .r = 56, .g = 56, .b = 56 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 255, .g = 85, .b = 85 },
        { .r = 255, .g = 255, .b = 85 },
        { .r = 85, .g = 255, .b = 85 },
        { .r = 255, .g = 215, .b = 0 },
        { .r = 135, .g = 206, .b = 255 },
        { .r = 255, .g = 85, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_desert_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
