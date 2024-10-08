/**
 * Base16 Marrakesh 
 *
 * @author Alexandre Gavioli (http://github.com/Alexx2/)
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

#ifndef BASE16_marrakesh_H__
#define BASE16_marrakesh_H__

/**
 * The Base16 Marrakesh scheme.
 *
 * @author Alexandre Gavioli (http://github.com/Alexx2/)
 */
extern const base16_scheme base16_marrakesh;

#endif  /* BASE16_marrakesh_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_marrakesh_IMPLEMENTATION_ONCE
#define BASE16_marrakesh_IMPLEMENTATION_ONCE

const base16_scheme base16_marrakesh = {
    .name = "Marrakesh",
    .base = {
        { .r = 32, .g = 22, .b = 2 },
        { .r = 48, .g = 46, .b = 0 },
        { .r = 95, .g = 91, .b = 23 },
        { .r = 108, .g = 104, .b = 35 },
        { .r = 134, .g = 129, .b = 59 },
        { .r = 148, .g = 142, .b = 72 },
        { .r = 204, .g = 195, .b = 122 },
        { .r = 250, .g = 240, .b = 165 },
        { .r = 195, .g = 83, .b = 89 },
        { .r = 179, .g = 97, .b = 68 },
        { .r = 168, .g = 131, .b = 57 },
        { .r = 24, .g = 151, .b = 78 },
        { .r = 117, .g = 167, .b = 56 },
        { .r = 71, .g = 124, .b = 161 },
        { .r = 136, .g = 104, .b = 179 },
        { .r = 179, .g = 88, .b = 142 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 32, .g = 22, .b = 2 },
        { .r = 32, .g = 22, .b = 2 },
        { .r = 195, .g = 83, .b = 89 },
        { .r = 168, .g = 131, .b = 57 },
        { .r = 24, .g = 151, .b = 78 },
        { .r = 117, .g = 167, .b = 56 },
        { .r = 71, .g = 124, .b = 161 },
        { .r = 136, .g = 104, .b = 179 }
    },
    .system = 16
};

#endif  /* BASE16_marrakesh_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
