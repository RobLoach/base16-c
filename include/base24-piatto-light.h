/**
 * Base24 Piatto Light 
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

#ifndef BASE24_piatto_light_H__
#define BASE24_piatto_light_H__

/**
 * The Base24 Piatto Light scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_piatto_light;

#endif  /* BASE24_piatto_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_piatto_light_IMPLEMENTATION_ONCE
#define BASE24_piatto_light_IMPLEMENTATION_ONCE

const base16_scheme base24_piatto_light = {
    .name = "Piatto Light",
    .base = {
        { .r = 255, .g = 255, .b = 255 },
        { .r = 241, .g = 241, .b = 241 },
        { .r = 225, .g = 225, .b = 225 },
        { .r = 193, .g = 193, .b = 193 },
        { .r = 113, .g = 113, .b = 113 },
        { .r = 81, .g = 81, .b = 81 },
        { .r = 65, .g = 65, .b = 65 },
        { .r = 33, .g = 33, .b = 33 },
        { .r = 178, .g = 55, .b = 113 },
        { .r = 205, .g = 111, .b = 52 },
        { .r = 205, .g = 164, .b = 52 },
        { .r = 102, .g = 120, .b = 30 },
        { .r = 30, .g = 120, .b = 120 },
        { .r = 60, .g = 94, .b = 168 },
        { .r = 164, .g = 84, .b = 178 },
        { .r = 89, .g = 27, .b = 56 },

        /* Base24 */
        { .r = 42, .g = 42, .b = 42 },
        { .r = 21, .g = 21, .b = 21 },
        { .r = 219, .g = 51, .b = 101 },
        { .r = 205, .g = 111, .b = 52 },
        { .r = 130, .g = 148, .b = 41 },
        { .r = 23, .g = 94, .b = 94 },
        { .r = 60, .g = 94, .b = 168 },
        { .r = 164, .g = 84, .b = 178 }
    },
    .system = 24
};

#endif  /* BASE24_piatto_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
