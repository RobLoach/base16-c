/**
 * Base16 eris 
 *
 * @author ed (https://codeberg.org/ed)
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

#ifndef BASE16_eris_H__
#define BASE16_eris_H__

/**
 * The Base16 eris scheme.
 *
 * @author ed (https://codeberg.org/ed)
 */
extern const base16_scheme base16_eris;

#endif  /* BASE16_eris_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_eris_IMPLEMENTATION_ONCE
#define BASE16_eris_IMPLEMENTATION_ONCE

const base16_scheme base16_eris = {
    .name = "eris",
    .base = {
        { .r = 10, .g = 9, .b = 32 },
        { .r = 19, .g = 19, .b = 58 },
        { .r = 35, .g = 37, .b = 90 },
        { .r = 51, .g = 55, .b = 115 },
        { .r = 74, .g = 82, .b = 147 },
        { .r = 96, .g = 107, .b = 172 },
        { .r = 121, .g = 134, .b = 197 },
        { .r = 154, .g = 170, .b = 229 },
        { .r = 247, .g = 104, .b = 163 },
        { .r = 247, .g = 104, .b = 163 },
        { .r = 250, .g = 174, .b = 162 },
        { .r = 250, .g = 174, .b = 162 },
        { .r = 37, .g = 143, .b = 196 },
        { .r = 37, .g = 143, .b = 196 },
        { .r = 247, .g = 104, .b = 163 },
        { .r = 247, .g = 104, .b = 163 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 10, .g = 9, .b = 32 },
        { .r = 10, .g = 9, .b = 32 },
        { .r = 247, .g = 104, .b = 163 },
        { .r = 250, .g = 174, .b = 162 },
        { .r = 250, .g = 174, .b = 162 },
        { .r = 37, .g = 143, .b = 196 },
        { .r = 37, .g = 143, .b = 196 },
        { .r = 247, .g = 104, .b = 163 }
    },
    .system = 16
};

#endif  /* BASE16_eris_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
