/**
 * Base16 standardized-light 
 *
 * @author ali (https://github.com/ali-githb/base16-standardized-scheme)
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

#ifndef BASE16_standardized_light_H__
#define BASE16_standardized_light_H__

/**
 * The Base16 standardized-light scheme.
 *
 * @author ali (https://github.com/ali-githb/base16-standardized-scheme)
 */
extern const base16_scheme base16_standardized_light;

#endif  /* BASE16_standardized_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_standardized_light_IMPLEMENTATION_ONCE
#define BASE16_standardized_light_IMPLEMENTATION_ONCE

const base16_scheme base16_standardized_light = {
    .name = "standardized-light",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 238, .g = 238, .b = 238 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 118, .g = 118, .b = 118 },
        { .r = 118, .g = 118, .b = 118 },
        { .r = 68, .g = 68, .b = 68 },
        { .r = 51, .g = 51, .b = 51 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 208, .g = 62, .b = 62 },
        { .r = 215, .g = 105, .b = 29 },
        { .r = 173, .g = 130, .b = 0 },
        { .r = 49, .g = 134, .b = 31 },
        { .r = 0, .g = 153, .b = 143 },
        { .r = 49, .g = 115, .b = 197 },
        { .r = 158, .g = 87, .b = 194 },
        { .r = 137, .g = 80, .b = 37 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 208, .g = 62, .b = 62 },
        { .r = 173, .g = 130, .b = 0 },
        { .r = 49, .g = 134, .b = 31 },
        { .r = 0, .g = 153, .b = 143 },
        { .r = 49, .g = 115, .b = 197 },
        { .r = 158, .g = 87, .b = 194 }
    },
    .system = 16
};

#endif  /* BASE16_standardized_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
