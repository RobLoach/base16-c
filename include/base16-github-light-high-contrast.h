/**
 * Base16 Github Light High Contrast 
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

#ifndef BASE16_github_light_high_contrast_H__
#define BASE16_github_light_high_contrast_H__

/**
 * The Base16 Github Light High Contrast scheme.
 *
 * @author Tinted Theming (https://github.com/tinted-theming)
 */
extern const tinted_scheme base16_github_light_high_contrast;

#endif  /* BASE16_github_light_high_contrast_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_github_light_high_contrast_IMPLEMENTATION_ONCE
#define BASE16_github_light_high_contrast_IMPLEMENTATION_ONCE

const tinted_scheme base16_github_light_high_contrast = {
    .name = "Github Light High Contrast",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 231, .g = 236, .b = 240 },
        { .r = 172, .g = 182, .b = 192 },
        { .r = 136, .g = 146, .b = 157 },
        { .r = 102, .g = 112, .b = 123 },
        { .r = 52, .g = 59, .b = 67 },
        { .r = 32, .g = 37, .b = 44 },
        { .r = 14, .g = 17, .b = 22 },
        { .r = 112, .g = 44, .b = 0 },
        { .r = 2, .g = 59, .b = 149 },
        { .r = 149, .g = 100, .b = 0 },
        { .r = 3, .g = 37, .b = 99 },
        { .r = 2, .g = 76, .b = 26 },
        { .r = 98, .g = 44, .b = 188 },
        { .r = 160, .g = 17, .b = 31 },
        { .r = 110, .g = 1, .b = 26 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 112, .g = 44, .b = 0 },
        { .r = 149, .g = 100, .b = 0 },
        { .r = 3, .g = 37, .b = 99 },
        { .r = 2, .g = 76, .b = 26 },
        { .r = 98, .g = 44, .b = 188 },
        { .r = 160, .g = 17, .b = 31 }
    },
    .system = 16
};

#endif  /* BASE16_github_light_high_contrast_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */
