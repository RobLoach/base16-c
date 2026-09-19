/**
 * Tinted8 Catppuccin Latte 
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

#ifndef TINTED_C_TINTED8_SCHEME_H__
#define TINTED_C_TINTED8_SCHEME_H__

/**
 * The normal, bright and dim variants of a single Tinted8 palette color.
 */
typedef struct tinted8_color_group {
    tinted_color normal; /** The normal variant of the color. */
    tinted_color bright; /** The bright variant of the color. */
    tinted_color dim; /** The dim variant of the color. */
} tinted8_color_group;

/**
 * A Tinted8 Scheme.
 *
 * The scheme's `syntax` and `ui` mappings are intentionally omitted, as they
 * expand to over a hundred fixed keys each; only the palette is exposed.
 */
typedef struct tinted8_scheme {
    const char *name; /** The name of the scheme. */
    const char *slug; /** The slug of the scheme. */
    const char *author; /** The author of the scheme. */
    const char *variant; /** Either "dark" or "light". */
    const char *family; /** The scheme family, or an empty string. */
    const char *style; /** The style within the family, or an empty string. */
    tinted8_color_group black; /** The black color group. */
    tinted8_color_group red; /** The red color group. */
    tinted8_color_group green; /** The green color group. */
    tinted8_color_group yellow; /** The yellow color group. */
    tinted8_color_group blue; /** The blue color group. */
    tinted8_color_group magenta; /** The magenta color group. */
    tinted8_color_group cyan; /** The cyan color group. */
    tinted8_color_group white; /** The white color group. */
    tinted8_color_group orange; /** The orange color group. */
    tinted8_color_group gray; /** The gray color group. */
    tinted8_color_group brown; /** The brown color group. */
} tinted8_scheme;

#endif  /* TINTED_C_TINTED8_SCHEME_H__ */

#ifndef TINTED8_catppuccin_latte_H__
#define TINTED8_catppuccin_latte_H__

/**
 * The Tinted8 Catppuccin Latte scheme.
 *
 * @author https://github.com/catppuccin/catppuccin
 */
extern const tinted8_scheme tinted8_catppuccin_latte;

#endif  /* TINTED8_catppuccin_latte_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef TINTED8_catppuccin_latte_IMPLEMENTATION_ONCE
#define TINTED8_catppuccin_latte_IMPLEMENTATION_ONCE

const tinted8_scheme tinted8_catppuccin_latte = {
    .name = "Catppuccin Latte",
    .slug = "catppuccin-latte",
    .author = "https://github.com/catppuccin/catppuccin",
    .variant = "light",
    .family = "Catppuccin",
    .style = "Latte",
    .black = {
        .normal = { .r = 76, .g = 79, .b = 105 },
        .bright = { .r = 108, .g = 111, .b = 133 },
        .dim = { .r = 50, .g = 52, .b = 70 }
    },
    .red = {
        .normal = { .r = 210, .g = 15, .b = 57 },
        .bright = { .r = 248, .g = 38, .b = 83 },
        .dim = { .r = 158, .g = 6, .b = 39 }
    },
    .green = {
        .normal = { .r = 64, .g = 160, .b = 43 },
        .bright = { .r = 83, .g = 209, .b = 56 },
        .dim = { .r = 44, .g = 113, .b = 28 }
    },
    .yellow = {
        .normal = { .r = 223, .g = 142, .b = 29 },
        .bright = { .r = 238, .g = 170, .b = 75 },
        .dim = { .r = 174, .g = 108, .b = 17 }
    },
    .blue = {
        .normal = { .r = 30, .g = 102, .b = 245 },
        .bright = { .r = 89, .g = 142, .b = 248 },
        .dim = { .r = 2, .g = 72, .b = 212 }
    },
    .magenta = {
        .normal = { .r = 136, .g = 57, .b = 239 },
        .bright = { .r = 170, .g = 114, .b = 244 },
        .dim = { .r = 103, .g = 11, .b = 224 }
    },
    .cyan = {
        .normal = { .r = 23, .g = 146, .b = 153 },
        .bright = { .r = 24, .g = 203, .b = 213 },
        .dim = { .r = 4, .g = 165, .b = 229 }
    },
    .white = {
        .normal = { .r = 220, .g = 224, .b = 232 },
        .bright = { .r = 255, .g = 255, .b = 255 },
        .dim = { .r = 182, .g = 191, .b = 209 }
    },
    .orange = {
        .normal = { .r = 254, .g = 100, .b = 11 },
        .bright = { .r = 254, .g = 139, .b = 72 },
        .dim = { .r = 254, .g = 139, .b = 72 }
    },
    .gray = {
        .normal = { .r = 156, .g = 160, .b = 176 },
        .bright = { .r = 190, .g = 193, .b = 203 },
        .dim = { .r = 121, .g = 127, .b = 150 }
    },
    .brown = {
        .normal = { .r = 74, .g = 41, .b = 25 },
        .bright = { .r = 123, .g = 65, .b = 37 },
        .dim = { .r = 29, .g = 16, .b = 9 }
    }
};

#endif  /* TINTED8_catppuccin_latte_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED8_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted8.h re-includes this header to build tinted8_schemes[]. */
&tinted8_catppuccin_latte,
#endif  /* TINTED8_SCHEMES_ARRAY_ENTRY */
