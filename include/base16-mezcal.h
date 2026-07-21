/**
 * Base16 Mezcal 
 *
 * @author Teshre
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

#ifndef BASE16_mezcal_H__
#define BASE16_mezcal_H__

/**
 * The Base16 Mezcal scheme.
 *
 * @author Teshre
 */
extern const base16_scheme base16_mezcal;

#endif  /* BASE16_mezcal_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_mezcal_IMPLEMENTATION_ONCE
#define BASE16_mezcal_IMPLEMENTATION_ONCE

const base16_scheme base16_mezcal = {
    .name = "Mezcal",
    .base = {
        { .r = 19, .g = 17, .b = 14 },
        { .r = 34, .g = 31, .b = 20 },
        { .r = 54, .g = 48, .b = 30 },
        { .r = 110, .g = 100, .b = 80 },
        { .r = 167, .g = 158, .b = 140 },
        { .r = 224, .g = 216, .b = 200 },
        { .r = 233, .g = 225, .b = 207 },
        { .r = 242, .g = 234, .b = 214 },
        { .r = 218, .g = 110, .b = 84 },
        { .r = 217, .g = 164, .b = 65 },
        { .r = 217, .g = 164, .b = 65 },
        { .r = 168, .g = 184, .b = 74 },
        { .r = 111, .g = 200, .b = 174 },
        { .r = 138, .g = 166, .b = 192 },
        { .r = 194, .g = 138, .b = 168 },
        { .r = 78, .g = 70, .b = 44 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 19, .g = 17, .b = 14 },
        { .r = 19, .g = 17, .b = 14 },
        { .r = 218, .g = 110, .b = 84 },
        { .r = 217, .g = 164, .b = 65 },
        { .r = 168, .g = 184, .b = 74 },
        { .r = 111, .g = 200, .b = 174 },
        { .r = 138, .g = 166, .b = 192 },
        { .r = 194, .g = 138, .b = 168 }
    },
    .system = 16
};

#endif  /* BASE16_mezcal_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
