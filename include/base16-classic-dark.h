/**
 * Base16 Classic Dark 
 *
 * @author Jason Heeris (http://heeris.id.au)
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
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_classic_dark_H__
#define BASE16_classic_dark_H__

/**
 * The Base16 Classic Dark scheme.
 *
 * @author Jason Heeris (http://heeris.id.au)
 */
extern const base16_scheme base16_classic_dark;

#endif  /* BASE16_classic_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_classic_dark_IMPLEMENTATION_ONCE
#define BASE16_classic_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_classic_dark = {
    .name = "Classic Dark",
    .base = {
        { .r = 21, .g = 21, .b = 21 },
        { .r = 32, .g = 32, .b = 32 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 80, .g = 80, .b = 80 },
        { .r = 176, .g = 176, .b = 176 },
        { .r = 208, .g = 208, .b = 208 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 245, .g = 245, .b = 245 },
        { .r = 172, .g = 65, .b = 66 },
        { .r = 210, .g = 132, .b = 69 },
        { .r = 244, .g = 191, .b = 117 },
        { .r = 144, .g = 169, .b = 89 },
        { .r = 117, .g = 181, .b = 170 },
        { .r = 106, .g = 159, .b = 181 },
        { .r = 170, .g = 117, .b = 159 },
        { .r = 143, .g = 85, .b = 54 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 21, .g = 21, .b = 21 },
        { .r = 21, .g = 21, .b = 21 },
        { .r = 172, .g = 65, .b = 66 },
        { .r = 244, .g = 191, .b = 117 },
        { .r = 144, .g = 169, .b = 89 },
        { .r = 117, .g = 181, .b = 170 },
        { .r = 106, .g = 159, .b = 181 },
        { .r = 170, .g = 117, .b = 159 }
    },
    .system = 16
};

#endif  /* BASE16_classic_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
