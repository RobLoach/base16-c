/**
 * Base24 Monokai Vivid 
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

#ifndef BASE24_monokai_vivid_H__
#define BASE24_monokai_vivid_H__

/**
 * The Base24 Monokai Vivid scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_monokai_vivid;

#endif  /* BASE24_monokai_vivid_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_monokai_vivid_IMPLEMENTATION_ONCE
#define BASE24_monokai_vivid_IMPLEMENTATION_ONCE

const base16_scheme base24_monokai_vivid = {
    .name = "Monokai Vivid",
    .base = {
        { .r = 18, .g = 18, .b = 18 },
        { .r = 50, .g = 50, .b = 50 },
        { .r = 66, .g = 66, .b = 66 },
        { .r = 82, .g = 82, .b = 82 },
        { .r = 192, .g = 192, .b = 192 },
        { .r = 223, .g = 223, .b = 223 },
        { .r = 241, .g = 241, .b = 241 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 250, .g = 40, .b = 52 },
        { .r = 254, .g = 197, .b = 10 },
        { .r = 254, .g = 242, .b = 10 },
        { .r = 151, .g = 225, .b = 35 },
        { .r = 1, .g = 182, .b = 237 },
        { .r = 4, .g = 66, .b = 254 },
        { .r = 248, .g = 0, .b = 248 },
        { .r = 125, .g = 20, .b = 26 },

        /* Base24 */
        { .r = 86, .g = 86, .b = 86 },
        { .r = 43, .g = 43, .b = 43 },
        { .r = 245, .g = 102, .b = 156 },
        { .r = 254, .g = 242, .b = 108 },
        { .r = 176, .g = 224, .b = 94 },
        { .r = 80, .g = 205, .b = 254 },
        { .r = 4, .g = 66, .b = 254 },
        { .r = 242, .g = 0, .b = 245 }
    },
    .system = 24
};

#endif  /* BASE24_monokai_vivid_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
