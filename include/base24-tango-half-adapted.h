/**
 * Base24 Tango Half Adapted 
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

#ifndef BASE24_tango_half_adapted_H__
#define BASE24_tango_half_adapted_H__

/**
 * The Base24 Tango Half Adapted scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_tango_half_adapted;

#endif  /* BASE24_tango_half_adapted_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_tango_half_adapted_IMPLEMENTATION_ONCE
#define BASE24_tango_half_adapted_IMPLEMENTATION_ONCE

const base16_scheme base24_tango_half_adapted = {
    .name = "Tango Half Adapted",
    .base = {
        { .r = 254, .g = 255, .b = 255 },
        { .r = 241, .g = 241, .b = 241 },
        { .r = 220, .g = 220, .b = 220 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 117, .g = 117, .b = 117 },
        { .r = 79, .g = 79, .b = 79 },
        { .r = 50, .g = 50, .b = 50 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 255, .g = 0, .b = 0 },
        { .r = 226, .g = 132, .b = 0 },
        { .r = 226, .g = 191, .b = 0 },
        { .r = 76, .g = 195, .b = 0 },
        { .r = 0, .g = 189, .b = 195 },
        { .r = 0, .g = 141, .b = 245 },
        { .r = 168, .g = 107, .b = 178 },
        { .r = 127, .g = 0, .b = 0 },

        /* Base24 */
        { .r = 80, .g = 82, .b = 78 },
        { .r = 40, .g = 41, .b = 39 },
        { .r = 255, .g = 0, .b = 18 },
        { .r = 255, .g = 235, .b = 0 },
        { .r = 138, .g = 246, .b = 0 },
        { .r = 0, .g = 246, .b = 250 },
        { .r = 117, .g = 190, .b = 255 },
        { .r = 215, .g = 152, .b = 208 }
    },
    .system = 24
};

#endif  /* BASE24_tango_half_adapted_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
