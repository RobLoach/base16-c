/**
 * Base24 Pro Light 
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

#ifndef BASE24_pro_light_H__
#define BASE24_pro_light_H__

/**
 * The Base24 Pro Light scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_pro_light;

#endif  /* BASE24_pro_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_pro_light_IMPLEMENTATION_ONCE
#define BASE24_pro_light_IMPLEMENTATION_ONCE

const base16_scheme base24_pro_light = {
    .name = "Pro Light",
    .base = {
        { .r = 254, .g = 255, .b = 255 },
        { .r = 241, .g = 241, .b = 241 },
        { .r = 220, .g = 220, .b = 220 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 117, .g = 117, .b = 117 },
        { .r = 79, .g = 79, .b = 79 },
        { .r = 50, .g = 50, .b = 50 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 228, .g = 73, .b = 43 },
        { .r = 197, .g = 142, .b = 64 },
        { .r = 197, .g = 195, .b = 64 },
        { .r = 80, .g = 208, .b = 72 },
        { .r = 78, .g = 209, .b = 221 },
        { .r = 58, .g = 117, .b = 255 },
        { .r = 236, .g = 101, .b = 231 },
        { .r = 114, .g = 36, .b = 21 },

        /* Base24 */
        { .r = 106, .g = 106, .b = 106 },
        { .r = 53, .g = 53, .b = 53 },
        { .r = 255, .g = 102, .b = 64 },
        { .r = 242, .g = 240, .b = 85 },
        { .r = 97, .g = 238, .b = 86 },
        { .r = 96, .g = 246, .b = 248 },
        { .r = 0, .g = 129, .b = 255 },
        { .r = 255, .g = 125, .b = 254 }
    },
    .system = 24
};

#endif  /* BASE24_pro_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
