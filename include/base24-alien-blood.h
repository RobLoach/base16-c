/**
 * Base24 Alien Blood 
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

#ifndef BASE24_alien_blood_H__
#define BASE24_alien_blood_H__

/**
 * The Base24 Alien Blood scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_alien_blood;

#endif  /* BASE24_alien_blood_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_alien_blood_IMPLEMENTATION_ONCE
#define BASE24_alien_blood_IMPLEMENTATION_ONCE

const base16_scheme base24_alien_blood = {
    .name = "Alien Blood",
    .base = {
        { .r = 15, .g = 22, .b = 15 },
        { .r = 17, .g = 38, .b = 21 },
        { .r = 60, .g = 71, .b = 17 },
        { .r = 70, .g = 84, .b = 42 },
        { .r = 80, .g = 98, .b = 67 },
        { .r = 90, .g = 111, .b = 92 },
        { .r = 100, .g = 125, .b = 117 },
        { .r = 115, .g = 249, .b = 144 },
        { .r = 127, .g = 43, .b = 38 },
        { .r = 112, .g = 127, .b = 35 },
        { .r = 0, .g = 169, .b = 223 },
        { .r = 47, .g = 126, .b = 37 },
        { .r = 49, .g = 127, .b = 118 },
        { .r = 47, .g = 105, .b = 127 },
        { .r = 71, .g = 87, .b = 126 },
        { .r = 63, .g = 21, .b = 19 },

        /* Base24 */
        { .r = 40, .g = 47, .b = 11 },
        { .r = 20, .g = 23, .b = 5 },
        { .r = 223, .g = 128, .b = 8 },
        { .r = 189, .g = 224, .b = 0 },
        { .r = 24, .g = 224, .b = 0 },
        { .r = 0, .g = 223, .b = 195 },
        { .r = 0, .g = 169, .b = 223 },
        { .r = 0, .g = 88, .b = 223 }
    },
    .system = 24
};

#endif  /* BASE24_alien_blood_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
