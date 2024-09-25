/**
 * Base16 Purpledream 
 *
 * @author malet
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

#ifndef BASE16_purpledream_H__
#define BASE16_purpledream_H__

/**
 * The Base16 Purpledream scheme.
 *
 * @author malet
 */
extern const base16_scheme base16_purpledream;

#endif  /* BASE16_purpledream_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_purpledream_IMPLEMENTATION_ONCE
#define BASE16_purpledream_IMPLEMENTATION_ONCE

const base16_scheme base16_purpledream = {
    .name = "Purpledream",
    .base = {
        { .r = 16, .g = 5, .b = 16 },
        { .r = 48, .g = 32, .b = 48 },
        { .r = 64, .g = 48, .b = 64 },
        { .r = 96, .g = 80, .b = 96 },
        { .r = 187, .g = 176, .b = 187 },
        { .r = 221, .g = 208, .b = 221 },
        { .r = 238, .g = 224, .b = 238 },
        { .r = 255, .g = 240, .b = 255 },
        { .r = 255, .g = 29, .b = 13 },
        { .r = 204, .g = 174, .b = 20 },
        { .r = 240, .g = 0, .b = 160 },
        { .r = 20, .g = 204, .b = 100 },
        { .r = 0, .g = 117, .b = 176 },
        { .r = 0, .g = 160, .b = 240 },
        { .r = 176, .g = 0, .b = 208 },
        { .r = 106, .g = 42, .b = 60 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 16, .g = 5, .b = 16 },
        { .r = 16, .g = 5, .b = 16 },
        { .r = 255, .g = 29, .b = 13 },
        { .r = 240, .g = 0, .b = 160 },
        { .r = 20, .g = 204, .b = 100 },
        { .r = 0, .g = 117, .b = 176 },
        { .r = 0, .g = 160, .b = 240 },
        { .r = 176, .g = 0, .b = 208 }
    },
    .system = 16
};

#endif  /* BASE16_purpledream_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
