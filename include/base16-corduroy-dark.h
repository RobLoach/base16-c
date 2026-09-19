/**
 * Base16 Corduroy Dark A deeper, higher-contrast Corduroy variant with vintage warmth and soft textures.
 *
 * @author taysatte (https://github.com/taysatte)
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

#ifndef BASE16_corduroy_dark_H__
#define BASE16_corduroy_dark_H__

/**
 * The Base16 Corduroy Dark scheme.
 *
 * @author taysatte (https://github.com/taysatte)
 */
extern const tinted_scheme base16_corduroy_dark;

#endif  /* BASE16_corduroy_dark_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_corduroy_dark_IMPLEMENTATION_ONCE
#define BASE16_corduroy_dark_IMPLEMENTATION_ONCE

const tinted_scheme base16_corduroy_dark = {
    .name = "Corduroy Dark",
    .base = {
        { .r = 20, .g = 16, .b = 22 },
        { .r = 27, .g = 21, .b = 30 },
        { .r = 34, .g = 26, .b = 38 },
        { .r = 125, .g = 112, .b = 130 },
        { .r = 154, .g = 141, .b = 158 },
        { .r = 221, .g = 216, .b = 223 },
        { .r = 221, .g = 216, .b = 223 },
        { .r = 90, .g = 81, .b = 96 },
        { .r = 232, .g = 117, .b = 138 },
        { .r = 240, .g = 168, .b = 155 },
        { .r = 240, .g = 189, .b = 156 },
        { .r = 85, .g = 160, .b = 160 },
        { .r = 240, .g = 168, .b = 155 },
        { .r = 220, .g = 146, .b = 163 },
        { .r = 207, .g = 152, .b = 196 },
        { .r = 154, .g = 141, .b = 158 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 20, .g = 16, .b = 22 },
        { .r = 20, .g = 16, .b = 22 },
        { .r = 232, .g = 117, .b = 138 },
        { .r = 240, .g = 189, .b = 156 },
        { .r = 85, .g = 160, .b = 160 },
        { .r = 240, .g = 168, .b = 155 },
        { .r = 220, .g = 146, .b = 163 },
        { .r = 207, .g = 152, .b = 196 }
    },
    .system = 16
};

#endif  /* BASE16_corduroy_dark_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */
