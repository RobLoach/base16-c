/**
 * Base16 Valua 
 *
 * @author Nonetrix (https://github.com/nonetrix)
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

#ifndef BASE16_valua_H__
#define BASE16_valua_H__

/**
 * The Base16 Valua scheme.
 *
 * @author Nonetrix (https://github.com/nonetrix)
 */
extern const base16_scheme base16_valua;

#endif  /* BASE16_valua_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_valua_IMPLEMENTATION_ONCE
#define BASE16_valua_IMPLEMENTATION_ONCE

const base16_scheme base16_valua = {
    .name = "Valua",
    .base = {
        { .r = 19, .g = 31, .b = 31 },
        { .r = 33, .g = 49, .b = 50 },
        { .r = 39, .g = 61, .b = 60 },
        { .r = 62, .g = 92, .b = 83 },
        { .r = 109, .g = 152, .b = 119 },
        { .r = 152, .g = 193, .b = 163 },
        { .r = 165, .g = 203, .b = 185 },
        { .r = 170, .g = 203, .b = 203 },
        { .r = 215, .g = 88, .b = 110 },
        { .r = 230, .g = 180, .b = 102 },
        { .r = 223, .g = 231, .b = 84 },
        { .r = 89, .g = 214, .b = 120 },
        { .r = 118, .g = 219, .b = 210 },
        { .r = 78, .g = 210, .b = 210 },
        { .r = 168, .g = 116, .b = 224 },
        { .r = 192, .g = 90, .b = 143 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 19, .g = 31, .b = 31 },
        { .r = 19, .g = 31, .b = 31 },
        { .r = 215, .g = 88, .b = 110 },
        { .r = 223, .g = 231, .b = 84 },
        { .r = 89, .g = 214, .b = 120 },
        { .r = 118, .g = 219, .b = 210 },
        { .r = 78, .g = 210, .b = 210 },
        { .r = 168, .g = 116, .b = 224 }
    },
    .system = 16
};

#endif  /* BASE16_valua_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
