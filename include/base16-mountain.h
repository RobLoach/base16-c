/**
 * Base16 Mountain 
 *
 * @author gnsfujiwara (https://github.com/gnsfujiwara)
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

#ifndef BASE16_mountain_H__
#define BASE16_mountain_H__

/**
 * The Base16 Mountain scheme.
 *
 * @author gnsfujiwara (https://github.com/gnsfujiwara)
 */
extern const base16_scheme base16_mountain;

#endif  /* BASE16_mountain_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_mountain_IMPLEMENTATION_ONCE
#define BASE16_mountain_IMPLEMENTATION_ONCE

const base16_scheme base16_mountain = {
    .name = "Mountain",
    .base = {
        { .r = 15, .g = 15, .b = 15 },
        { .r = 25, .g = 25, .b = 25 },
        { .r = 38, .g = 38, .b = 38 },
        { .r = 76, .g = 76, .b = 76 },
        { .r = 172, .g = 138, .b = 140 },
        { .r = 202, .g = 202, .b = 202 },
        { .r = 231, .g = 231, .b = 231 },
        { .r = 240, .g = 240, .b = 240 },
        { .r = 172, .g = 138, .b = 140 },
        { .r = 206, .g = 177, .b = 136 },
        { .r = 172, .g = 169, .b = 138 },
        { .r = 138, .g = 172, .b = 139 },
        { .r = 138, .g = 171, .b = 172 },
        { .r = 143, .g = 138, .b = 172 },
        { .r = 172, .g = 138, .b = 172 },
        { .r = 172, .g = 138, .b = 140 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 15, .g = 15, .b = 15 },
        { .r = 15, .g = 15, .b = 15 },
        { .r = 172, .g = 138, .b = 140 },
        { .r = 172, .g = 169, .b = 138 },
        { .r = 138, .g = 172, .b = 139 },
        { .r = 138, .g = 171, .b = 172 },
        { .r = 143, .g = 138, .b = 172 },
        { .r = 172, .g = 138, .b = 172 }
    },
    .system = 16
};

#endif  /* BASE16_mountain_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
