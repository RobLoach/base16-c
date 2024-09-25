/**
 * Base16 Helios 
 *
 * @author Alex Meyer (https://github.com/reyemxela)
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

#ifndef BASE16_helios_H__
#define BASE16_helios_H__

/**
 * The Base16 Helios scheme.
 *
 * @author Alex Meyer (https://github.com/reyemxela)
 */
extern const base16_scheme base16_helios;

#endif  /* BASE16_helios_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_helios_IMPLEMENTATION_ONCE
#define BASE16_helios_IMPLEMENTATION_ONCE

const base16_scheme base16_helios = {
    .name = "Helios",
    .base = {
        { .r = 29, .g = 32, .b = 33 },
        { .r = 56, .g = 60, .b = 62 },
        { .r = 83, .g = 88, .b = 91 },
        { .r = 111, .g = 117, .b = 121 },
        { .r = 205, .g = 205, .b = 205 },
        { .r = 213, .g = 213, .b = 213 },
        { .r = 221, .g = 221, .b = 221 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 215, .g = 38, .b = 56 },
        { .r = 235, .g = 132, .b = 19 },
        { .r = 241, .g = 157, .b = 26 },
        { .r = 136, .g = 185, .b = 45 },
        { .r = 27, .g = 165, .b = 149 },
        { .r = 30, .g = 139, .b = 172 },
        { .r = 190, .g = 66, .b = 100 },
        { .r = 200, .g = 94, .b = 13 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 29, .g = 32, .b = 33 },
        { .r = 29, .g = 32, .b = 33 },
        { .r = 215, .g = 38, .b = 56 },
        { .r = 241, .g = 157, .b = 26 },
        { .r = 136, .g = 185, .b = 45 },
        { .r = 27, .g = 165, .b = 149 },
        { .r = 30, .g = 139, .b = 172 },
        { .r = 190, .g = 66, .b = 100 }
    },
    .system = 16
};

#endif  /* BASE16_helios_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
