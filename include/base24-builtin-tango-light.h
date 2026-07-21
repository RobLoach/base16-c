/**
 * Base24 Builtin Tango Light 
 *
 * @author FredHappyface (https://github.com/fredHappyface)
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
    base16_color base[24]; /** An array of the colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE24_builtin_tango_light_H__
#define BASE24_builtin_tango_light_H__

/**
 * The Base24 Builtin Tango Light scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_builtin_tango_light;

#endif  /* BASE24_builtin_tango_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_builtin_tango_light_IMPLEMENTATION_ONCE
#define BASE24_builtin_tango_light_IMPLEMENTATION_ONCE

const base16_scheme base24_builtin_tango_light = {
    .name = "Builtin Tango Light",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 84, .g = 87, .b = 83 },
        { .r = 115, .g = 119, .b = 114 },
        { .r = 147, .g = 151, .b = 145 },
        { .r = 179, .g = 183, .b = 176 },
        { .r = 211, .g = 215, .b = 207 },
        { .r = 237, .g = 237, .b = 236 },
        { .r = 204, .g = 0, .b = 0 },
        { .r = 196, .g = 160, .b = 0 },
        { .r = 113, .g = 158, .b = 207 },
        { .r = 78, .g = 154, .b = 5 },
        { .r = 5, .g = 152, .b = 154 },
        { .r = 52, .g = 100, .b = 164 },
        { .r = 116, .g = 80, .b = 122 },
        { .r = 102, .g = 0, .b = 0 },

        /* Base24 */
        { .r = 56, .g = 58, .b = 55 },
        { .r = 28, .g = 29, .b = 27 },
        { .r = 239, .g = 40, .b = 40 },
        { .r = 252, .g = 233, .b = 78 },
        { .r = 138, .g = 226, .b = 52 },
        { .r = 52, .g = 226, .b = 226 },
        { .r = 113, .g = 158, .b = 207 },
        { .r = 173, .g = 126, .b = 167 }
    },
    .system = 24
};

#endif  /* BASE24_builtin_tango_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
