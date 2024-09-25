/**
 * Base16 selenized-dark 
 *
 * @author Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
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

#ifndef BASE16_selenized_dark_H__
#define BASE16_selenized_dark_H__

/**
 * The Base16 selenized-dark scheme.
 *
 * @author Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
 */
extern const base16_scheme base16_selenized_dark;

#endif  /* BASE16_selenized_dark_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_selenized_dark_IMPLEMENTATION_ONCE
#define BASE16_selenized_dark_IMPLEMENTATION_ONCE

const base16_scheme base16_selenized_dark = {
    .name = "selenized-dark",
    .base = {
        { .r = 16, .g = 60, .b = 72 },
        { .r = 24, .g = 73, .b = 86 },
        { .r = 45, .g = 91, .b = 105 },
        { .r = 114, .g = 137, .b = 143 },
        { .r = 114, .g = 137, .b = 143 },
        { .r = 173, .g = 188, .b = 188 },
        { .r = 202, .g = 216, .b = 217 },
        { .r = 202, .g = 216, .b = 217 },
        { .r = 250, .g = 87, .b = 80 },
        { .r = 237, .g = 134, .b = 73 },
        { .r = 219, .g = 179, .b = 45 },
        { .r = 117, .g = 185, .b = 56 },
        { .r = 65, .g = 199, .b = 185 },
        { .r = 70, .g = 149, .b = 247 },
        { .r = 175, .g = 136, .b = 235 },
        { .r = 242, .g = 117, .b = 190 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 16, .g = 60, .b = 72 },
        { .r = 16, .g = 60, .b = 72 },
        { .r = 250, .g = 87, .b = 80 },
        { .r = 219, .g = 179, .b = 45 },
        { .r = 117, .g = 185, .b = 56 },
        { .r = 65, .g = 199, .b = 185 },
        { .r = 70, .g = 149, .b = 247 },
        { .r = 175, .g = 136, .b = 235 }
    },
    .system = 16
};

#endif  /* BASE16_selenized_dark_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
