/**
 * Tinted8 Gruvbox Dark 
 *
 * @author Tinted Theming (https://github.com/tinted-theming)
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

#ifndef TINTED8_gruvbox_dark_H__
#define TINTED8_gruvbox_dark_H__

/**
 * The Tinted8 Gruvbox Dark scheme.
 *
 * @author Tinted Theming (https://github.com/tinted-theming)
 */
extern const tinted8_scheme tinted8_gruvbox_dark;

#endif  /* TINTED8_gruvbox_dark_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef TINTED8_gruvbox_dark_IMPLEMENTATION_ONCE
#define TINTED8_gruvbox_dark_IMPLEMENTATION_ONCE

const tinted8_scheme tinted8_gruvbox_dark = {
    .name = "Gruvbox Dark",
    .slug = "gruvbox-dark",
    .author = "Tinted Theming (https://github.com/tinted-theming)",
    .variant = "dark",
    .family = "Gruvbox",
    .style = "Dark",
    .black = {
        .normal = { .r = 40, .g = 40, .b = 40 },
        .bright = { .r = 60, .g = 56, .b = 54 },
        .dim = { .r = 29, .g = 32, .b = 33 }
    },
    .red = {
        .normal = { .r = 204, .g = 36, .b = 29 },
        .bright = { .r = 251, .g = 73, .b = 52 },
        .dim = { .r = 155, .g = 22, .b = 17 }
    },
    .green = {
        .normal = { .r = 152, .g = 151, .b = 26 },
        .bright = { .r = 184, .g = 187, .b = 38 },
        .dim = { .r = 101, .g = 101, .b = 15 }
    },
    .yellow = {
        .normal = { .r = 215, .g = 153, .b = 33 },
        .bright = { .r = 250, .g = 189, .b = 47 },
        .dim = { .r = 167, .g = 117, .b = 20 }
    },
    .blue = {
        .normal = { .r = 69, .g = 133, .b = 136 },
        .bright = { .r = 131, .g = 165, .b = 152 },
        .dim = { .r = 47, .g = 95, .b = 97 }
    },
    .magenta = {
        .normal = { .r = 177, .g = 98, .b = 134 },
        .bright = { .r = 211, .g = 134, .b = 155 },
        .dim = { .r = 145, .g = 68, .b = 103 }
    },
    .cyan = {
        .normal = { .r = 104, .g = 157, .b = 106 },
        .bright = { .r = 142, .g = 192, .b = 124 },
        .dim = { .r = 77, .g = 123, .b = 79 }
    },
    .white = {
        .normal = { .r = 235, .g = 219, .b = 178 },
        .bright = { .r = 251, .g = 241, .b = 199 },
        .dim = { .r = 227, .g = 198, .b = 125 }
    },
    .orange = {
        .normal = { .r = 214, .g = 93, .b = 14 },
        .bright = { .r = 254, .g = 128, .b = 25 },
        .dim = { .r = 254, .g = 128, .b = 25 }
    },
    .gray = {
        .normal = { .r = 146, .g = 131, .b = 116 },
        .bright = { .r = 173, .g = 162, .b = 150 },
        .dim = { .r = 113, .g = 100, .b = 87 }
    },
    .brown = {
        .normal = { .r = 70, .g = 43, .b = 25 },
        .bright = { .r = 118, .g = 70, .b = 38 },
        .dim = { .r = 25, .g = 15, .b = 9 }
    }
};

#endif  /* TINTED8_gruvbox_dark_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED8_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted8.h re-includes this header to build tinted8_schemes[]. */
&tinted8_gruvbox_dark,
#endif  /* TINTED8_SCHEMES_ARRAY_ENTRY */
