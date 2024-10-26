/**
 * Base24 Catppuccin Frappe 
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

#ifndef TINTED_C_COLOR_H__
#define TINTED_C_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct tinted_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} tinted_color;

#endif /* TINTED_C_COLOR_H__ */

#ifndef TINTED_C_SCHEME_H__
#define TINTED_C_SCHEME_H__

/**
 * A Tinted Base16 or Base24 Scheme.
 */
typedef struct tinted_scheme {
    const char *name; /** The name of the scheme. */
    tinted_color base[24]; /** An array of the base16 colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} tinted_scheme;

#endif  /* TINTED_C_SCHEME_H__ */

#ifndef BASE24_catppuccin_frappe_H__
#define BASE24_catppuccin_frappe_H__

/**
 * The Base24 Catppuccin Frappe scheme.
 *
 * @author https://github.com/catppuccin/catppuccin
 */
extern const tinted_scheme base24_catppuccin_frappe;

#endif  /* BASE24_catppuccin_frappe_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_catppuccin_frappe_IMPLEMENTATION_ONCE
#define BASE24_catppuccin_frappe_IMPLEMENTATION_ONCE

const tinted_scheme base24_catppuccin_frappe = {
    .name = "Catppuccin Frappe",
    .base = {
        { .r = 48, .g = 52, .b = 70 },
        { .r = 41, .g = 44, .b = 60 },
        { .r = 65, .g = 69, .b = 89 },
        { .r = 81, .g = 87, .b = 109 },
        { .r = 98, .g = 104, .b = 128 },
        { .r = 198, .g = 208, .b = 245 },
        { .r = 242, .g = 213, .b = 207 },
        { .r = 186, .g = 187, .b = 241 },
        { .r = 231, .g = 130, .b = 132 },
        { .r = 239, .g = 159, .b = 118 },
        { .r = 229, .g = 200, .b = 144 },
        { .r = 166, .g = 209, .b = 137 },
        { .r = 129, .g = 200, .b = 190 },
        { .r = 140, .g = 170, .b = 238 },
        { .r = 202, .g = 158, .b = 230 },
        { .r = 238, .g = 190, .b = 190 },

        /* Base24 */
        { .r = 41, .g = 44, .b = 60 },
        { .r = 35, .g = 38, .b = 52 },
        { .r = 234, .g = 153, .b = 156 },
        { .r = 242, .g = 213, .b = 207 },
        { .r = 166, .g = 209, .b = 137 },
        { .r = 153, .g = 209, .b = 219 },
        { .r = 133, .g = 193, .b = 220 },
        { .r = 244, .g = 184, .b = 228 }
    },
    .system = 24
};

#endif  /* BASE24_catppuccin_frappe_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
