/**
 * Base16 iA Dark 
 *
 * @author iA Inc. (modified by aramisgithub)
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

#ifndef BASE16_ia_dark_H__
#define BASE16_ia_dark_H__

/**
 * The Base16 iA Dark scheme.
 *
 * @author iA Inc. (modified by aramisgithub)
 */
extern const base16_scheme base16_ia_dark;

#endif  /* BASE16_ia_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_ia_dark_IMPLEMENTATION_ONCE
#define BASE16_ia_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_ia_dark = {
    .name = "iA Dark",
    .base = {
        { .r = 26, .g = 26, .b = 26 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 29, .g = 65, .b = 77 },
        { .r = 118, .g = 118, .b = 118 },
        { .r = 184, .g = 184, .b = 184 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 248, .g = 248, .b = 248 },
        { .r = 216, .g = 133, .b = 104 },
        { .r = 216, .g = 104, .b = 104 },
        { .r = 185, .g = 147, .b = 83 },
        { .r = 131, .g = 164, .b = 113 },
        { .r = 124, .g = 156, .b = 174 },
        { .r = 142, .g = 204, .b = 221 },
        { .r = 185, .g = 142, .b = 178 },
        { .r = 139, .g = 108, .b = 55 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 26, .g = 26, .b = 26 },
        { .r = 26, .g = 26, .b = 26 },
        { .r = 216, .g = 133, .b = 104 },
        { .r = 185, .g = 147, .b = 83 },
        { .r = 131, .g = 164, .b = 113 },
        { .r = 124, .g = 156, .b = 174 },
        { .r = 142, .g = 204, .b = 221 },
        { .r = 185, .g = 142, .b = 178 }
    },
    .system = 16
};

#endif  /* BASE16_ia_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
