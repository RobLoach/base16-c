/**
 * Base24 Nocturnal Winter 
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

#ifndef BASE24_nocturnal_winter_H__
#define BASE24_nocturnal_winter_H__

/**
 * The Base24 Nocturnal Winter scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_nocturnal_winter;

#endif  /* BASE24_nocturnal_winter_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_nocturnal_winter_IMPLEMENTATION_ONCE
#define BASE24_nocturnal_winter_IMPLEMENTATION_ONCE

const base16_scheme base24_nocturnal_winter = {
    .name = "Nocturnal Winter",
    .base = {
        { .r = 13, .g = 13, .b = 23 },
        { .r = 76, .g = 76, .b = 76 },
        { .r = 127, .g = 127, .b = 127 },
        { .r = 158, .g = 158, .b = 158 },
        { .r = 189, .g = 189, .b = 189 },
        { .r = 220, .g = 220, .b = 220 },
        { .r = 251, .g = 251, .b = 251 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 241, .g = 45, .b = 82 },
        { .r = 245, .g = 240, .b = 121 },
        { .r = 96, .g = 149, .b = 254 },
        { .r = 8, .g = 205, .b = 125 },
        { .r = 9, .g = 200, .b = 122 },
        { .r = 48, .g = 129, .b = 223 },
        { .r = 254, .g = 42, .b = 108 },
        { .r = 120, .g = 22, .b = 41 },

        /* Base24 */
        { .r = 84, .g = 84, .b = 84 },
        { .r = 42, .g = 42, .b = 42 },
        { .r = 241, .g = 108, .b = 133 },
        { .r = 254, .g = 251, .b = 103 },
        { .r = 10, .g = 231, .b = 141 },
        { .r = 10, .g = 231, .b = 141 },
        { .r = 96, .g = 149, .b = 254 },
        { .r = 255, .g = 120, .b = 162 }
    },
    .system = 24
};

#endif  /* BASE24_nocturnal_winter_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
