/**
 * Base16 Harmonic16 Dark 
 *
 * @author Jannik Siebert (https://github.com/janniks)
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

#ifndef BASE16_harmonic16_dark_H__
#define BASE16_harmonic16_dark_H__

/**
 * The Base16 Harmonic16 Dark scheme.
 *
 * @author Jannik Siebert (https://github.com/janniks)
 */
extern const base16_scheme base16_harmonic16_dark;

#endif  /* BASE16_harmonic16_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_harmonic16_dark_IMPLEMENTATION_ONCE
#define BASE16_harmonic16_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_harmonic16_dark = {
    .name = "Harmonic16 Dark",
    .base = {
        { .r = 11, .g = 28, .b = 44 },
        { .r = 34, .g = 59, .b = 84 },
        { .r = 64, .g = 92, .b = 121 },
        { .r = 98, .g = 126, .b = 153 },
        { .r = 170, .g = 188, .b = 206 },
        { .r = 203, .g = 214, .b = 226 },
        { .r = 229, .g = 235, .b = 241 },
        { .r = 247, .g = 249, .b = 251 },
        { .r = 191, .g = 139, .b = 86 },
        { .r = 191, .g = 191, .b = 86 },
        { .r = 139, .g = 191, .b = 86 },
        { .r = 86, .g = 191, .b = 139 },
        { .r = 86, .g = 139, .b = 191 },
        { .r = 139, .g = 86, .b = 191 },
        { .r = 191, .g = 86, .b = 139 },
        { .r = 191, .g = 86, .b = 86 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 11, .g = 28, .b = 44 },
        { .r = 11, .g = 28, .b = 44 },
        { .r = 191, .g = 139, .b = 86 },
        { .r = 139, .g = 191, .b = 86 },
        { .r = 86, .g = 191, .b = 139 },
        { .r = 86, .g = 139, .b = 191 },
        { .r = 139, .g = 86, .b = 191 },
        { .r = 191, .g = 86, .b = 139 }
    },
    .system = 16
};

#endif  /* BASE16_harmonic16_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
