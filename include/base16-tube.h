/**
 * Base16 London Tube 
 *
 * @author Jan T. Sott
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

#ifndef BASE16_tube_H__
#define BASE16_tube_H__

/**
 * The Base16 London Tube scheme.
 *
 * @author Jan T. Sott
 */
extern const base16_scheme base16_tube;

#endif  /* BASE16_tube_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_tube_IMPLEMENTATION_ONCE
#define BASE16_tube_IMPLEMENTATION_ONCE

const base16_scheme base16_tube = {
    .name = "London Tube",
    .base = {
        { .r = 35, .g = 31, .b = 32 },
        { .r = 28, .g = 63, .b = 149 },
        { .r = 90, .g = 87, .b = 88 },
        { .r = 115, .g = 113, .b = 113 },
        { .r = 149, .g = 156, .b = 161 },
        { .r = 217, .g = 216, .b = 216 },
        { .r = 231, .g = 231, .b = 232 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 238, .g = 46, .b = 36 },
        { .r = 243, .g = 134, .b = 161 },
        { .r = 255, .g = 210, .b = 4 },
        { .r = 0, .g = 133, .b = 62 },
        { .r = 133, .g = 206, .b = 188 },
        { .r = 0, .g = 157, .b = 220 },
        { .r = 152, .g = 0, .b = 93 },
        { .r = 176, .g = 97, .b = 16 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 35, .g = 31, .b = 32 },
        { .r = 35, .g = 31, .b = 32 },
        { .r = 238, .g = 46, .b = 36 },
        { .r = 255, .g = 210, .b = 4 },
        { .r = 0, .g = 133, .b = 62 },
        { .r = 133, .g = 206, .b = 188 },
        { .r = 0, .g = 157, .b = 220 },
        { .r = 152, .g = 0, .b = 93 }
    },
    .system = 16
};

#endif  /* BASE16_tube_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
