/**
 * Base24 Fish Tank 
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

#ifndef BASE24_fish_tank_H__
#define BASE24_fish_tank_H__

/**
 * The Base24 Fish Tank scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_fish_tank;

#endif  /* BASE24_fish_tank_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_fish_tank_IMPLEMENTATION_ONCE
#define BASE24_fish_tank_IMPLEMENTATION_ONCE

const base16_scheme base24_fish_tank = {
    .name = "Fish Tank",
    .base = {
        { .r = 34, .g = 36, .b = 54 },
        { .r = 3, .g = 6, .b = 60 },
        { .r = 108, .g = 90, .b = 48 },
        { .r = 140, .g = 127, .b = 99 },
        { .r = 172, .g = 164, .b = 150 },
        { .r = 204, .g = 201, .b = 201 },
        { .r = 236, .g = 239, .b = 252 },
        { .r = 246, .g = 255, .b = 236 },
        { .r = 198, .g = 0, .b = 73 },
        { .r = 253, .g = 205, .b = 94 },
        { .r = 177, .g = 189, .b = 249 },
        { .r = 171, .g = 241, .b = 87 },
        { .r = 150, .g = 134, .b = 98 },
        { .r = 82, .g = 95, .b = 184 },
        { .r = 151, .g = 111, .b = 129 },
        { .r = 99, .g = 0, .b = 36 },

        /* Base24 */
        { .r = 72, .g = 60, .b = 32 },
        { .r = 36, .g = 30, .b = 16 },
        { .r = 217, .g = 74, .b = 138 },
        { .r = 254, .g = 230, .b = 168 },
        { .r = 218, .g = 255, .b = 168 },
        { .r = 164, .g = 188, .b = 134 },
        { .r = 177, .g = 189, .b = 249 },
        { .r = 253, .g = 164, .b = 204 }
    },
    .system = 24
};

#endif  /* BASE24_fish_tank_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
