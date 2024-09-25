/**
 * Base16 UwUnicorn 
 *
 * @author Fernando Marques (https://github.com/RakkiUwU) and Gabriel Fontes (https://github.com/Misterio77)
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

#ifndef BASE16_uwunicorn_H__
#define BASE16_uwunicorn_H__

/**
 * The Base16 UwUnicorn scheme.
 *
 * @author Fernando Marques (https://github.com/RakkiUwU) and Gabriel Fontes (https://github.com/Misterio77)
 */
extern const base16_scheme base16_uwunicorn;

#endif  /* BASE16_uwunicorn_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_uwunicorn_IMPLEMENTATION_ONCE
#define BASE16_uwunicorn_IMPLEMENTATION_ONCE

const base16_scheme base16_uwunicorn = {
    .name = "UwUnicorn",
    .base = {
        { .r = 36, .g = 27, .b = 38 },
        { .r = 47, .g = 42, .b = 63 },
        { .r = 70, .g = 53, .b = 74 },
        { .r = 108, .g = 60, .b = 178 },
        { .r = 126, .g = 95, .b = 131 },
        { .r = 238, .g = 213, .b = 217 },
        { .r = 217, .g = 194, .b = 198 },
        { .r = 228, .g = 204, .b = 208 },
        { .r = 135, .g = 123, .b = 182 },
        { .r = 222, .g = 91, .b = 68 },
        { .r = 168, .g = 74, .b = 115 },
        { .r = 201, .g = 101, .b = 191 },
        { .r = 156, .g = 95, .b = 206 },
        { .r = 106, .g = 158, .b = 181 },
        { .r = 120, .g = 163, .b = 143 },
        { .r = 163, .g = 160, .b = 121 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 36, .g = 27, .b = 38 },
        { .r = 36, .g = 27, .b = 38 },
        { .r = 135, .g = 123, .b = 182 },
        { .r = 168, .g = 74, .b = 115 },
        { .r = 201, .g = 101, .b = 191 },
        { .r = 156, .g = 95, .b = 206 },
        { .r = 106, .g = 158, .b = 181 },
        { .r = 120, .g = 163, .b = 143 }
    },
    .system = 16
};

#endif  /* BASE16_uwunicorn_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
