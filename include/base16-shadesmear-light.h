/**
 * Base16 ShadeSmear Light 
 *
 * @author Kyle Giammarco (http://kyle.giammar.co)
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

#ifndef BASE16_shadesmear_light_H__
#define BASE16_shadesmear_light_H__

/**
 * The Base16 ShadeSmear Light scheme.
 *
 * @author Kyle Giammarco (http://kyle.giammar.co)
 */
extern const base16_scheme base16_shadesmear_light;

#endif  /* BASE16_shadesmear_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_shadesmear_light_IMPLEMENTATION_ONCE
#define BASE16_shadesmear_light_IMPLEMENTATION_ONCE

const base16_scheme base16_shadesmear_light = {
    .name = "ShadeSmear Light",
    .base = {
        { .r = 219, .g = 219, .b = 219 },
        { .r = 228, .g = 228, .b = 228 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 78, .g = 78, .b = 78 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 35, .g = 35, .b = 35 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 228, .g = 228, .b = 228 },
        { .r = 204, .g = 84, .b = 80 },
        { .r = 166, .g = 66, .b = 112 },
        { .r = 48, .g = 120, .b = 120 },
        { .r = 113, .g = 152, .b = 59 },
        { .r = 197, .g = 125, .b = 66 },
        { .r = 55, .g = 99, .b = 136 },
        { .r = 215, .g = 171, .b = 84 },
        { .r = 109, .g = 109, .b = 109 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 219, .g = 219, .b = 219 },
        { .r = 219, .g = 219, .b = 219 },
        { .r = 204, .g = 84, .b = 80 },
        { .r = 48, .g = 120, .b = 120 },
        { .r = 113, .g = 152, .b = 59 },
        { .r = 197, .g = 125, .b = 66 },
        { .r = 55, .g = 99, .b = 136 },
        { .r = 215, .g = 171, .b = 84 }
    },
    .system = 16
};

#endif  /* BASE16_shadesmear_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
