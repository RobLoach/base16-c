/**
 * Base16 Penumbra Dark Contrast Plus Plus A mathematically balanced colour scheme constructed in a perceptually uniform colour space, by Neal McKee. https://github.com/nealmckee/penumbra
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

#ifndef BASE16_penumbra_dark_contrast_plus_plus_H__
#define BASE16_penumbra_dark_contrast_plus_plus_H__

/**
 * The Base16 Penumbra Dark Contrast Plus Plus scheme.
 *
 * @author Zachary Weiss (https://github.com/zacharyweiss)
 */
extern const base16_scheme base16_penumbra_dark_contrast_plus_plus;

#endif  /* BASE16_penumbra_dark_contrast_plus_plus_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_penumbra_dark_contrast_plus_plus_IMPLEMENTATION_ONCE
#define BASE16_penumbra_dark_contrast_plus_plus_IMPLEMENTATION_ONCE

const base16_scheme base16_penumbra_dark_contrast_plus_plus = {
    .name = "Penumbra Dark Contrast Plus Plus",
    .base = {
        { .r = 13, .g = 15, .b = 19 },
        { .r = 24, .g = 27, .b = 31 },
        { .r = 62, .g = 64, .b = 68 },
        { .r = 99, .g = 99, .b = 99 },
        { .r = 174, .g = 174, .b = 174 },
        { .r = 222, .g = 222, .b = 222 },
        { .r = 255, .g = 247, .b = 237 },
        { .r = 255, .g = 253, .b = 251 },
        { .r = 245, .g = 140, .b = 129 },
        { .r = 224, .g = 159, .b = 71 },
        { .r = 169, .g = 184, .b = 82 },
        { .r = 84, .g = 199, .b = 148 },
        { .r = 0, .g = 196, .b = 215 },
        { .r = 110, .g = 178, .b = 253 },
        { .r = 182, .g = 156, .b = 246 },
        { .r = 229, .g = 140, .b = 197 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 13, .g = 15, .b = 19 },
        { .r = 13, .g = 15, .b = 19 },
        { .r = 245, .g = 140, .b = 129 },
        { .r = 169, .g = 184, .b = 82 },
        { .r = 84, .g = 199, .b = 148 },
        { .r = 0, .g = 196, .b = 215 },
        { .r = 110, .g = 178, .b = 253 },
        { .r = 182, .g = 156, .b = 246 }
    },
    .system = 16
};

#endif  /* BASE16_penumbra_dark_contrast_plus_plus_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
