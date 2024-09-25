/**
 * Base16 Precious Light White 
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

#ifndef BASE16_precious_light_white_H__
#define BASE16_precious_light_white_H__

/**
 * The Base16 Precious Light White scheme.
 *
 * @author 4lex4 &lt;4lex49@zoho.com&gt;
 */
extern const base16_scheme base16_precious_light_white;

#endif  /* BASE16_precious_light_white_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_precious_light_white_IMPLEMENTATION_ONCE
#define BASE16_precious_light_white_IMPLEMENTATION_ONCE

const base16_scheme base16_precious_light_white = {
    .name = "Precious Light White",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 237, .g = 237, .b = 237 },
        { .r = 219, .g = 219, .b = 219 },
        { .r = 132, .g = 132, .b = 132 },
        { .r = 99, .g = 99, .b = 99 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 175, .g = 73, .b = 71 },
        { .r = 160, .g = 87, .b = 13 },
        { .r = 135, .g = 101, .b = 0 },
        { .r = 85, .g = 115, .b = 1 },
        { .r = 8, .g = 119, .b = 103 },
        { .r = 24, .g = 109, .b = 170 },
        { .r = 123, .g = 78, .b = 203 },
        { .r = 169, .g = 62, .b = 147 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 175, .g = 73, .b = 71 },
        { .r = 135, .g = 101, .b = 0 },
        { .r = 85, .g = 115, .b = 1 },
        { .r = 8, .g = 119, .b = 103 },
        { .r = 24, .g = 109, .b = 170 },
        { .r = 123, .g = 78, .b = 203 }
    },
    .system = 16
};

#endif  /* BASE16_precious_light_white_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
