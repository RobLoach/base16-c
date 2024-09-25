/**
 * Base16 Fruit Soda 
 *
 * @author jozip
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

#ifndef BASE16_fruit_soda_H__
#define BASE16_fruit_soda_H__

/**
 * The Base16 Fruit Soda scheme.
 *
 * @author jozip
 */
extern const base16_scheme base16_fruit_soda;

#endif  /* BASE16_fruit_soda_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_fruit_soda_IMPLEMENTATION_ONCE
#define BASE16_fruit_soda_IMPLEMENTATION_ONCE

const base16_scheme base16_fruit_soda = {
    .name = "Fruit Soda",
    .base = {
        { .r = 241, .g = 236, .b = 241 },
        { .r = 224, .g = 222, .b = 224 },
        { .r = 216, .g = 213, .b = 213 },
        { .r = 181, .g = 180, .b = 182 },
        { .r = 151, .g = 149, .b = 152 },
        { .r = 81, .g = 81, .b = 81 },
        { .r = 71, .g = 69, .b = 69 },
        { .r = 45, .g = 44, .b = 44 },
        { .r = 254, .g = 62, .b = 49 },
        { .r = 254, .g = 109, .b = 8 },
        { .r = 247, .g = 226, .b = 3 },
        { .r = 71, .g = 247, .b = 76 },
        { .r = 15, .g = 156, .b = 253 },
        { .r = 41, .g = 49, .b = 223 },
        { .r = 97, .g = 31, .b = 206 },
        { .r = 177, .g = 111, .b = 64 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 241, .g = 236, .b = 241 },
        { .r = 241, .g = 236, .b = 241 },
        { .r = 254, .g = 62, .b = 49 },
        { .r = 247, .g = 226, .b = 3 },
        { .r = 71, .g = 247, .b = 76 },
        { .r = 15, .g = 156, .b = 253 },
        { .r = 41, .g = 49, .b = 223 },
        { .r = 97, .g = 31, .b = 206 }
    },
    .system = 16
};

#endif  /* BASE16_fruit_soda_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
