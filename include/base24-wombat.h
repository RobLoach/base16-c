/**
 * Base24 Wombat 
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

#ifndef BASE24_wombat_H__
#define BASE24_wombat_H__

/**
 * The Base24 Wombat scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_wombat;

#endif  /* BASE24_wombat_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_wombat_IMPLEMENTATION_ONCE
#define BASE24_wombat_IMPLEMENTATION_ONCE

const base16_scheme base24_wombat = {
    .name = "Wombat",
    .base = {
        { .r = 23, .g = 23, .b = 23 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 49, .g = 49, .b = 49 },
        { .r = 92, .g = 91, .b = 88 },
        { .r = 135, .g = 133, .b = 127 },
        { .r = 178, .g = 175, .b = 166 },
        { .r = 222, .g = 217, .b = 206 },
        { .r = 254, .g = 255, .b = 254 },
        { .r = 255, .g = 96, .b = 90 },
        { .r = 234, .g = 216, .b = 156 },
        { .r = 165, .g = 199, .b = 255 },
        { .r = 177, .g = 232, .b = 105 },
        { .r = 130, .g = 255, .b = 246 },
        { .r = 93, .g = 169, .b = 246 },
        { .r = 232, .g = 106, .b = 255 },
        { .r = 127, .g = 48, .b = 45 },

        /* Base24 */
        { .r = 32, .g = 32, .b = 32 },
        { .r = 16, .g = 16, .b = 16 },
        { .r = 245, .g = 139, .b = 127 },
        { .r = 238, .g = 229, .b = 178 },
        { .r = 220, .g = 248, .b = 143 },
        { .r = 182, .g = 255, .b = 249 },
        { .r = 165, .g = 199, .b = 255 },
        { .r = 221, .g = 170, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_wombat_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
