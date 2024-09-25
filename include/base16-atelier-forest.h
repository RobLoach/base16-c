/**
 * Base16 Atelier Forest 
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
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

#ifndef BASE16_atelier_forest_H__
#define BASE16_atelier_forest_H__

/**
 * The Base16 Atelier Forest scheme.
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_forest;

#endif  /* BASE16_atelier_forest_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_forest_IMPLEMENTATION_ONCE
#define BASE16_atelier_forest_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_forest = {
    .name = "Atelier Forest",
    .base = {
        { .r = 27, .g = 25, .b = 24 },
        { .r = 44, .g = 36, .b = 33 },
        { .r = 104, .g = 97, .b = 94 },
        { .r = 118, .g = 110, .b = 107 },
        { .r = 156, .g = 148, .b = 145 },
        { .r = 168, .g = 161, .b = 159 },
        { .r = 230, .g = 226, .b = 224 },
        { .r = 241, .g = 239, .b = 238 },
        { .r = 242, .g = 44, .b = 64 },
        { .r = 223, .g = 83, .b = 32 },
        { .r = 195, .g = 132, .b = 24 },
        { .r = 123, .g = 151, .b = 38 },
        { .r = 61, .g = 151, .b = 184 },
        { .r = 64, .g = 126, .b = 231 },
        { .r = 102, .g = 102, .b = 234 },
        { .r = 195, .g = 63, .b = 243 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 27, .g = 25, .b = 24 },
        { .r = 27, .g = 25, .b = 24 },
        { .r = 242, .g = 44, .b = 64 },
        { .r = 195, .g = 132, .b = 24 },
        { .r = 123, .g = 151, .b = 38 },
        { .r = 61, .g = 151, .b = 184 },
        { .r = 64, .g = 126, .b = 231 },
        { .r = 102, .g = 102, .b = 234 }
    },
    .system = 16
};

#endif  /* BASE16_atelier_forest_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
