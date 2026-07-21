/**
 * Base16 Penumbra Dark Contrast Plus A mathematically balanced colour scheme constructed in a perceptually uniform colour space, by Neal McKee. https://github.com/nealmckee/penumbra
 *
 * @author Zachary Weiss (https://github.com/zacharyweiss)
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
    base16_color base[24]; /** An array of the colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_penumbra_dark_contrast_plus_H__
#define BASE16_penumbra_dark_contrast_plus_H__

/**
 * The Base16 Penumbra Dark Contrast Plus scheme.
 *
 * @author Zachary Weiss (https://github.com/zacharyweiss)
 */
extern const base16_scheme base16_penumbra_dark_contrast_plus;

#endif  /* BASE16_penumbra_dark_contrast_plus_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_penumbra_dark_contrast_plus_IMPLEMENTATION_ONCE
#define BASE16_penumbra_dark_contrast_plus_IMPLEMENTATION_ONCE

const base16_scheme base16_penumbra_dark_contrast_plus = {
    .name = "Penumbra Dark Contrast Plus",
    .base = {
        { .r = 24, .g = 27, .b = 31 },
        { .r = 36, .g = 39, .b = 43 },
        { .r = 62, .g = 64, .b = 68 },
        { .r = 99, .g = 99, .b = 99 },
        { .r = 158, .g = 158, .b = 158 },
        { .r = 206, .g = 206, .b = 206 },
        { .r = 255, .g = 247, .b = 237 },
        { .r = 255, .g = 253, .b = 251 },
        { .r = 223, .g = 127, .b = 120 },
        { .r = 206, .g = 144, .b = 66 },
        { .r = 156, .g = 167, .b = 72 },
        { .r = 80, .g = 181, .b = 132 },
        { .r = 0, .g = 179, .b = 194 },
        { .r = 97, .g = 163, .b = 230 },
        { .r = 164, .g = 143, .b = 225 },
        { .r = 208, .g = 128, .b = 182 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 24, .g = 27, .b = 31 },
        { .r = 24, .g = 27, .b = 31 },
        { .r = 223, .g = 127, .b = 120 },
        { .r = 156, .g = 167, .b = 72 },
        { .r = 80, .g = 181, .b = 132 },
        { .r = 0, .g = 179, .b = 194 },
        { .r = 97, .g = 163, .b = 230 },
        { .r = 164, .g = 143, .b = 225 }
    },
    .system = 16
};

#endif  /* BASE16_penumbra_dark_contrast_plus_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
