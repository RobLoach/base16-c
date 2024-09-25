/**
 * Base16 Gruvbox dark, pale 
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

#ifndef BASE16_gruvbox_dark_pale_H__
#define BASE16_gruvbox_dark_pale_H__

/**
 * The Base16 Gruvbox dark, pale scheme.
 *
 * @author Dawid Kurek (dawikur@gmail.com), morhetz (https://github.com/morhetz/gruvbox)
 */
extern const base16_scheme base16_gruvbox_dark_pale;

#endif  /* BASE16_gruvbox_dark_pale_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gruvbox_dark_pale_IMPLEMENTATION_ONCE
#define BASE16_gruvbox_dark_pale_IMPLEMENTATION_ONCE

const base16_scheme base16_gruvbox_dark_pale = {
    .name = "Gruvbox dark, pale",
    .base = {
        { .r = 38, .g = 38, .b = 38 },
        { .r = 58, .g = 58, .b = 58 },
        { .r = 78, .g = 78, .b = 78 },
        { .r = 138, .g = 138, .b = 138 },
        { .r = 148, .g = 148, .b = 148 },
        { .r = 218, .g = 185, .b = 151 },
        { .r = 213, .g = 196, .b = 161 },
        { .r = 235, .g = 219, .b = 178 },
        { .r = 215, .g = 95, .b = 95 },
        { .r = 255, .g = 135, .b = 0 },
        { .r = 255, .g = 175, .b = 0 },
        { .r = 175, .g = 175, .b = 0 },
        { .r = 133, .g = 173, .b = 133 },
        { .r = 131, .g = 173, .b = 173 },
        { .r = 212, .g = 133, .b = 173 },
        { .r = 214, .g = 93, .b = 14 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 38, .g = 38, .b = 38 },
        { .r = 38, .g = 38, .b = 38 },
        { .r = 215, .g = 95, .b = 95 },
        { .r = 255, .g = 175, .b = 0 },
        { .r = 175, .g = 175, .b = 0 },
        { .r = 133, .g = 173, .b = 133 },
        { .r = 131, .g = 173, .b = 173 },
        { .r = 212, .g = 133, .b = 173 }
    },
    .system = 16
};

#endif  /* BASE16_gruvbox_dark_pale_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
