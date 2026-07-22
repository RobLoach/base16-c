/**
 * Base24 Oceanic Material 
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

#ifndef BASE24_oceanic_material_H__
#define BASE24_oceanic_material_H__

/**
 * The Base24 Oceanic Material scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_oceanic_material;

#endif  /* BASE24_oceanic_material_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_oceanic_material_IMPLEMENTATION_ONCE
#define BASE24_oceanic_material_IMPLEMENTATION_ONCE

const base16_scheme base24_oceanic_material = {
    .name = "Oceanic Material",
    .base = {
        { .r = 28, .g = 38, .b = 43 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 118, .g = 118, .b = 118 },
        { .r = 129, .g = 129, .b = 129 },
        { .r = 141, .g = 141, .b = 141 },
        { .r = 152, .g = 152, .b = 152 },
        { .r = 164, .g = 164, .b = 164 },
        { .r = 255, .g = 254, .b = 254 },
        { .r = 238, .g = 42, .b = 41 },
        { .r = 254, .g = 233, .b = 46 },
        { .r = 83, .g = 164, .b = 243 },
        { .r = 63, .g = 163, .b = 63 },
        { .r = 22, .g = 174, .b = 201 },
        { .r = 29, .g = 128, .b = 239 },
        { .r = 136, .g = 0, .b = 160 },
        { .r = 119, .g = 21, .b = 20 },

        /* Base24 */
        { .r = 78, .g = 78, .b = 78 },
        { .r = 39, .g = 39, .b = 39 },
        { .r = 220, .g = 91, .b = 96 },
        { .r = 254, .g = 240, .b = 99 },
        { .r = 112, .g = 190, .b = 113 },
        { .r = 66, .g = 198, .b = 217 },
        { .r = 83, .g = 164, .b = 243 },
        { .r = 169, .g = 77, .b = 187 }
    },
    .system = 24
};

#endif  /* BASE24_oceanic_material_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
