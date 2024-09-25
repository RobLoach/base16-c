/**
 * Base16 Nebula 
 *
 * @author Gabriel Fontes (https://github.com/Misterio77)
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

#ifndef BASE16_nebula_H__
#define BASE16_nebula_H__

/**
 * The Base16 Nebula scheme.
 *
 * @author Gabriel Fontes (https://github.com/Misterio77)
 */
extern const base16_scheme base16_nebula;

#endif  /* BASE16_nebula_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_nebula_IMPLEMENTATION_ONCE
#define BASE16_nebula_IMPLEMENTATION_ONCE

const base16_scheme base16_nebula = {
    .name = "Nebula",
    .base = {
        { .r = 34, .g = 39, .b = 59 },
        { .r = 65, .g = 79, .b = 96 },
        { .r = 90, .g = 131, .b = 128 },
        { .r = 110, .g = 111, .b = 114 },
        { .r = 135, .g = 136, .b = 139 },
        { .r = 164, .g = 166, .b = 169 },
        { .r = 199, .g = 201, .b = 205 },
        { .r = 141, .g = 189, .b = 170 },
        { .r = 119, .g = 122, .b = 188 },
        { .r = 148, .g = 146, .b = 158 },
        { .r = 79, .g = 144, .b = 98 },
        { .r = 101, .g = 98, .b = 168 },
        { .r = 34, .g = 111, .b = 104 },
        { .r = 77, .g = 107, .b = 182 },
        { .r = 113, .g = 108, .b = 174 },
        { .r = 140, .g = 112, .b = 167 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 34, .g = 39, .b = 59 },
        { .r = 34, .g = 39, .b = 59 },
        { .r = 119, .g = 122, .b = 188 },
        { .r = 79, .g = 144, .b = 98 },
        { .r = 101, .g = 98, .b = 168 },
        { .r = 34, .g = 111, .b = 104 },
        { .r = 77, .g = 107, .b = 182 },
        { .r = 113, .g = 108, .b = 174 }
    },
    .system = 16
};

#endif  /* BASE16_nebula_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
