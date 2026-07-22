/**
 * Base24 Solarized Dark Higher Contrast 
 *
 * @author FredHappyface (https://github.com/fredHappyface)
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

#ifndef BASE24_solarized_dark_higher_contrast_H__
#define BASE24_solarized_dark_higher_contrast_H__

/**
 * The Base24 Solarized Dark Higher Contrast scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_solarized_dark_higher_contrast;

#endif  /* BASE24_solarized_dark_higher_contrast_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_solarized_dark_higher_contrast_IMPLEMENTATION_ONCE
#define BASE24_solarized_dark_higher_contrast_IMPLEMENTATION_ONCE

const base16_scheme base24_solarized_dark_higher_contrast = {
    .name = "Solarized Dark Higher Contrast",
    .base = {
        { .r = 0, .g = 30, .b = 38 },
        { .r = 0, .g = 39, .b = 49 },
        { .r = 0, .g = 99, .b = 136 },
        { .r = 58, .g = 130, .b = 152 },
        { .r = 116, .g = 162, .b = 169 },
        { .r = 174, .g = 194, .b = 186 },
        { .r = 233, .g = 226, .b = 203 },
        { .r = 252, .g = 244, .b = 220 },
        { .r = 208, .g = 27, .b = 36 },
        { .r = 165, .g = 119, .b = 5 },
        { .r = 23, .g = 141, .b = 199 },
        { .r = 107, .g = 190, .b = 108 },
        { .r = 37, .g = 145, .b = 133 },
        { .r = 32, .g = 117, .b = 199 },
        { .r = 198, .g = 27, .b = 110 },
        { .r = 104, .g = 13, .b = 18 },

        /* Base24 */
        { .r = 0, .g = 66, .b = 90 },
        { .r = 0, .g = 33, .b = 45 },
        { .r = 244, .g = 21, .b = 59 },
        { .r = 177, .g = 126, .b = 40 },
        { .r = 80, .g = 238, .b = 132 },
        { .r = 0, .g = 178, .b = 158 },
        { .r = 23, .g = 141, .b = 199 },
        { .r = 225, .g = 77, .b = 142 }
    },
    .system = 24
};

#endif  /* BASE24_solarized_dark_higher_contrast_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
