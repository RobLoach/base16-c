/**
 * Base16 selenized-light 
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

#ifndef BASE16_selenized_light_H__
#define BASE16_selenized_light_H__

/**
 * The Base16 selenized-light scheme.
 *
 * @author Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
 */
extern const base16_scheme base16_selenized_light;

#endif  /* BASE16_selenized_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_selenized_light_IMPLEMENTATION_ONCE
#define BASE16_selenized_light_IMPLEMENTATION_ONCE

const base16_scheme base16_selenized_light = {
    .name = "selenized-light",
    .base = {
        { .r = 251, .g = 243, .b = 219 },
        { .r = 236, .g = 227, .b = 204 },
        { .r = 213, .g = 205, .b = 182 },
        { .r = 144, .g = 153, .b = 149 },
        { .r = 144, .g = 153, .b = 149 },
        { .r = 83, .g = 103, .b = 109 },
        { .r = 58, .g = 77, .b = 83 },
        { .r = 58, .g = 77, .b = 83 },
        { .r = 204, .g = 23, .b = 41 },
        { .r = 188, .g = 88, .b = 25 },
        { .r = 167, .g = 131, .b = 0 },
        { .r = 66, .g = 139, .b = 0 },
        { .r = 0, .g = 151, .b = 138 },
        { .r = 0, .g = 109, .b = 206 },
        { .r = 130, .g = 93, .b = 192 },
        { .r = 196, .g = 67, .b = 146 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 251, .g = 243, .b = 219 },
        { .r = 251, .g = 243, .b = 219 },
        { .r = 204, .g = 23, .b = 41 },
        { .r = 167, .g = 131, .b = 0 },
        { .r = 66, .g = 139, .b = 0 },
        { .r = 0, .g = 151, .b = 138 },
        { .r = 0, .g = 109, .b = 206 },
        { .r = 130, .g = 93, .b = 192 }
    },
    .system = 16
};

#endif  /* BASE16_selenized_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
