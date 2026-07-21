/**
 * Base16 Chinoiserie A variant of Tomorrow scheme from https://github.com/stonebuddha/base16-chinoiserie-scheme
 *
 * @author Di Wang (https://cs.cmu.edu/~diw3)
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

#ifndef BASE16_chinoiserie_H__
#define BASE16_chinoiserie_H__

/**
 * The Base16 Chinoiserie scheme.
 *
 * @author Di Wang (https://cs.cmu.edu/~diw3)
 */
extern const base16_scheme base16_chinoiserie;

#endif  /* BASE16_chinoiserie_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_chinoiserie_IMPLEMENTATION_ONCE
#define BASE16_chinoiserie_IMPLEMENTATION_ONCE

const base16_scheme base16_chinoiserie = {
    .name = "Chinoiserie",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 214, .g = 214, .b = 214 },
        { .r = 128, .g = 118, .b = 110 },
        { .r = 145, .g = 128, .b = 114 },
        { .r = 74, .g = 64, .b = 53 },
        { .r = 47, .g = 47, .b = 53 },
        { .r = 19, .g = 17, .b = 36 },
        { .r = 192, .g = 72, .b = 81 },
        { .r = 251, .g = 139, .b = 5 },
        { .r = 214, .g = 160, .b = 29 },
        { .r = 66, .g = 134, .b = 117 },
        { .r = 43, .g = 115, .b = 175 },
        { .r = 129, .g = 92, .b = 148 },
        { .r = 192, .g = 142, .b = 175 },
        { .r = 148, .g = 88, .b = 51 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 192, .g = 72, .b = 81 },
        { .r = 214, .g = 160, .b = 29 },
        { .r = 66, .g = 134, .b = 117 },
        { .r = 43, .g = 115, .b = 175 },
        { .r = 129, .g = 92, .b = 148 },
        { .r = 192, .g = 142, .b = 175 }
    },
    .system = 16
};

#endif  /* BASE16_chinoiserie_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
