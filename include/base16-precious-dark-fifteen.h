/**
 * Base16 Precious Dark Fifteen 
 *
 * @author 4lex4 &lt;4lex49@zoho.com&gt;
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

#ifndef BASE16_precious_dark_fifteen_H__
#define BASE16_precious_dark_fifteen_H__

/**
 * The Base16 Precious Dark Fifteen scheme.
 *
 * @author 4lex4 &lt;4lex49@zoho.com&gt;
 */
extern const base16_scheme base16_precious_dark_fifteen;

#endif  /* BASE16_precious_dark_fifteen_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_precious_dark_fifteen_IMPLEMENTATION_ONCE
#define BASE16_precious_dark_fifteen_IMPLEMENTATION_ONCE

const base16_scheme base16_precious_dark_fifteen = {
    .name = "Precious Dark Fifteen",
    .base = {
        { .r = 35, .g = 38, .b = 43 },
        { .r = 48, .g = 51, .b = 55 },
        { .r = 62, .g = 64, .b = 68 },
        { .r = 137, .g = 137, .b = 137 },
        { .r = 171, .g = 170, .b = 168 },
        { .r = 186, .g = 185, .b = 182 },
        { .r = 186, .g = 185, .b = 182 },
        { .r = 186, .g = 185, .b = 182 },
        { .r = 255, .g = 135, .b = 130 },
        { .r = 233, .g = 152, .b = 87 },
        { .r = 207, .g = 165, .b = 70 },
        { .r = 149, .g = 182, .b = 89 },
        { .r = 66, .g = 189, .b = 167 },
        { .r = 102, .g = 176, .b = 239 },
        { .r = 183, .g = 153, .b = 255 },
        { .r = 243, .g = 130, .b = 216 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 35, .g = 38, .b = 43 },
        { .r = 35, .g = 38, .b = 43 },
        { .r = 255, .g = 135, .b = 130 },
        { .r = 207, .g = 165, .b = 70 },
        { .r = 149, .g = 182, .b = 89 },
        { .r = 66, .g = 189, .b = 167 },
        { .r = 102, .g = 176, .b = 239 },
        { .r = 183, .g = 153, .b = 255 }
    },
    .system = 16
};

#endif  /* BASE16_precious_dark_fifteen_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
