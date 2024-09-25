/**
 * Base16 Darcula 
 *
 * @author jetbrains
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

#ifndef BASE16_darcula_H__
#define BASE16_darcula_H__

/**
 * The Base16 Darcula scheme.
 *
 * @author jetbrains
 */
extern const base16_scheme base16_darcula;

#endif  /* BASE16_darcula_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_darcula_IMPLEMENTATION_ONCE
#define BASE16_darcula_IMPLEMENTATION_ONCE

const base16_scheme base16_darcula = {
    .name = "Darcula",
    .base = {
        { .r = 43, .g = 43, .b = 43 },
        { .r = 50, .g = 50, .b = 50 },
        { .r = 50, .g = 50, .b = 50 },
        { .r = 96, .g = 99, .b = 102 },
        { .r = 164, .g = 163, .b = 163 },
        { .r = 169, .g = 183, .b = 198 },
        { .r = 255, .g = 198, .b = 109 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 78, .g = 173, .b = 229 },
        { .r = 104, .g = 151, .b = 87 },
        { .r = 187, .g = 181, .b = 41 },
        { .r = 106, .g = 135, .b = 89 },
        { .r = 98, .g = 151, .b = 85 },
        { .r = 152, .g = 118, .b = 170 },
        { .r = 204, .g = 120, .b = 50 },
        { .r = 128, .g = 128, .b = 128 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 43, .g = 43, .b = 43 },
        { .r = 43, .g = 43, .b = 43 },
        { .r = 78, .g = 173, .b = 229 },
        { .r = 187, .g = 181, .b = 41 },
        { .r = 106, .g = 135, .b = 89 },
        { .r = 98, .g = 151, .b = 85 },
        { .r = 152, .g = 118, .b = 170 },
        { .r = 204, .g = 120, .b = 50 }
    },
    .system = 16
};

#endif  /* BASE16_darcula_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
