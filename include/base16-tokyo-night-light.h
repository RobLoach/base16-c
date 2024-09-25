/**
 * Base16 Tokyo Night Light 
 *
 * @author Michaël Ball
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

#ifndef BASE16_tokyo_night_light_H__
#define BASE16_tokyo_night_light_H__

/**
 * The Base16 Tokyo Night Light scheme.
 *
 * @author Michaël Ball
 */
extern const base16_scheme base16_tokyo_night_light;

#endif  /* BASE16_tokyo_night_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tokyo_night_light_IMPLEMENTATION_ONCE
#define BASE16_tokyo_night_light_IMPLEMENTATION_ONCE

const base16_scheme base16_tokyo_night_light = {
    .name = "Tokyo Night Light",
    .base = {
        { .r = 213, .g = 214, .b = 219 },
        { .r = 203, .g = 204, .b = 209 },
        { .r = 223, .g = 224, .b = 229 },
        { .r = 150, .g = 153, .b = 163 },
        { .r = 76, .g = 80, .b = 94 },
        { .r = 52, .g = 59, .b = 89 },
        { .r = 26, .g = 27, .b = 38 },
        { .r = 26, .g = 27, .b = 38 },
        { .r = 52, .g = 59, .b = 88 },
        { .r = 150, .g = 80, .b = 39 },
        { .r = 22, .g = 103, .b = 117 },
        { .r = 72, .g = 94, .b = 48 },
        { .r = 62, .g = 105, .b = 104 },
        { .r = 52, .g = 84, .b = 138 },
        { .r = 90, .g = 74, .b = 120 },
        { .r = 140, .g = 67, .b = 81 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 213, .g = 214, .b = 219 },
        { .r = 213, .g = 214, .b = 219 },
        { .r = 52, .g = 59, .b = 88 },
        { .r = 22, .g = 103, .b = 117 },
        { .r = 72, .g = 94, .b = 48 },
        { .r = 62, .g = 105, .b = 104 },
        { .r = 52, .g = 84, .b = 138 },
        { .r = 90, .g = 74, .b = 120 }
    },
    .system = 16
};

#endif  /* BASE16_tokyo_night_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
