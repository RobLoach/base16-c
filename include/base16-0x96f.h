/**
 * Base16 0x96f 
 *
 * @author Filip Janevski (https://0x96f.dev/theme)
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

#ifndef BASE16_0x96f_H__
#define BASE16_0x96f_H__

/**
 * The Base16 0x96f scheme.
 *
 * @author Filip Janevski (https://0x96f.dev/theme)
 */
extern const base16_scheme base16_0x96f;

#endif  /* BASE16_0x96f_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_0x96f_IMPLEMENTATION_ONCE
#define BASE16_0x96f_IMPLEMENTATION_ONCE

const base16_scheme base16_0x96f = {
    .name = "0x96f",
    .base = {
        { .r = 38, .g = 36, .b = 39 },
        { .r = 59, .g = 57, .b = 60 },
        { .r = 81, .g = 79, .b = 82 },
        { .r = 103, .g = 101, .b = 103 },
        { .r = 124, .g = 123, .b = 125 },
        { .r = 252, .g = 252, .b = 252 },
        { .r = 234, .g = 233, .b = 235 },
        { .r = 252, .g = 252, .b = 252 },
        { .r = 255, .g = 114, .b = 114 },
        { .r = 252, .g = 157, .b = 111 },
        { .r = 255, .g = 202, .b = 88 },
        { .r = 188, .g = 223, .b = 89 },
        { .r = 174, .g = 232, .b = 244 },
        { .r = 73, .g = 202, .b = 228 },
        { .r = 160, .g = 147, .b = 226 },
        { .r = 255, .g = 135, .b = 135 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 38, .g = 36, .b = 39 },
        { .r = 38, .g = 36, .b = 39 },
        { .r = 255, .g = 114, .b = 114 },
        { .r = 255, .g = 202, .b = 88 },
        { .r = 188, .g = 223, .b = 89 },
        { .r = 174, .g = 232, .b = 244 },
        { .r = 73, .g = 202, .b = 228 },
        { .r = 160, .g = 147, .b = 226 }
    },
    .system = 16
};

#endif  /* BASE16_0x96f_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
