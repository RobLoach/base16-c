/**
 * Base16 Porple 
 *
 * @author Niek den Breeje (https://github.com/AuditeMarlow)
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

#ifndef BASE16_porple_H__
#define BASE16_porple_H__

/**
 * The Base16 Porple scheme.
 *
 * @author Niek den Breeje (https://github.com/AuditeMarlow)
 */
extern const base16_scheme base16_porple;

#endif  /* BASE16_porple_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_porple_IMPLEMENTATION_ONCE
#define BASE16_porple_IMPLEMENTATION_ONCE

const base16_scheme base16_porple = {
    .name = "Porple",
    .base = {
        { .r = 41, .g = 44, .b = 54 },
        { .r = 51, .g = 51, .b = 68 },
        { .r = 71, .g = 65, .b = 96 },
        { .r = 101, .g = 86, .b = 138 },
        { .r = 184, .g = 184, .b = 184 },
        { .r = 216, .g = 216, .b = 216 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 248, .g = 248, .b = 248 },
        { .r = 248, .g = 69, .b = 71 },
        { .r = 210, .g = 142, .b = 93 },
        { .r = 239, .g = 161, .b = 107 },
        { .r = 149, .g = 199, .b = 111 },
        { .r = 100, .g = 135, .b = 143 },
        { .r = 132, .g = 133, .b = 206 },
        { .r = 183, .g = 73, .b = 137 },
        { .r = 152, .g = 104, .b = 65 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 41, .g = 44, .b = 54 },
        { .r = 41, .g = 44, .b = 54 },
        { .r = 248, .g = 69, .b = 71 },
        { .r = 239, .g = 161, .b = 107 },
        { .r = 149, .g = 199, .b = 111 },
        { .r = 100, .g = 135, .b = 143 },
        { .r = 132, .g = 133, .b = 206 },
        { .r = 183, .g = 73, .b = 137 }
    },
    .system = 16
};

#endif  /* BASE16_porple_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
