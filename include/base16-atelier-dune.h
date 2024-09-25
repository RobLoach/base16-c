/**
 * Base16 Atelier Dune 
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

#ifndef BASE16_atelier_dune_H__
#define BASE16_atelier_dune_H__

/**
 * The Base16 Atelier Dune scheme.
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_dune;

#endif  /* BASE16_atelier_dune_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_dune_IMPLEMENTATION_ONCE
#define BASE16_atelier_dune_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_dune = {
    .name = "Atelier Dune",
    .base = {
        { .r = 32, .g = 32, .b = 29 },
        { .r = 41, .g = 40, .b = 36 },
        { .r = 110, .g = 107, .b = 94 },
        { .r = 125, .g = 122, .b = 104 },
        { .r = 153, .g = 149, .b = 128 },
        { .r = 166, .g = 162, .b = 140 },
        { .r = 232, .g = 228, .b = 207 },
        { .r = 254, .g = 251, .b = 236 },
        { .r = 215, .g = 55, .b = 55 },
        { .r = 182, .g = 86, .b = 17 },
        { .r = 174, .g = 149, .b = 19 },
        { .r = 96, .g = 172, .b = 57 },
        { .r = 31, .g = 173, .b = 131 },
        { .r = 102, .g = 132, .b = 225 },
        { .r = 184, .g = 84, .b = 212 },
        { .r = 212, .g = 53, .b = 82 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 32, .g = 32, .b = 29 },
        { .r = 32, .g = 32, .b = 29 },
        { .r = 215, .g = 55, .b = 55 },
        { .r = 174, .g = 149, .b = 19 },
        { .r = 96, .g = 172, .b = 57 },
        { .r = 31, .g = 173, .b = 131 },
        { .r = 102, .g = 132, .b = 225 },
        { .r = 184, .g = 84, .b = 212 }
    },
    .system = 16
};

#endif  /* BASE16_atelier_dune_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
