/**
 * Base16 Everforest Light (Soft) 
 *
 * @author Márcio Sobel (https://github.com/marciosobel)
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

#ifndef BASE16_everforest_light_soft_H__
#define BASE16_everforest_light_soft_H__

/**
 * The Base16 Everforest Light (Soft) scheme.
 *
 * @author Márcio Sobel (https://github.com/marciosobel)
 */
extern const base16_scheme base16_everforest_light_soft;

#endif  /* BASE16_everforest_light_soft_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_everforest_light_soft_IMPLEMENTATION_ONCE
#define BASE16_everforest_light_soft_IMPLEMENTATION_ONCE

const base16_scheme base16_everforest_light_soft = {
    .name = "Everforest Light (Soft)",
    .base = {
        { .r = 243, .g = 234, .b = 211 },
        { .r = 234, .g = 228, .b = 202 },
        { .r = 221, .g = 216, .b = 190 },
        { .r = 147, .g = 159, .b = 145 },
        { .r = 130, .g = 145, .b = 129 },
        { .r = 92, .g = 106, .b = 114 },
        { .r = 77, .g = 89, .b = 96 },
        { .r = 51, .g = 60, .b = 67 },
        { .r = 248, .g = 85, .b = 82 },
        { .r = 245, .g = 125, .b = 38 },
        { .r = 223, .g = 160, .b = 0 },
        { .r = 141, .g = 161, .b = 1 },
        { .r = 53, .g = 167, .b = 124 },
        { .r = 58, .g = 148, .b = 197 },
        { .r = 223, .g = 105, .b = 186 },
        { .r = 130, .g = 145, .b = 129 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 243, .g = 234, .b = 211 },
        { .r = 243, .g = 234, .b = 211 },
        { .r = 248, .g = 85, .b = 82 },
        { .r = 223, .g = 160, .b = 0 },
        { .r = 141, .g = 161, .b = 1 },
        { .r = 53, .g = 167, .b = 124 },
        { .r = 58, .g = 148, .b = 197 },
        { .r = 223, .g = 105, .b = 186 }
    },
    .system = 16
};

#endif  /* BASE16_everforest_light_soft_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
