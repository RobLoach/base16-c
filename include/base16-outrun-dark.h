/**
 * Base16 Outrun Dark 
 *
 * @author Hugo Delahousse (http://github.com/hugodelahousse/)
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

#ifndef BASE16_outrun_dark_H__
#define BASE16_outrun_dark_H__

/**
 * The Base16 Outrun Dark scheme.
 *
 * @author Hugo Delahousse (http://github.com/hugodelahousse/)
 */
extern const base16_scheme base16_outrun_dark;

#endif  /* BASE16_outrun_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_outrun_dark_IMPLEMENTATION_ONCE
#define BASE16_outrun_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_outrun_dark = {
    .name = "Outrun Dark",
    .base = {
        { .r = 0, .g = 0, .b = 42 },
        { .r = 32, .g = 32, .b = 74 },
        { .r = 48, .g = 48, .b = 90 },
        { .r = 80, .g = 80, .b = 122 },
        { .r = 176, .g = 176, .b = 218 },
        { .r = 208, .g = 208, .b = 250 },
        { .r = 224, .g = 224, .b = 255 },
        { .r = 245, .g = 245, .b = 255 },
        { .r = 255, .g = 66, .b = 66 },
        { .r = 252, .g = 141, .b = 40 },
        { .r = 243, .g = 232, .b = 119 },
        { .r = 89, .g = 241, .b = 118 },
        { .r = 14, .g = 240, .b = 240 },
        { .r = 102, .g = 176, .b = 255 },
        { .r = 241, .g = 5, .b = 150 },
        { .r = 240, .g = 3, .b = 239 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 0, .b = 42 },
        { .r = 0, .g = 0, .b = 42 },
        { .r = 255, .g = 66, .b = 66 },
        { .r = 243, .g = 232, .b = 119 },
        { .r = 89, .g = 241, .b = 118 },
        { .r = 14, .g = 240, .b = 240 },
        { .r = 102, .g = 176, .b = 255 },
        { .r = 241, .g = 5, .b = 150 }
    },
    .system = 16
};

#endif  /* BASE16_outrun_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
