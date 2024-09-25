/**
 * Base16 Kimber 
 *
 * @author Mishka Nguyen (https://github.com/akhsiM)
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

#ifndef BASE16_kimber_H__
#define BASE16_kimber_H__

/**
 * The Base16 Kimber scheme.
 *
 * @author Mishka Nguyen (https://github.com/akhsiM)
 */
extern const base16_scheme base16_kimber;

#endif  /* BASE16_kimber_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_kimber_IMPLEMENTATION_ONCE
#define BASE16_kimber_IMPLEMENTATION_ONCE

const base16_scheme base16_kimber = {
    .name = "Kimber",
    .base = {
        { .r = 34, .g = 34, .b = 34 },
        { .r = 49, .g = 49, .b = 49 },
        { .r = 85, .g = 93, .b = 85 },
        { .r = 100, .g = 70, .b = 70 },
        { .r = 90, .g = 90, .b = 90 },
        { .r = 222, .g = 222, .b = 231 },
        { .r = 195, .g = 195, .b = 180 },
        { .r = 255, .g = 255, .b = 230 },
        { .r = 200, .g = 140, .b = 140 },
        { .r = 71, .g = 108, .b = 136 },
        { .r = 216, .g = 181, .b = 109 },
        { .r = 153, .g = 200, .b = 153 },
        { .r = 120, .g = 180, .b = 180 },
        { .r = 83, .g = 124, .b = 156 },
        { .r = 134, .g = 202, .b = 205 },
        { .r = 112, .g = 79, .b = 79 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 34, .g = 34, .b = 34 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 200, .g = 140, .b = 140 },
        { .r = 216, .g = 181, .b = 109 },
        { .r = 153, .g = 200, .b = 153 },
        { .r = 120, .g = 180, .b = 180 },
        { .r = 83, .g = 124, .b = 156 },
        { .r = 134, .g = 202, .b = 205 }
    },
    .system = 16
};

#endif  /* BASE16_kimber_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
