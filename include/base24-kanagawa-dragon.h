/**
 * Base24 Kanagawa Dragon 
 *
 * @author Stefan Weigl-Bosker (https://github.com/sweiglbosker), Tommaso Laurenzi (https://github.com/rebelot/kanagawa.nvim)
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

#ifndef BASE24_kanagawa_dragon_H__
#define BASE24_kanagawa_dragon_H__

/**
 * The Base24 Kanagawa Dragon scheme.
 *
 * @author Stefan Weigl-Bosker (https://github.com/sweiglbosker), Tommaso Laurenzi (https://github.com/rebelot/kanagawa.nvim)
 */
extern const base16_scheme base24_kanagawa_dragon;

#endif  /* BASE24_kanagawa_dragon_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_kanagawa_dragon_IMPLEMENTATION_ONCE
#define BASE24_kanagawa_dragon_IMPLEMENTATION_ONCE

const base16_scheme base24_kanagawa_dragon = {
    .name = "Kanagawa Dragon",
    .base = {
        { .r = 24, .g = 22, .b = 22 },
        { .r = 40, .g = 39, .b = 39 },
        { .r = 57, .g = 56, .b = 54 },
        { .r = 98, .g = 94, .b = 90 },
        { .r = 115, .g = 124, .b = 115 },
        { .r = 197, .g = 201, .b = 197 },
        { .r = 200, .g = 192, .b = 147 },
        { .r = 197, .g = 201, .b = 197 },
        { .r = 196, .g = 116, .b = 110 },
        { .r = 182, .g = 146, .b = 123 },
        { .r = 196, .g = 178, .b = 138 },
        { .r = 138, .g = 154, .b = 123 },
        { .r = 142, .g = 164, .b = 162 },
        { .r = 139, .g = 164, .b = 176 },
        { .r = 162, .g = 146, .b = 163 },
        { .r = 185, .g = 141, .b = 123 },

        /* Base24 */
        { .r = 18, .g = 18, .b = 15 },
        { .r = 13, .g = 12, .b = 12 },
        { .r = 228, .g = 104, .b = 118 },
        { .r = 230, .g = 195, .b = 132 },
        { .r = 135, .g = 169, .b = 135 },
        { .r = 122, .g = 168, .b = 159 },
        { .r = 127, .g = 180, .b = 202 },
        { .r = 147, .g = 138, .b = 169 }
    },
    .system = 24
};

#endif  /* BASE24_kanagawa_dragon_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
