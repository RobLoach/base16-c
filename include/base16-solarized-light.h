/**
 * Base16 Solarized Light 
 *
 * @author Ethan Schoonover (modified by aramisgithub)
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

#ifndef BASE16_solarized_light_H__
#define BASE16_solarized_light_H__

/**
 * The Base16 Solarized Light scheme.
 *
 * @author Ethan Schoonover (modified by aramisgithub)
 */
extern const base16_scheme base16_solarized_light;

#endif  /* BASE16_solarized_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_solarized_light_IMPLEMENTATION_ONCE
#define BASE16_solarized_light_IMPLEMENTATION_ONCE

const base16_scheme base16_solarized_light = {
    .name = "Solarized Light",
    .base = {
        { .r = 253, .g = 246, .b = 227 },
        { .r = 238, .g = 232, .b = 213 },
        { .r = 147, .g = 161, .b = 161 },
        { .r = 131, .g = 148, .b = 150 },
        { .r = 101, .g = 123, .b = 131 },
        { .r = 88, .g = 110, .b = 117 },
        { .r = 7, .g = 54, .b = 66 },
        { .r = 0, .g = 43, .b = 54 },
        { .r = 220, .g = 50, .b = 47 },
        { .r = 203, .g = 75, .b = 22 },
        { .r = 181, .g = 137, .b = 0 },
        { .r = 133, .g = 153, .b = 0 },
        { .r = 42, .g = 161, .b = 152 },
        { .r = 38, .g = 139, .b = 210 },
        { .r = 108, .g = 113, .b = 196 },
        { .r = 211, .g = 54, .b = 130 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 253, .g = 246, .b = 227 },
        { .r = 253, .g = 246, .b = 227 },
        { .r = 220, .g = 50, .b = 47 },
        { .r = 181, .g = 137, .b = 0 },
        { .r = 133, .g = 153, .b = 0 },
        { .r = 42, .g = 161, .b = 152 },
        { .r = 38, .g = 139, .b = 210 },
        { .r = 108, .g = 113, .b = 196 }
    },
    .system = 16
};

#endif  /* BASE16_solarized_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
