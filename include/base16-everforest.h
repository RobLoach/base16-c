/**
 * Base16 Everforest 
 *
 * @author Sainnhe Park (https://github.com/sainnhe)
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

#ifndef BASE16_everforest_H__
#define BASE16_everforest_H__

/**
 * The Base16 Everforest scheme.
 *
 * @author Sainnhe Park (https://github.com/sainnhe)
 */
extern const base16_scheme base16_everforest;

#endif  /* BASE16_everforest_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_everforest_IMPLEMENTATION_ONCE
#define BASE16_everforest_IMPLEMENTATION_ONCE

const base16_scheme base16_everforest = {
    .name = "Everforest",
    .base = {
        { .r = 45, .g = 53, .b = 59 },
        { .r = 52, .g = 63, .b = 68 },
        { .r = 71, .g = 82, .b = 88 },
        { .r = 133, .g = 146, .b = 137 },
        { .r = 157, .g = 169, .b = 160 },
        { .r = 211, .g = 198, .b = 170 },
        { .r = 230, .g = 226, .b = 204 },
        { .r = 253, .g = 246, .b = 227 },
        { .r = 230, .g = 126, .b = 128 },
        { .r = 230, .g = 152, .b = 117 },
        { .r = 219, .g = 188, .b = 127 },
        { .r = 167, .g = 192, .b = 128 },
        { .r = 131, .g = 192, .b = 146 },
        { .r = 127, .g = 187, .b = 179 },
        { .r = 214, .g = 153, .b = 182 },
        { .r = 157, .g = 169, .b = 160 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 45, .g = 53, .b = 59 },
        { .r = 45, .g = 53, .b = 59 },
        { .r = 230, .g = 126, .b = 128 },
        { .r = 219, .g = 188, .b = 127 },
        { .r = 167, .g = 192, .b = 128 },
        { .r = 131, .g = 192, .b = 146 },
        { .r = 127, .g = 187, .b = 179 },
        { .r = 214, .g = 153, .b = 182 }
    },
    .system = 16
};

#endif  /* BASE16_everforest_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
