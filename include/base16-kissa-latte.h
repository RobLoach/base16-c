/**
 * Base16 Kissa Latte 
 *
 * @author rwendell (https://github.com/rwendell/kissa)
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

#ifndef BASE16_kissa_latte_H__
#define BASE16_kissa_latte_H__

/**
 * The Base16 Kissa Latte scheme.
 *
 * @author rwendell (https://github.com/rwendell/kissa)
 */
extern const base16_scheme base16_kissa_latte;

#endif  /* BASE16_kissa_latte_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_kissa_latte_IMPLEMENTATION_ONCE
#define BASE16_kissa_latte_IMPLEMENTATION_ONCE

const base16_scheme base16_kissa_latte = {
    .name = "Kissa Latte",
    .base = {
        { .r = 245, .g = 244, .b = 240 },
        { .r = 232, .g = 231, .b = 227 },
        { .r = 213, .g = 210, .b = 203 },
        { .r = 145, .g = 136, .b = 125 },
        { .r = 116, .g = 108, .b = 98 },
        { .r = 31, .g = 28, .b = 22 },
        { .r = 110, .g = 100, .b = 89 },
        { .r = 254, .g = 252, .b = 250 },
        { .r = 158, .g = 62, .b = 62 },
        { .r = 143, .g = 93, .b = 34 },
        { .r = 125, .g = 104, .b = 32 },
        { .r = 56, .g = 112, .b = 80 },
        { .r = 40, .g = 112, .b = 112 },
        { .r = 52, .g = 104, .b = 168 },
        { .r = 100, .g = 56, .b = 160 },
        { .r = 148, .g = 58, .b = 104 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 245, .g = 244, .b = 240 },
        { .r = 245, .g = 244, .b = 240 },
        { .r = 158, .g = 62, .b = 62 },
        { .r = 125, .g = 104, .b = 32 },
        { .r = 56, .g = 112, .b = 80 },
        { .r = 40, .g = 112, .b = 112 },
        { .r = 52, .g = 104, .b = 168 },
        { .r = 100, .g = 56, .b = 160 }
    },
    .system = 16
};

#endif  /* BASE16_kissa_latte_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
