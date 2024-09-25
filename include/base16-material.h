/**
 * Base16 Material 
 *
 * @author Nate Peterson
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
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_material_H__
#define BASE16_material_H__

/**
 * The Base16 Material scheme.
 *
 * @author Nate Peterson
 */
extern const base16_scheme base16_material;

#endif  /* BASE16_material_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_material_IMPLEMENTATION_ONCE
#define BASE16_material_IMPLEMENTATION_ONCE

const base16_scheme base16_material = {
    .name = "Material",
    .base = {
        { .r = 38, .g = 50, .b = 56 },
        { .r = 46, .g = 60, .b = 67 },
        { .r = 49, .g = 69, .b = 73 },
        { .r = 84, .g = 110, .b = 122 },
        { .r = 178, .g = 204, .b = 214 },
        { .r = 238, .g = 255, .b = 255 },
        { .r = 238, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 240, .g = 113, .b = 120 },
        { .r = 247, .g = 140, .b = 108 },
        { .r = 255, .g = 203, .b = 107 },
        { .r = 195, .g = 232, .b = 141 },
        { .r = 137, .g = 221, .b = 255 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 199, .g = 146, .b = 234 },
        { .r = 255, .g = 83, .b = 112 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 38, .g = 50, .b = 56 },
        { .r = 38, .g = 50, .b = 56 },
        { .r = 240, .g = 113, .b = 120 },
        { .r = 255, .g = 203, .b = 107 },
        { .r = 195, .g = 232, .b = 141 },
        { .r = 137, .g = 221, .b = 255 },
        { .r = 130, .g = 170, .b = 255 },
        { .r = 199, .g = 146, .b = 234 }
    },
    .system = 16
};

#endif  /* BASE16_material_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
