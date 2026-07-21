/**
 * Base16 Swamp Dark 
 *
 * @author Masroof Maindak (https://github.com/masroof-maindak)
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

#ifndef BASE16_swamp_dark_H__
#define BASE16_swamp_dark_H__

/**
 * The Base16 Swamp Dark scheme.
 *
 * @author Masroof Maindak (https://github.com/masroof-maindak)
 */
extern const base16_scheme base16_swamp_dark;

#endif  /* BASE16_swamp_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_swamp_dark_IMPLEMENTATION_ONCE
#define BASE16_swamp_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_swamp_dark = {
    .name = "Swamp Dark",
    .base = {
        { .r = 36, .g = 32, .b = 21 },
        { .r = 58, .g = 49, .b = 36 },
        { .r = 77, .g = 63, .b = 50 },
        { .r = 95, .g = 78, .b = 65 },
        { .r = 184, .g = 165, .b = 140 },
        { .r = 210, .g = 195, .b = 164 },
        { .r = 235, .g = 224, .b = 187 },
        { .r = 241, .g = 233, .b = 208 },
        { .r = 219, .g = 147, .b = 13 },
        { .r = 235, .g = 224, .b = 187 },
        { .r = 168, .g = 45, .b = 86 },
        { .r = 122, .g = 118, .b = 83 },
        { .r = 219, .g = 147, .b = 13 },
        { .r = 193, .g = 102, .b = 107 },
        { .r = 145, .g = 80, .b = 108 },
        { .r = 97, .g = 160, .b = 168 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 36, .g = 32, .b = 21 },
        { .r = 36, .g = 32, .b = 21 },
        { .r = 219, .g = 147, .b = 13 },
        { .r = 168, .g = 45, .b = 86 },
        { .r = 122, .g = 118, .b = 83 },
        { .r = 219, .g = 147, .b = 13 },
        { .r = 193, .g = 102, .b = 107 },
        { .r = 145, .g = 80, .b = 108 }
    },
    .system = 16
};

#endif  /* BASE16_swamp_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
