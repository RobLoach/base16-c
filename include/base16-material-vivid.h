/**
 * Base16 Material Vivid 
 *
 * @author joshyrobot
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

#ifndef BASE16_material_vivid_H__
#define BASE16_material_vivid_H__

/**
 * The Base16 Material Vivid scheme.
 *
 * @author joshyrobot
 */
extern const base16_scheme base16_material_vivid;

#endif  /* BASE16_material_vivid_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_material_vivid_IMPLEMENTATION_ONCE
#define BASE16_material_vivid_IMPLEMENTATION_ONCE

const base16_scheme base16_material_vivid = {
    .name = "Material Vivid",
    .base = {
        { .r = 32, .g = 33, .b = 36 },
        { .r = 39, .g = 41, .b = 44 },
        { .r = 50, .g = 54, .b = 57 },
        { .r = 68, .g = 70, .b = 77 },
        { .r = 103, .g = 108, .b = 113 },
        { .r = 128, .g = 134, .b = 139 },
        { .r = 158, .g = 158, .b = 158 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 244, .g = 67, .b = 54 },
        { .r = 255, .g = 152, .b = 0 },
        { .r = 255, .g = 235, .b = 59 },
        { .r = 0, .g = 230, .b = 118 },
        { .r = 0, .g = 188, .b = 212 },
        { .r = 33, .g = 150, .b = 243 },
        { .r = 103, .g = 58, .b = 183 },
        { .r = 141, .g = 110, .b = 99 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 32, .g = 33, .b = 36 },
        { .r = 32, .g = 33, .b = 36 },
        { .r = 244, .g = 67, .b = 54 },
        { .r = 255, .g = 235, .b = 59 },
        { .r = 0, .g = 230, .b = 118 },
        { .r = 0, .g = 188, .b = 212 },
        { .r = 33, .g = 150, .b = 243 },
        { .r = 103, .g = 58, .b = 183 }
    },
    .system = 16
};

#endif  /* BASE16_material_vivid_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
