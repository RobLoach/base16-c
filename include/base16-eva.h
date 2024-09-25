/**
 * Base16 Eva 
 *
 * @author kjakapat (https://github.com/kjakapat)
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

#ifndef BASE16_eva_H__
#define BASE16_eva_H__

/**
 * The Base16 Eva scheme.
 *
 * @author kjakapat (https://github.com/kjakapat)
 */
extern const base16_scheme base16_eva;

#endif  /* BASE16_eva_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_eva_IMPLEMENTATION_ONCE
#define BASE16_eva_IMPLEMENTATION_ONCE

const base16_scheme base16_eva = {
    .name = "Eva",
    .base = {
        { .r = 42, .g = 59, .b = 77 },
        { .r = 61, .g = 86, .b = 111 },
        { .r = 75, .g = 105, .b = 136 },
        { .r = 85, .g = 121, .b = 156 },
        { .r = 126, .g = 144, .b = 163 },
        { .r = 159, .g = 162, .b = 166 },
        { .r = 214, .g = 215, .b = 217 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 196, .g = 103, .b = 108 },
        { .r = 255, .g = 153, .b = 102 },
        { .r = 255, .g = 255, .b = 102 },
        { .r = 102, .g = 255, .b = 102 },
        { .r = 75, .g = 143, .b = 119 },
        { .r = 21, .g = 244, .b = 238 },
        { .r = 156, .g = 108, .b = 211 },
        { .r = 187, .g = 100, .b = 169 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 42, .g = 59, .b = 77 },
        { .r = 42, .g = 59, .b = 77 },
        { .r = 196, .g = 103, .b = 108 },
        { .r = 255, .g = 255, .b = 102 },
        { .r = 102, .g = 255, .b = 102 },
        { .r = 75, .g = 143, .b = 119 },
        { .r = 21, .g = 244, .b = 238 },
        { .r = 156, .g = 108, .b = 211 }
    },
    .system = 16
};

#endif  /* BASE16_eva_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
