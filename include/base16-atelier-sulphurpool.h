/**
 * Base16 Atelier Sulphurpool 
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

#ifndef BASE16_atelier_sulphurpool_H__
#define BASE16_atelier_sulphurpool_H__

/**
 * The Base16 Atelier Sulphurpool scheme.
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_sulphurpool;

#endif  /* BASE16_atelier_sulphurpool_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_sulphurpool_IMPLEMENTATION_ONCE
#define BASE16_atelier_sulphurpool_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_sulphurpool = {
    .name = "Atelier Sulphurpool",
    .base = {
        { .r = 32, .g = 39, .b = 70 },
        { .r = 41, .g = 50, .b = 86 },
        { .r = 94, .g = 102, .b = 135 },
        { .r = 107, .g = 115, .b = 148 },
        { .r = 137, .g = 142, .b = 164 },
        { .r = 151, .g = 157, .b = 180 },
        { .r = 223, .g = 226, .b = 241 },
        { .r = 245, .g = 247, .b = 255 },
        { .r = 201, .g = 73, .b = 34 },
        { .r = 199, .g = 107, .b = 41 },
        { .r = 192, .g = 139, .b = 48 },
        { .r = 172, .g = 151, .b = 57 },
        { .r = 34, .g = 162, .b = 201 },
        { .r = 61, .g = 143, .b = 209 },
        { .r = 102, .g = 121, .b = 204 },
        { .r = 156, .g = 99, .b = 122 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 32, .g = 39, .b = 70 },
        { .r = 32, .g = 39, .b = 70 },
        { .r = 201, .g = 73, .b = 34 },
        { .r = 192, .g = 139, .b = 48 },
        { .r = 172, .g = 151, .b = 57 },
        { .r = 34, .g = 162, .b = 201 },
        { .r = 61, .g = 143, .b = 209 },
        { .r = 102, .g = 121, .b = 204 }
    },
    .system = 16
};

#endif  /* BASE16_atelier_sulphurpool_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
