/**
 * Base24 Night Owlish Light 
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

#ifndef BASE24_night_owlish_light_H__
#define BASE24_night_owlish_light_H__

/**
 * The Base24 Night Owlish Light scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_night_owlish_light;

#endif  /* BASE24_night_owlish_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_night_owlish_light_IMPLEMENTATION_ONCE
#define BASE24_night_owlish_light_IMPLEMENTATION_ONCE

const base16_scheme base24_night_owlish_light = {
    .name = "Night Owlish Light",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 229, .g = 230, .b = 230 },
        { .r = 203, .g = 205, .b = 205 },
        { .r = 177, .g = 180, .b = 180 },
        { .r = 113, .g = 117, .b = 117 },
        { .r = 88, .g = 91, .b = 91 },
        { .r = 63, .g = 65, .b = 65 },
        { .r = 1, .g = 22, .b = 39 },
        { .r = 211, .g = 66, .b = 62 },
        { .r = 218, .g = 170, .b = 1 },
        { .r = 218, .g = 200, .b = 1 },
        { .r = 42, .g = 162, .b = 152 },
        { .r = 8, .g = 145, .b = 106 },
        { .r = 72, .g = 118, .b = 214 },
        { .r = 64, .g = 63, .b = 83 },
        { .r = 105, .g = 33, .b = 31 },

        /* Base24 */
        { .r = 81, .g = 86, .b = 86 },
        { .r = 40, .g = 43, .b = 43 },
        { .r = 247, .g = 110, .b = 110 },
        { .r = 218, .g = 194, .b = 107 },
        { .r = 73, .g = 208, .b = 197 },
        { .r = 0, .g = 201, .b = 144 },
        { .r = 92, .g = 167, .b = 228 },
        { .r = 105, .g = 112, .b = 152 }
    },
    .system = 24
};

#endif  /* BASE24_night_owlish_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
