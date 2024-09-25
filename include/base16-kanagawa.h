/**
 * Base16 Kanagawa 
 *
 * @author Tommaso Laurenzi (https://github.com/rebelot)
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

#ifndef BASE16_kanagawa_H__
#define BASE16_kanagawa_H__

/**
 * The Base16 Kanagawa scheme.
 *
 * @author Tommaso Laurenzi (https://github.com/rebelot)
 */
extern const base16_scheme base16_kanagawa;

#endif  /* BASE16_kanagawa_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_kanagawa_IMPLEMENTATION_ONCE
#define BASE16_kanagawa_IMPLEMENTATION_ONCE

const base16_scheme base16_kanagawa = {
    .name = "Kanagawa",
    .base = {
        { .r = 31, .g = 31, .b = 40 },
        { .r = 22, .g = 22, .b = 29 },
        { .r = 34, .g = 50, .b = 73 },
        { .r = 84, .g = 84, .b = 109 },
        { .r = 114, .g = 113, .b = 105 },
        { .r = 220, .g = 215, .b = 186 },
        { .r = 200, .g = 192, .b = 147 },
        { .r = 113, .g = 124, .b = 124 },
        { .r = 195, .g = 64, .b = 67 },
        { .r = 255, .g = 160, .b = 102 },
        { .r = 192, .g = 163, .b = 110 },
        { .r = 118, .g = 148, .b = 106 },
        { .r = 106, .g = 149, .b = 137 },
        { .r = 126, .g = 156, .b = 216 },
        { .r = 149, .g = 127, .b = 184 },
        { .r = 210, .g = 126, .b = 153 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 31, .g = 31, .b = 40 },
        { .r = 31, .g = 31, .b = 40 },
        { .r = 195, .g = 64, .b = 67 },
        { .r = 192, .g = 163, .b = 110 },
        { .r = 118, .g = 148, .b = 106 },
        { .r = 106, .g = 149, .b = 137 },
        { .r = 126, .g = 156, .b = 216 },
        { .r = 149, .g = 127, .b = 184 }
    },
    .system = 16
};

#endif  /* BASE16_kanagawa_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
