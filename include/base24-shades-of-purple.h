/**
 * Base24 Shades Of Purple 
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

#ifndef BASE24_shades_of_purple_H__
#define BASE24_shades_of_purple_H__

/**
 * The Base24 Shades Of Purple scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_shades_of_purple;

#endif  /* BASE24_shades_of_purple_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_shades_of_purple_IMPLEMENTATION_ONCE
#define BASE24_shades_of_purple_IMPLEMENTATION_ONCE

const base16_scheme base24_shades_of_purple = {
    .name = "Shades Of Purple",
    .base = {
        { .r = 30, .g = 29, .b = 64 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 103, .g = 103, .b = 103 },
        { .r = 127, .g = 127, .b = 127 },
        { .r = 151, .g = 151, .b = 151 },
        { .r = 175, .g = 175, .b = 175 },
        { .r = 199, .g = 199, .b = 199 },
        { .r = 254, .g = 255, .b = 255 },
        { .r = 217, .g = 4, .b = 41 },
        { .r = 255, .g = 231, .b = 0 },
        { .r = 104, .g = 113, .b = 255 },
        { .r = 58, .g = 217, .b = 0 },
        { .r = 0, .g = 197, .b = 199 },
        { .r = 105, .g = 67, .b = 255 },
        { .r = 255, .g = 43, .b = 112 },
        { .r = 108, .g = 2, .b = 20 },

        /* Base24 */
        { .r = 68, .g = 68, .b = 68 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 249, .g = 41, .b = 27 },
        { .r = 241, .g = 208, .b = 0 },
        { .r = 66, .g = 212, .b = 37 },
        { .r = 121, .g = 231, .b = 250 },
        { .r = 104, .g = 113, .b = 255 },
        { .r = 255, .g = 118, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_shades_of_purple_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
