/**
 * Base16 Zenbones 
 *
 * @author mcchrish
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

#ifndef BASE16_zenbones_H__
#define BASE16_zenbones_H__

/**
 * The Base16 Zenbones scheme.
 *
 * @author mcchrish
 */
extern const base16_scheme base16_zenbones;

#endif  /* BASE16_zenbones_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_zenbones_IMPLEMENTATION_ONCE
#define BASE16_zenbones_IMPLEMENTATION_ONCE

const base16_scheme base16_zenbones = {
    .name = "Zenbones",
    .base = {
        { .r = 25, .g = 25, .b = 25 },
        { .r = 222, .g = 110, .b = 124 },
        { .r = 129, .g = 155, .b = 105 },
        { .r = 183, .g = 126, .b = 100 },
        { .r = 96, .g = 153, .b = 192 },
        { .r = 178, .g = 121, .b = 167 },
        { .r = 102, .g = 165, .b = 173 },
        { .r = 187, .g = 187, .b = 187 },
        { .r = 61, .g = 56, .b = 57 },
        { .r = 232, .g = 131, .b = 143 },
        { .r = 139, .g = 174, .b = 104 },
        { .r = 214, .g = 140, .b = 103 },
        { .r = 97, .g = 171, .b = 218 },
        { .r = 207, .g = 134, .b = 193 },
        { .r = 101, .g = 184, .b = 193 },
        { .r = 142, .g = 142, .b = 142 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 25, .g = 25, .b = 25 },
        { .r = 25, .g = 25, .b = 25 },
        { .r = 61, .g = 56, .b = 57 },
        { .r = 139, .g = 174, .b = 104 },
        { .r = 214, .g = 140, .b = 103 },
        { .r = 97, .g = 171, .b = 218 },
        { .r = 207, .g = 134, .b = 193 },
        { .r = 101, .g = 184, .b = 193 }
    },
    .system = 16
};

#endif  /* BASE16_zenbones_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
