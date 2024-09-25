/**
 * Base16 Heetch Light 
 *
 * @author Geoffrey Teale (tealeg@gmail.com)
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

#ifndef BASE16_heetch_light_H__
#define BASE16_heetch_light_H__

/**
 * The Base16 Heetch Light scheme.
 *
 * @author Geoffrey Teale (tealeg@gmail.com)
 */
extern const base16_scheme base16_heetch_light;

#endif  /* BASE16_heetch_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_heetch_light_IMPLEMENTATION_ONCE
#define BASE16_heetch_light_IMPLEMENTATION_ONCE

const base16_scheme base16_heetch_light = {
    .name = "Heetch Light",
    .base = {
        { .r = 254, .g = 255, .b = 255 },
        { .r = 57, .g = 37, .b = 81 },
        { .r = 123, .g = 109, .b = 139 },
        { .r = 156, .g = 146, .b = 168 },
        { .r = 221, .g = 214, .b = 229 },
        { .r = 90, .g = 73, .b = 110 },
        { .r = 71, .g = 5, .b = 70 },
        { .r = 25, .g = 1, .b = 52 },
        { .r = 39, .g = 217, .b = 213 },
        { .r = 189, .g = 182, .b = 197 },
        { .r = 91, .g = 162, .b = 182 },
        { .r = 248, .g = 0, .b = 89 },
        { .r = 195, .g = 54, .b = 120 },
        { .r = 71, .g = 249, .b = 245 },
        { .r = 189, .g = 1, .b = 82 },
        { .r = 222, .g = 218, .b = 226 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 254, .g = 255, .b = 255 },
        { .r = 254, .g = 255, .b = 255 },
        { .r = 39, .g = 217, .b = 213 },
        { .r = 91, .g = 162, .b = 182 },
        { .r = 248, .g = 0, .b = 89 },
        { .r = 195, .g = 54, .b = 120 },
        { .r = 71, .g = 249, .b = 245 },
        { .r = 189, .g = 1, .b = 82 }
    },
    .system = 16
};

#endif  /* BASE16_heetch_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
