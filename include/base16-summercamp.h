/**
 * Base16 summercamp 
 *
 * @author zoe firi (zoefiri.github.io)
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

#ifndef BASE16_summercamp_H__
#define BASE16_summercamp_H__

/**
 * The Base16 summercamp scheme.
 *
 * @author zoe firi (zoefiri.github.io)
 */
extern const base16_scheme base16_summercamp;

#endif  /* BASE16_summercamp_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_summercamp_IMPLEMENTATION_ONCE
#define BASE16_summercamp_IMPLEMENTATION_ONCE

const base16_scheme base16_summercamp = {
    .name = "summercamp",
    .base = {
        { .r = 28, .g = 24, .b = 16 },
        { .r = 42, .g = 38, .b = 28 },
        { .r = 58, .g = 53, .b = 39 },
        { .r = 80, .g = 75, .b = 56 },
        { .r = 95, .g = 91, .b = 69 },
        { .r = 115, .g = 110, .b = 85 },
        { .r = 186, .g = 182, .b = 150 },
        { .r = 248, .g = 245, .b = 222 },
        { .r = 227, .g = 81, .b = 66 },
        { .r = 251, .g = 161, .b = 27 },
        { .r = 242, .g = 255, .b = 39 },
        { .r = 92, .g = 235, .b = 90 },
        { .r = 90, .g = 235, .b = 188 },
        { .r = 72, .g = 155, .b = 240 },
        { .r = 255, .g = 128, .b = 128 },
        { .r = 246, .g = 155, .b = 231 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 28, .g = 24, .b = 16 },
        { .r = 28, .g = 24, .b = 16 },
        { .r = 227, .g = 81, .b = 66 },
        { .r = 242, .g = 255, .b = 39 },
        { .r = 92, .g = 235, .b = 90 },
        { .r = 90, .g = 235, .b = 188 },
        { .r = 72, .g = 155, .b = 240 },
        { .r = 255, .g = 128, .b = 128 }
    },
    .system = 16
};

#endif  /* BASE16_summercamp_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
