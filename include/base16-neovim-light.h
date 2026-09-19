/**
 * Base16 Neovim Light 
 *
 * @author https://github.com/neovim/neovim/blob/master/src/nvim/highlight_group.c
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
    tinted_color base[24]; /** An array of the colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} tinted_scheme;

#endif  /* TINTED_C_SCHEME_H__ */

#ifndef BASE16_neovim_light_H__
#define BASE16_neovim_light_H__

/**
 * The Base16 Neovim Light scheme.
 *
 * @author https://github.com/neovim/neovim/blob/master/src/nvim/highlight_group.c
 */
extern const tinted_scheme base16_neovim_light;

#endif  /* BASE16_neovim_light_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_neovim_light_IMPLEMENTATION_ONCE
#define BASE16_neovim_light_IMPLEMENTATION_ONCE

const tinted_scheme base16_neovim_light = {
    .name = "Neovim Light",
    .base = {
        { .r = 224, .g = 226, .b = 234 },
        { .r = 238, .g = 241, .b = 248 },
        { .r = 155, .g = 158, .b = 164 },
        { .r = 79, .g = 82, .b = 88 },
        { .r = 44, .g = 46, .b = 51 },
        { .r = 20, .g = 22, .b = 27 },
        { .r = 7, .g = 8, .b = 13 },
        { .r = 7, .g = 8, .b = 13 },
        { .r = 89, .g = 0, .b = 8 },
        { .r = 139, .g = 69, .b = 19 },
        { .r = 107, .g = 83, .b = 0 },
        { .r = 0, .g = 85, .b = 35 },
        { .r = 0, .g = 115, .b = 115 },
        { .r = 0, .g = 76, .b = 115 },
        { .r = 71, .g = 0, .b = 69 },
        { .r = 165, .g = 42, .b = 42 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 224, .g = 226, .b = 234 },
        { .r = 224, .g = 226, .b = 234 },
        { .r = 89, .g = 0, .b = 8 },
        { .r = 107, .g = 83, .b = 0 },
        { .r = 0, .g = 85, .b = 35 },
        { .r = 0, .g = 115, .b = 115 },
        { .r = 0, .g = 76, .b = 115 },
        { .r = 71, .g = 0, .b = 69 }
    },
    .system = 16
};

#endif  /* BASE16_neovim_light_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */
