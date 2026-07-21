/**
 * Base24 Rippedcasts 
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

#ifndef BASE24_rippedcasts_H__
#define BASE24_rippedcasts_H__

/**
 * The Base24 Rippedcasts scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_rippedcasts;

#endif  /* BASE24_rippedcasts_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_rippedcasts_IMPLEMENTATION_ONCE
#define BASE24_rippedcasts_IMPLEMENTATION_ONCE

const base16_scheme base24_rippedcasts = {
    .name = "Rippedcasts",
    .base = {
        { .r = 43, .g = 43, .b = 43 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 102, .g = 102, .b = 102 },
        { .r = 124, .g = 124, .b = 124 },
        { .r = 146, .g = 146, .b = 146 },
        { .r = 168, .g = 168, .b = 168 },
        { .r = 191, .g = 191, .b = 191 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 205, .g = 175, .b = 149 },
        { .r = 191, .g = 187, .b = 31 },
        { .r = 134, .g = 189, .b = 201 },
        { .r = 167, .g = 255, .b = 96 },
        { .r = 89, .g = 100, .b = 126 },
        { .r = 117, .g = 165, .b = 176 },
        { .r = 255, .g = 115, .b = 253 },
        { .r = 102, .g = 87, .b = 74 },

        /* Base24 */
        { .r = 68, .g = 68, .b = 68 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 238, .g = 203, .b = 173 },
        { .r = 229, .g = 229, .b = 0 },
        { .r = 188, .g = 238, .b = 104 },
        { .r = 140, .g = 155, .b = 195 },
        { .r = 134, .g = 189, .b = 201 },
        { .r = 229, .g = 0, .b = 229 }
    },
    .system = 24
};

#endif  /* BASE24_rippedcasts_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
