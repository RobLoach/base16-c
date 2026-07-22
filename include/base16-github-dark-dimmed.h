/**
 * Base16 Github Dark Dimmed 
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

#ifndef BASE16_github_dark_dimmed_H__
#define BASE16_github_dark_dimmed_H__

/**
 * The Base16 Github Dark Dimmed scheme.
 *
 * @author Tinted Theming (https://github.com/tinted-theming)
 */
extern const base16_scheme base16_github_dark_dimmed;

#endif  /* BASE16_github_dark_dimmed_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_github_dark_dimmed_IMPLEMENTATION_ONCE
#define BASE16_github_dark_dimmed_IMPLEMENTATION_ONCE

const base16_scheme base16_github_dark_dimmed = {
    .name = "Github Dark Dimmed",
    .base = {
        { .r = 34, .g = 39, .b = 46 },
        { .r = 45, .g = 51, .b = 59 },
        { .r = 84, .g = 93, .b = 104 },
        { .r = 99, .g = 110, .b = 123 },
        { .r = 118, .g = 131, .b = 144 },
        { .r = 173, .g = 186, .b = 199 },
        { .r = 205, .g = 217, .b = 229 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 246, .g = 157, .b = 80 },
        { .r = 108, .g = 182, .b = 255 },
        { .r = 174, .g = 124, .b = 20 },
        { .r = 150, .g = 208, .b = 255 },
        { .r = 141, .g = 219, .b = 140 },
        { .r = 220, .g = 189, .b = 251 },
        { .r = 244, .g = 112, .b = 103 },
        { .r = 255, .g = 147, .b = 138 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 34, .g = 39, .b = 46 },
        { .r = 34, .g = 39, .b = 46 },
        { .r = 246, .g = 157, .b = 80 },
        { .r = 174, .g = 124, .b = 20 },
        { .r = 150, .g = 208, .b = 255 },
        { .r = 141, .g = 219, .b = 140 },
        { .r = 220, .g = 189, .b = 251 },
        { .r = 244, .g = 112, .b = 103 }
    },
    .system = 16
};

#endif  /* BASE16_github_dark_dimmed_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
