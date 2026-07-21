/**
 * Base24 Bluloco Light 
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

#ifndef BASE24_bluloco_light_H__
#define BASE24_bluloco_light_H__

/**
 * The Base24 Bluloco Light scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_bluloco_light;

#endif  /* BASE24_bluloco_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_bluloco_light_IMPLEMENTATION_ONCE
#define BASE24_bluloco_light_IMPLEMENTATION_ONCE

const base16_scheme base24_bluloco_light = {
    .name = "Bluloco Light",
    .base = {
        { .r = 247, .g = 247, .b = 247 },
        { .r = 203, .g = 204, .b = 212 },
        { .r = 221, .g = 222, .b = 232 },
        { .r = 166, .g = 167, .b = 174 },
        { .r = 111, .g = 111, .b = 116 },
        { .r = 56, .g = 56, .b = 58 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 28, .g = 29, .b = 33 },
        { .r = 200, .g = 13, .b = 65 },
        { .r = 212, .g = 77, .b = 22 },
        { .r = 16, .g = 133, .b = 217 },
        { .r = 32, .g = 136, .b = 57 },
        { .r = 30, .g = 77, .b = 122 },
        { .r = 29, .g = 68, .b = 221 },
        { .r = 109, .g = 27, .b = 237 },
        { .r = 100, .g = 6, .b = 32 },

        /* Base24 */
        { .r = 147, .g = 148, .b = 154 },
        { .r = 73, .g = 74, .b = 77 },
        { .r = 251, .g = 73, .b = 109 },
        { .r = 183, .g = 147, .b = 38 },
        { .r = 52, .g = 178, .b = 83 },
        { .r = 90, .g = 127, .b = 172 },
        { .r = 16, .g = 133, .b = 217 },
        { .r = 192, .g = 12, .b = 178 }
    },
    .system = 24
};

#endif  /* BASE24_bluloco_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
