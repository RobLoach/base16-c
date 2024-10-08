/**
 * Base16 Brewer 
 *
 * @author Timothée Poisot (http://github.com/tpoisot)
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

#ifndef BASE16_brewer_H__
#define BASE16_brewer_H__

/**
 * The Base16 Brewer scheme.
 *
 * @author Timothée Poisot (http://github.com/tpoisot)
 */
extern const base16_scheme base16_brewer;

#endif  /* BASE16_brewer_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_brewer_IMPLEMENTATION_ONCE
#define BASE16_brewer_IMPLEMENTATION_ONCE

const base16_scheme base16_brewer = {
    .name = "Brewer",
    .base = {
        { .r = 12, .g = 13, .b = 14 },
        { .r = 46, .g = 47, .b = 48 },
        { .r = 81, .g = 82, .b = 83 },
        { .r = 115, .g = 116, .b = 117 },
        { .r = 149, .g = 150, .b = 151 },
        { .r = 183, .g = 184, .b = 185 },
        { .r = 218, .g = 219, .b = 220 },
        { .r = 252, .g = 253, .b = 254 },
        { .r = 227, .g = 26, .b = 28 },
        { .r = 230, .g = 85, .b = 13 },
        { .r = 220, .g = 160, .b = 96 },
        { .r = 49, .g = 163, .b = 84 },
        { .r = 128, .g = 177, .b = 211 },
        { .r = 49, .g = 130, .b = 189 },
        { .r = 117, .g = 107, .b = 177 },
        { .r = 177, .g = 89, .b = 40 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 12, .g = 13, .b = 14 },
        { .r = 12, .g = 13, .b = 14 },
        { .r = 227, .g = 26, .b = 28 },
        { .r = 220, .g = 160, .b = 96 },
        { .r = 49, .g = 163, .b = 84 },
        { .r = 128, .g = 177, .b = 211 },
        { .r = 49, .g = 130, .b = 189 },
        { .r = 117, .g = 107, .b = 177 }
    },
    .system = 16
};

#endif  /* BASE16_brewer_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
