/**
 * Base24 Crayon Pony Fish 
 *
 * @author FredHappyface (https://github.com/fredHappyface)
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

#ifndef BASE24_crayon_pony_fish_H__
#define BASE24_crayon_pony_fish_H__

/**
 * The Base24 Crayon Pony Fish scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_crayon_pony_fish;

#endif  /* BASE24_crayon_pony_fish_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_crayon_pony_fish_IMPLEMENTATION_ONCE
#define BASE24_crayon_pony_fish_IMPLEMENTATION_ONCE

const base16_scheme base24_crayon_pony_fish = {
    .name = "Crayon Pony Fish",
    .base = {
        { .r = 20, .g = 6, .b = 7 },
        { .r = 42, .g = 26, .b = 28 },
        { .r = 60, .g = 42, .b = 46 },
        { .r = 71, .g = 52, .b = 56 },
        { .r = 82, .g = 62, .b = 67 },
        { .r = 93, .g = 72, .b = 78 },
        { .r = 104, .g = 82, .b = 89 },
        { .r = 175, .g = 148, .b = 157 },
        { .r = 144, .g = 0, .b = 42 },
        { .r = 170, .g = 48, .b = 27 },
        { .r = 207, .g = 201, .b = 255 },
        { .r = 87, .g = 149, .b = 35 },
        { .r = 232, .g = 167, .b = 102 },
        { .r = 139, .g = 135, .b = 175 },
        { .r = 104, .g = 46, .b = 80 },
        { .r = 72, .g = 0, .b = 21 },

        /* Base24 */
        { .r = 40, .g = 28, .b = 30 },
        { .r = 20, .g = 14, .b = 15 },
        { .r = 197, .g = 36, .b = 92 },
        { .r = 199, .g = 55, .b = 29 },
        { .r = 141, .g = 255, .b = 86 },
        { .r = 255, .g = 206, .b = 174 },
        { .r = 207, .g = 201, .b = 255 },
        { .r = 251, .g = 108, .b = 185 }
    },
    .system = 24
};

#endif  /* BASE24_crayon_pony_fish_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
