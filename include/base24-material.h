/**
 * Base24 Material 
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

#ifndef BASE24_material_H__
#define BASE24_material_H__

/**
 * The Base24 Material scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_material;

#endif  /* BASE24_material_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_material_IMPLEMENTATION_ONCE
#define BASE24_material_IMPLEMENTATION_ONCE

const base16_scheme base24_material = {
    .name = "Material",
    .base = {
        { .r = 234, .g = 234, .b = 234 },
        { .r = 33, .g = 33, .b = 33 },
        { .r = 66, .g = 66, .b = 66 },
        { .r = 109, .g = 109, .b = 109 },
        { .r = 152, .g = 152, .b = 152 },
        { .r = 195, .g = 195, .b = 195 },
        { .r = 238, .g = 238, .b = 238 },
        { .r = 216, .g = 216, .b = 216 },
        { .r = 183, .g = 20, .b = 30 },
        { .r = 245, .g = 151, .b = 29 },
        { .r = 83, .g = 164, .b = 243 },
        { .r = 69, .g = 123, .b = 35 },
        { .r = 14, .g = 112, .b = 124 },
        { .r = 19, .g = 78, .b = 178 },
        { .r = 85, .g = 0, .b = 135 },
        { .r = 91, .g = 10, .b = 15 },

        /* Base24 */
        { .r = 44, .g = 44, .b = 44 },
        { .r = 22, .g = 22, .b = 22 },
        { .r = 232, .g = 58, .b = 63 },
        { .r = 254, .g = 233, .b = 46 },
        { .r = 122, .g = 186, .b = 57 },
        { .r = 38, .g = 186, .b = 209 },
        { .r = 83, .g = 164, .b = 243 },
        { .r = 169, .g = 77, .b = 187 }
    },
    .system = 24
};

#endif  /* BASE24_material_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
