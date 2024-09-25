/**
 * Base16 Catppuccin Mocha 
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

#ifndef BASE16_catppuccin_mocha_H__
#define BASE16_catppuccin_mocha_H__

/**
 * The Base16 Catppuccin Mocha scheme.
 *
 * @author https://github.com/catppuccin/catppuccin
 */
extern const base16_scheme base16_catppuccin_mocha;

#endif  /* BASE16_catppuccin_mocha_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_catppuccin_mocha_IMPLEMENTATION_ONCE
#define BASE16_catppuccin_mocha_IMPLEMENTATION_ONCE

const base16_scheme base16_catppuccin_mocha = {
    .name = "Catppuccin Mocha",
    .base = {
        { .r = 30, .g = 30, .b = 46 },
        { .r = 24, .g = 24, .b = 37 },
        { .r = 49, .g = 50, .b = 68 },
        { .r = 69, .g = 71, .b = 90 },
        { .r = 88, .g = 91, .b = 112 },
        { .r = 205, .g = 214, .b = 244 },
        { .r = 245, .g = 224, .b = 220 },
        { .r = 180, .g = 190, .b = 254 },
        { .r = 243, .g = 139, .b = 168 },
        { .r = 250, .g = 179, .b = 135 },
        { .r = 249, .g = 226, .b = 175 },
        { .r = 166, .g = 227, .b = 161 },
        { .r = 148, .g = 226, .b = 213 },
        { .r = 137, .g = 180, .b = 250 },
        { .r = 203, .g = 166, .b = 247 },
        { .r = 242, .g = 205, .b = 205 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 30, .g = 30, .b = 46 },
        { .r = 30, .g = 30, .b = 46 },
        { .r = 243, .g = 139, .b = 168 },
        { .r = 249, .g = 226, .b = 175 },
        { .r = 166, .g = 227, .b = 161 },
        { .r = 148, .g = 226, .b = 213 },
        { .r = 137, .g = 180, .b = 250 },
        { .r = 203, .g = 166, .b = 247 }
    },
    .system = 16
};

#endif  /* BASE16_catppuccin_mocha_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
