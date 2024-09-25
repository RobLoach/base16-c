/**
 * Base16 Catppuccin Macchiato 
 *
 * @author https://github.com/catppuccin/catppuccin
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

#ifndef BASE16_catppuccin_macchiato_H__
#define BASE16_catppuccin_macchiato_H__

/**
 * The Base16 Catppuccin Macchiato scheme.
 *
 * @author https://github.com/catppuccin/catppuccin
 */
extern const base16_scheme base16_catppuccin_macchiato;

#endif  /* BASE16_catppuccin_macchiato_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_catppuccin_macchiato_IMPLEMENTATION_ONCE
#define BASE16_catppuccin_macchiato_IMPLEMENTATION_ONCE

const base16_scheme base16_catppuccin_macchiato = {
    .name = "Catppuccin Macchiato",
    .base = {
        { .r = 36, .g = 39, .b = 58 },
        { .r = 30, .g = 32, .b = 48 },
        { .r = 54, .g = 58, .b = 79 },
        { .r = 73, .g = 77, .b = 100 },
        { .r = 91, .g = 96, .b = 120 },
        { .r = 202, .g = 211, .b = 245 },
        { .r = 244, .g = 219, .b = 214 },
        { .r = 183, .g = 189, .b = 248 },
        { .r = 237, .g = 135, .b = 150 },
        { .r = 245, .g = 169, .b = 127 },
        { .r = 238, .g = 212, .b = 159 },
        { .r = 166, .g = 218, .b = 149 },
        { .r = 139, .g = 213, .b = 202 },
        { .r = 138, .g = 173, .b = 244 },
        { .r = 198, .g = 160, .b = 246 },
        { .r = 240, .g = 198, .b = 198 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 36, .g = 39, .b = 58 },
        { .r = 36, .g = 39, .b = 58 },
        { .r = 237, .g = 135, .b = 150 },
        { .r = 238, .g = 212, .b = 159 },
        { .r = 166, .g = 218, .b = 149 },
        { .r = 139, .g = 213, .b = 202 },
        { .r = 138, .g = 173, .b = 244 },
        { .r = 198, .g = 160, .b = 246 }
    },
    .system = 16
};

#endif  /* BASE16_catppuccin_macchiato_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
