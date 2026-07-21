/**
 * Base16 Chinoiserie Morandi A variant of Tomorrow scheme from https://github.com/stonebuddha/base16-chinoiserie-scheme
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

#ifndef BASE16_chinoiserie_morandi_H__
#define BASE16_chinoiserie_morandi_H__

/**
 * The Base16 Chinoiserie Morandi scheme.
 *
 * @author Di Wang (https://cs.cmu.edu/~diw3)
 */
extern const base16_scheme base16_chinoiserie_morandi;

#endif  /* BASE16_chinoiserie_morandi_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_chinoiserie_morandi_IMPLEMENTATION_ONCE
#define BASE16_chinoiserie_morandi_IMPLEMENTATION_ONCE

const base16_scheme base16_chinoiserie_morandi = {
    .name = "Chinoiserie Morandi",
    .base = {
        { .r = 29, .g = 29, .b = 29 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 55, .g = 55, .b = 55 },
        { .r = 145, .g = 128, .b = 114 },
        { .r = 189, .g = 174, .b = 173 },
        { .r = 196, .g = 203, .b = 207 },
        { .r = 238, .g = 231, .b = 242 },
        { .r = 255, .g = 254, .b = 249 },
        { .r = 192, .g = 96, .b = 97 },
        { .r = 255, .g = 147, .b = 127 },
        { .r = 229, .g = 188, .b = 132 },
        { .r = 140, .g = 160, .b = 123 },
        { .r = 94, .g = 140, .b = 155 },
        { .r = 131, .g = 158, .b = 201 },
        { .r = 152, .g = 161, .b = 216 },
        { .r = 217, .g = 205, .b = 180 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 29, .g = 29, .b = 29 },
        { .r = 29, .g = 29, .b = 29 },
        { .r = 192, .g = 96, .b = 97 },
        { .r = 229, .g = 188, .b = 132 },
        { .r = 140, .g = 160, .b = 123 },
        { .r = 94, .g = 140, .b = 155 },
        { .r = 131, .g = 158, .b = 201 },
        { .r = 152, .g = 161, .b = 216 }
    },
    .system = 16
};

#endif  /* BASE16_chinoiserie_morandi_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
