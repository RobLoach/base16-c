/**
 * Base16 Jellybeans 
 *
 * @author FredHappyface (https://github.com/fredHappyface), converted to Base16 by https://github.com/nonetrix
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

#ifndef BASE16_jellybeans_H__
#define BASE16_jellybeans_H__

/**
 * The Base16 Jellybeans scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface), converted to Base16 by https://github.com/nonetrix
 */
extern const base16_scheme base16_jellybeans;

#endif  /* BASE16_jellybeans_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_jellybeans_IMPLEMENTATION_ONCE
#define BASE16_jellybeans_IMPLEMENTATION_ONCE

const base16_scheme base16_jellybeans = {
    .name = "Jellybeans",
    .base = {
        { .r = 18, .g = 18, .b = 18 },
        { .r = 146, .g = 146, .b = 146 },
        { .r = 189, .g = 189, .b = 189 },
        { .r = 197, .g = 197, .b = 197 },
        { .r = 205, .g = 205, .b = 205 },
        { .r = 213, .g = 213, .b = 213 },
        { .r = 222, .g = 222, .b = 222 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 161, .b = 161 },
        { .r = 255, .g = 186, .b = 123 },
        { .r = 255, .g = 220, .b = 160 },
        { .r = 189, .g = 222, .b = 171 },
        { .r = 26, .g = 178, .b = 168 },
        { .r = 177, .g = 216, .b = 246 },
        { .r = 251, .g = 218, .b = 255 },
        { .r = 113, .g = 57, .b = 57 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 18, .g = 18, .b = 18 },
        { .r = 18, .g = 18, .b = 18 },
        { .r = 255, .g = 161, .b = 161 },
        { .r = 255, .g = 220, .b = 160 },
        { .r = 189, .g = 222, .b = 171 },
        { .r = 26, .g = 178, .b = 168 },
        { .r = 177, .g = 216, .b = 246 },
        { .r = 251, .g = 218, .b = 255 }
    },
    .system = 16
};

#endif  /* BASE16_jellybeans_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
