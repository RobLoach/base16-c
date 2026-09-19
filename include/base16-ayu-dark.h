/**
 * Base16 Ayu Dark 
 *
 * @author Tinted Theming (https://github.com/tinted-theming), Ayu Theme (https://github.com/ayu-theme)
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

#ifndef BASE16_ayu_dark_H__
#define BASE16_ayu_dark_H__

/**
 * The Base16 Ayu Dark scheme.
 *
 * @author Tinted Theming (https://github.com/tinted-theming), Ayu Theme (https://github.com/ayu-theme)
 */
extern const tinted_scheme base16_ayu_dark;

#endif  /* BASE16_ayu_dark_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_ayu_dark_IMPLEMENTATION_ONCE
#define BASE16_ayu_dark_IMPLEMENTATION_ONCE

const tinted_scheme base16_ayu_dark = {
    .name = "Ayu Dark",
    .base = {
        { .r = 11, .g = 14, .b = 20 },
        { .r = 19, .g = 23, .b = 33 },
        { .r = 32, .g = 34, .b = 41 },
        { .r = 62, .g = 75, .b = 89 },
        { .r = 191, .g = 189, .b = 182 },
        { .r = 230, .g = 225, .b = 207 },
        { .r = 236, .g = 232, .b = 219 },
        { .r = 242, .g = 240, .b = 231 },
        { .r = 240, .g = 113, .b = 120 },
        { .r = 255, .g = 143, .b = 64 },
        { .r = 255, .g = 180, .b = 84 },
        { .r = 170, .g = 217, .b = 76 },
        { .r = 149, .g = 230, .b = 203 },
        { .r = 89, .g = 194, .b = 255 },
        { .r = 210, .g = 166, .b = 255 },
        { .r = 230, .g = 180, .b = 80 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 11, .g = 14, .b = 20 },
        { .r = 11, .g = 14, .b = 20 },
        { .r = 240, .g = 113, .b = 120 },
        { .r = 255, .g = 180, .b = 84 },
        { .r = 170, .g = 217, .b = 76 },
        { .r = 149, .g = 230, .b = 203 },
        { .r = 89, .g = 194, .b = 255 },
        { .r = 210, .g = 166, .b = 255 }
    },
    .system = 16
};

#endif  /* BASE16_ayu_dark_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_ayu_dark,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
