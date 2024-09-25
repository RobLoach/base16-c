/**
 * Base24 Espresso 
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
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_espresso_H__
#define BASE16_espresso_H__

/**
 * The Base24 Espresso scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_espresso;

#endif  /* BASE16_espresso_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_espresso_IMPLEMENTATION_ONCE
#define BASE24_espresso_IMPLEMENTATION_ONCE

const base16_scheme base24_espresso = {
    .name = "Espresso",
    .base = {
        { .r = 38, .g = 38, .b = 38 },
        { .r = 52, .g = 52, .b = 52 },
        { .r = 83, .g = 83, .b = 83 },
        { .r = 121, .g = 121, .b = 121 },
        { .r = 160, .g = 160, .b = 159 },
        { .r = 199, .g = 199, .b = 197 },
        { .r = 238, .g = 238, .b = 236 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 210, .g = 81, .b = 81 },
        { .r = 255, .g = 198, .b = 109 },
        { .r = 138, .g = 183, .b = 217 },
        { .r = 165, .g = 194, .b = 97 },
        { .r = 190, .g = 214, .b = 255 },
        { .r = 108, .g = 153, .b = 187 },
        { .r = 209, .g = 151, .b = 217 },
        { .r = 105, .g = 40, .b = 40 },

        /* Base24 */
        { .r = 55, .g = 55, .b = 55 },
        { .r = 27, .g = 27, .b = 27 },
        { .r = 240, .g = 12, .b = 12 },
        { .r = 225, .g = 227, .b = 139 },
        { .r = 194, .g = 224, .b = 117 },
        { .r = 220, .g = 243, .b = 255 },
        { .r = 138, .g = 183, .b = 217 },
        { .r = 239, .g = 181, .b = 247 }
    },
    .system = 24
};

#endif  /* BASE24_espresso_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
