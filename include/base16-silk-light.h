/**
 * Base16 Silk Light 
 *
 * @author Gabriel Fontes (https://github.com/Misterio77)
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

#ifndef BASE16_silk_light_H__
#define BASE16_silk_light_H__

/**
 * The Base16 Silk Light scheme.
 *
 * @author Gabriel Fontes (https://github.com/Misterio77)
 */
extern const base16_scheme base16_silk_light;

#endif  /* BASE16_silk_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_silk_light_IMPLEMENTATION_ONCE
#define BASE16_silk_light_IMPLEMENTATION_ONCE

const base16_scheme base16_silk_light = {
    .name = "Silk Light",
    .base = {
        { .r = 233, .g = 241, .b = 239 },
        { .r = 204, .g = 212, .b = 211 },
        { .r = 144, .g = 183, .b = 182 },
        { .r = 92, .g = 120, .b = 123 },
        { .r = 75, .g = 91, .b = 95 },
        { .r = 56, .g = 81, .b = 86 },
        { .r = 14, .g = 60, .b = 70 },
        { .r = 210, .g = 250, .b = 255 },
        { .r = 207, .g = 67, .b = 46 },
        { .r = 210, .g = 127, .b = 70 },
        { .r = 207, .g = 173, .b = 37 },
        { .r = 108, .g = 163, .b = 140 },
        { .r = 50, .g = 156, .b = 162 },
        { .r = 57, .g = 170, .b = 201 },
        { .r = 110, .g = 101, .b = 130 },
        { .r = 134, .g = 83, .b = 105 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 233, .g = 241, .b = 239 },
        { .r = 233, .g = 241, .b = 239 },
        { .r = 207, .g = 67, .b = 46 },
        { .r = 207, .g = 173, .b = 37 },
        { .r = 108, .g = 163, .b = 140 },
        { .r = 50, .g = 156, .b = 162 },
        { .r = 57, .g = 170, .b = 201 },
        { .r = 110, .g = 101, .b = 130 }
    },
    .system = 16
};

#endif  /* BASE16_silk_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
