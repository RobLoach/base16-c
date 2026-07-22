/**
 * Base24 Galaxy 
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

#ifndef BASE24_galaxy_H__
#define BASE24_galaxy_H__

/**
 * The Base24 Galaxy scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_galaxy;

#endif  /* BASE24_galaxy_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_galaxy_IMPLEMENTATION_ONCE
#define BASE24_galaxy_IMPLEMENTATION_ONCE

const base16_scheme base24_galaxy = {
    .name = "Galaxy",
    .base = {
        { .r = 28, .g = 40, .b = 54 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 110, .g = 110, .b = 110 },
        { .r = 136, .g = 136, .b = 136 },
        { .r = 161, .g = 161, .b = 161 },
        { .r = 187, .g = 187, .b = 187 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 249, .g = 85, .b = 95 },
        { .r = 253, .g = 186, .b = 41 },
        { .r = 253, .g = 240, .b = 41 },
        { .r = 32, .g = 175, .b = 137 },
        { .r = 30, .g = 158, .b = 230 },
        { .r = 88, .g = 156, .b = 245 },
        { .r = 147, .g = 77, .b = 149 },
        { .r = 124, .g = 42, .b = 47 },

        /* Base24 */
        { .r = 56, .g = 56, .b = 56 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 250, .g = 139, .b = 142 },
        { .r = 255, .g = 255, .b = 85 },
        { .r = 52, .g = 187, .b = 153 },
        { .r = 57, .g = 120, .b = 187 },
        { .r = 88, .g = 156, .b = 245 },
        { .r = 231, .g = 85, .b = 152 }
    },
    .system = 24
};

#endif  /* BASE24_galaxy_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
