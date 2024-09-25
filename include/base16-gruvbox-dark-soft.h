/**
 * Base16 Gruvbox dark, soft 
 *
 * @author Dawid Kurek (dawikur@gmail.com), morhetz (https://github.com/morhetz/gruvbox)
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

#ifndef BASE16_gruvbox_dark_soft_H__
#define BASE16_gruvbox_dark_soft_H__

/**
 * The Base16 Gruvbox dark, soft scheme.
 *
 * @author Dawid Kurek (dawikur@gmail.com), morhetz (https://github.com/morhetz/gruvbox)
 */
extern const base16_scheme base16_gruvbox_dark_soft;

#endif  /* BASE16_gruvbox_dark_soft_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gruvbox_dark_soft_IMPLEMENTATION_ONCE
#define BASE16_gruvbox_dark_soft_IMPLEMENTATION_ONCE

const base16_scheme base16_gruvbox_dark_soft = {
    .name = "Gruvbox dark, soft",
    .base = {
        { .r = 50, .g = 48, .b = 47 },
        { .r = 60, .g = 56, .b = 54 },
        { .r = 80, .g = 73, .b = 69 },
        { .r = 102, .g = 92, .b = 84 },
        { .r = 189, .g = 174, .b = 147 },
        { .r = 213, .g = 196, .b = 161 },
        { .r = 235, .g = 219, .b = 178 },
        { .r = 251, .g = 241, .b = 199 },
        { .r = 251, .g = 73, .b = 52 },
        { .r = 254, .g = 128, .b = 25 },
        { .r = 250, .g = 189, .b = 47 },
        { .r = 184, .g = 187, .b = 38 },
        { .r = 142, .g = 192, .b = 124 },
        { .r = 131, .g = 165, .b = 152 },
        { .r = 211, .g = 134, .b = 155 },
        { .r = 214, .g = 93, .b = 14 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 50, .g = 48, .b = 47 },
        { .r = 50, .g = 48, .b = 47 },
        { .r = 251, .g = 73, .b = 52 },
        { .r = 250, .g = 189, .b = 47 },
        { .r = 184, .g = 187, .b = 38 },
        { .r = 142, .g = 192, .b = 124 },
        { .r = 131, .g = 165, .b = 152 },
        { .r = 211, .g = 134, .b = 155 }
    },
    .system = 16
};

#endif  /* BASE16_gruvbox_dark_soft_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
