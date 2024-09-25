/**
 * Base16 Gigavolt 
 *
 * @author Aidan Swope (http://github.com/Whillikers)
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

#ifndef BASE16_gigavolt_H__
#define BASE16_gigavolt_H__

/**
 * The Base16 Gigavolt scheme.
 *
 * @author Aidan Swope (http://github.com/Whillikers)
 */
extern const base16_scheme base16_gigavolt;

#endif  /* BASE16_gigavolt_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_gigavolt_IMPLEMENTATION_ONCE
#define BASE16_gigavolt_IMPLEMENTATION_ONCE

const base16_scheme base16_gigavolt = {
    .name = "Gigavolt",
    .base = {
        { .r = 32, .g = 33, .b = 38 },
        { .r = 45, .g = 48, .b = 61 },
        { .r = 90, .g = 87, .b = 110 },
        { .r = 161, .g = 210, .b = 230 },
        { .r = 202, .g = 211, .b = 255 },
        { .r = 233, .g = 231, .b = 225 },
        { .r = 239, .g = 240, .b = 249 },
        { .r = 242, .g = 251, .b = 255 },
        { .r = 255, .g = 102, .b = 26 },
        { .r = 25, .g = 249, .b = 136 },
        { .r = 255, .g = 220, .b = 45 },
        { .r = 242, .g = 230, .b = 169 },
        { .r = 251, .g = 106, .b = 203 },
        { .r = 64, .g = 191, .b = 255 },
        { .r = 174, .g = 148, .b = 249 },
        { .r = 97, .g = 135, .b = 255 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 32, .g = 33, .b = 38 },
        { .r = 32, .g = 33, .b = 38 },
        { .r = 255, .g = 102, .b = 26 },
        { .r = 255, .g = 220, .b = 45 },
        { .r = 242, .g = 230, .b = 169 },
        { .r = 251, .g = 106, .b = 203 },
        { .r = 64, .g = 191, .b = 255 },
        { .r = 174, .g = 148, .b = 249 }
    },
    .system = 16
};

#endif  /* BASE16_gigavolt_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
