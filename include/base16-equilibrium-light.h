/**
 * Base16 Equilibrium Light 
 *
 * @author Carlo Abelli
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

#ifndef BASE16_equilibrium_light_H__
#define BASE16_equilibrium_light_H__

/**
 * The Base16 Equilibrium Light scheme.
 *
 * @author Carlo Abelli
 */
extern const base16_scheme base16_equilibrium_light;

#endif  /* BASE16_equilibrium_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_equilibrium_light_IMPLEMENTATION_ONCE
#define BASE16_equilibrium_light_IMPLEMENTATION_ONCE

const base16_scheme base16_equilibrium_light = {
    .name = "Equilibrium Light",
    .base = {
        { .r = 245, .g = 240, .b = 231 },
        { .r = 231, .g = 226, .b = 217 },
        { .r = 216, .g = 212, .b = 203 },
        { .r = 115, .g = 119, .b = 127 },
        { .r = 90, .g = 95, .b = 102 },
        { .r = 67, .g = 71, .b = 78 },
        { .r = 44, .g = 49, .b = 56 },
        { .r = 24, .g = 28, .b = 34 },
        { .r = 208, .g = 32, .b = 35 },
        { .r = 191, .g = 62, .b = 5 },
        { .r = 157, .g = 111, .b = 0 },
        { .r = 99, .g = 114, .b = 0 },
        { .r = 0, .g = 122, .b = 114 },
        { .r = 0, .g = 115, .b = 181 },
        { .r = 78, .g = 102, .b = 182 },
        { .r = 196, .g = 39, .b = 117 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 245, .g = 240, .b = 231 },
        { .r = 245, .g = 240, .b = 231 },
        { .r = 208, .g = 32, .b = 35 },
        { .r = 157, .g = 111, .b = 0 },
        { .r = 99, .g = 114, .b = 0 },
        { .r = 0, .g = 122, .b = 114 },
        { .r = 0, .g = 115, .b = 181 },
        { .r = 78, .g = 102, .b = 182 }
    },
    .system = 16
};

#endif  /* BASE16_equilibrium_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
