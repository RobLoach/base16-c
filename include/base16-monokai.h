/**
 * Base16 Monokai 
 *
 * @author Wimer Hazenberg (http://www.monokai.nl)
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

#ifndef BASE16_monokai_H__
#define BASE16_monokai_H__

/**
 * The Base16 Monokai scheme.
 *
 * @author Wimer Hazenberg (http://www.monokai.nl)
 */
extern const base16_scheme base16_monokai;

#endif  /* BASE16_monokai_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_monokai_IMPLEMENTATION_ONCE
#define BASE16_monokai_IMPLEMENTATION_ONCE

const base16_scheme base16_monokai = {
    .name = "Monokai",
    .base = {
        { .r = 39, .g = 40, .b = 34 },
        { .r = 56, .g = 56, .b = 48 },
        { .r = 73, .g = 72, .b = 62 },
        { .r = 117, .g = 113, .b = 94 },
        { .r = 165, .g = 159, .b = 133 },
        { .r = 248, .g = 248, .b = 242 },
        { .r = 245, .g = 244, .b = 241 },
        { .r = 249, .g = 248, .b = 245 },
        { .r = 249, .g = 38, .b = 114 },
        { .r = 253, .g = 151, .b = 31 },
        { .r = 244, .g = 191, .b = 117 },
        { .r = 166, .g = 226, .b = 46 },
        { .r = 161, .g = 239, .b = 228 },
        { .r = 102, .g = 217, .b = 239 },
        { .r = 174, .g = 129, .b = 255 },
        { .r = 204, .g = 102, .b = 51 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 39, .g = 40, .b = 34 },
        { .r = 39, .g = 40, .b = 34 },
        { .r = 249, .g = 38, .b = 114 },
        { .r = 244, .g = 191, .b = 117 },
        { .r = 166, .g = 226, .b = 46 },
        { .r = 161, .g = 239, .b = 228 },
        { .r = 102, .g = 217, .b = 239 },
        { .r = 174, .g = 129, .b = 255 }
    },
    .system = 16
};

#endif  /* BASE16_monokai_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
