/**
 * Base16 Yesterday Bright 
 *
 * @author FroZnShiva (https://github.com/FroZnShiva)
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

#ifndef BASE16_yesterday_bright_H__
#define BASE16_yesterday_bright_H__

/**
 * The Base16 Yesterday Bright scheme.
 *
 * @author FroZnShiva (https://github.com/FroZnShiva)
 */
extern const base16_scheme base16_yesterday_bright;

#endif  /* BASE16_yesterday_bright_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_yesterday_bright_IMPLEMENTATION_ONCE
#define BASE16_yesterday_bright_IMPLEMENTATION_ONCE

const base16_scheme base16_yesterday_bright = {
    .name = "Yesterday Bright",
    .base = {
        { .r = 52, .g = 61, .b = 70 },
        { .r = 79, .g = 91, .b = 102 },
        { .r = 101, .g = 115, .b = 126 },
        { .r = 167, .g = 173, .b = 186 },
        { .r = 192, .g = 197, .b = 206 },
        { .r = 223, .g = 225, .b = 232 },
        { .r = 239, .g = 241, .b = 245 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 213, .g = 78, .b = 83 },
        { .r = 231, .g = 140, .b = 69 },
        { .r = 231, .g = 197, .b = 71 },
        { .r = 185, .g = 202, .b = 74 },
        { .r = 112, .g = 192, .b = 177 },
        { .r = 122, .g = 166, .b = 218 },
        { .r = 195, .g = 151, .b = 216 },
        { .r = 154, .g = 128, .b = 109 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 52, .g = 61, .b = 70 },
        { .r = 52, .g = 61, .b = 70 },
        { .r = 213, .g = 78, .b = 83 },
        { .r = 231, .g = 197, .b = 71 },
        { .r = 185, .g = 202, .b = 74 },
        { .r = 112, .g = 192, .b = 177 },
        { .r = 122, .g = 166, .b = 218 },
        { .r = 195, .g = 151, .b = 216 }
    },
    .system = 16
};

#endif  /* BASE16_yesterday_bright_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
