/**
 * Base16 Atelier Plateau Light 
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
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

#ifndef BASE16_atelier_plateau_light_H__
#define BASE16_atelier_plateau_light_H__

/**
 * The Base16 Atelier Plateau Light scheme.
 *
 * @author Bram de Haan (http://atelierbramdehaan.nl)
 */
extern const base16_scheme base16_atelier_plateau_light;

#endif  /* BASE16_atelier_plateau_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atelier_plateau_light_IMPLEMENTATION_ONCE
#define BASE16_atelier_plateau_light_IMPLEMENTATION_ONCE

const base16_scheme base16_atelier_plateau_light = {
    .name = "Atelier Plateau Light",
    .base = {
        { .r = 244, .g = 236, .b = 236 },
        { .r = 231, .g = 223, .b = 223 },
        { .r = 138, .g = 133, .b = 133 },
        { .r = 126, .g = 119, .b = 119 },
        { .r = 101, .g = 93, .b = 93 },
        { .r = 88, .g = 80, .b = 80 },
        { .r = 41, .g = 36, .b = 36 },
        { .r = 27, .g = 24, .b = 24 },
        { .r = 202, .g = 73, .b = 73 },
        { .r = 180, .g = 90, .b = 60 },
        { .r = 160, .g = 110, .b = 59 },
        { .r = 75, .g = 139, .b = 139 },
        { .r = 84, .g = 133, .b = 182 },
        { .r = 114, .g = 114, .b = 202 },
        { .r = 132, .g = 100, .b = 196 },
        { .r = 189, .g = 81, .b = 135 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 244, .g = 236, .b = 236 },
        { .r = 244, .g = 236, .b = 236 },
        { .r = 202, .g = 73, .b = 73 },
        { .r = 160, .g = 110, .b = 59 },
        { .r = 75, .g = 139, .b = 139 },
        { .r = 84, .g = 133, .b = 182 },
        { .r = 114, .g = 114, .b = 202 },
        { .r = 132, .g = 100, .b = 196 }
    },
    .system = 16
};

#endif  /* BASE16_atelier_plateau_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
