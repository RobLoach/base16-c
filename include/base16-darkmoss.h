/**
 * Base16 darkmoss 
 *
 * @author Gabriel Avanzi (https://github.com/avanzzzi)
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

#ifndef BASE16_darkmoss_H__
#define BASE16_darkmoss_H__

/**
 * The Base16 darkmoss scheme.
 *
 * @author Gabriel Avanzi (https://github.com/avanzzzi)
 */
extern const base16_scheme base16_darkmoss;

#endif  /* BASE16_darkmoss_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_darkmoss_IMPLEMENTATION_ONCE
#define BASE16_darkmoss_IMPLEMENTATION_ONCE

const base16_scheme base16_darkmoss = {
    .name = "darkmoss",
    .base = {
        { .r = 23, .g = 30, .b = 31 },
        { .r = 37, .g = 44, .b = 45 },
        { .r = 55, .g = 60, .b = 61 },
        { .r = 85, .g = 94, .b = 95 },
        { .r = 129, .g = 143, .b = 128 },
        { .r = 199, .g = 199, .b = 165 },
        { .r = 227, .g = 227, .b = 200 },
        { .r = 225, .g = 234, .b = 239 },
        { .r = 255, .g = 70, .b = 88 },
        { .r = 230, .g = 219, .b = 116 },
        { .r = 253, .g = 177, .b = 31 },
        { .r = 73, .g = 145, .b = 128 },
        { .r = 102, .g = 217, .b = 239 },
        { .r = 73, .g = 128, .b = 145 },
        { .r = 155, .g = 192, .b = 200 },
        { .r = 210, .g = 123, .b = 83 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 23, .g = 30, .b = 31 },
        { .r = 23, .g = 30, .b = 31 },
        { .r = 255, .g = 70, .b = 88 },
        { .r = 253, .g = 177, .b = 31 },
        { .r = 73, .g = 145, .b = 128 },
        { .r = 102, .g = 217, .b = 239 },
        { .r = 73, .g = 128, .b = 145 },
        { .r = 155, .g = 192, .b = 200 }
    },
    .system = 16
};

#endif  /* BASE16_darkmoss_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
