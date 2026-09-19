/**
 * Base24 Japanesque 
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

#ifndef TINTED_C_COLOR_H__
#define TINTED_C_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct tinted_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} tinted_color;

#endif /* TINTED_C_COLOR_H__ */

#ifndef TINTED_C_SCHEME_H__
#define TINTED_C_SCHEME_H__

/**
 * A Tinted Base16 or Base24 Scheme.
 */
typedef struct tinted_scheme {
    const char *name; /** The name of the scheme. */
    tinted_color base[24]; /** An array of the colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} tinted_scheme;

#endif  /* TINTED_C_SCHEME_H__ */

#ifndef BASE24_japanesque_H__
#define BASE24_japanesque_H__

/**
 * The Base24 Japanesque scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_japanesque;

#endif  /* BASE24_japanesque_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_japanesque_IMPLEMENTATION_ONCE
#define BASE24_japanesque_IMPLEMENTATION_ONCE

const tinted_scheme base24_japanesque = {
    .name = "Japanesque",
    .base = {
        { .r = 29, .g = 29, .b = 29 },
        { .r = 52, .g = 56, .b = 53 },
        { .r = 88, .g = 90, .b = 88 },
        { .r = 128, .g = 130, .b = 127 },
        { .r = 168, .g = 170, .b = 167 },
        { .r = 208, .g = 210, .b = 206 },
        { .r = 249, .g = 250, .b = 246 },
        { .r = 177, .g = 181, .b = 174 },
        { .r = 206, .g = 62, .b = 96 },
        { .r = 232, .g = 179, .b = 42 },
        { .r = 19, .g = 88, .b = 121 },
        { .r = 123, .g = 183, .b = 91 },
        { .r = 56, .g = 154, .b = 172 },
        { .r = 76, .g = 153, .b = 211 },
        { .r = 165, .g = 127, .b = 196 },
        { .r = 103, .g = 31, .b = 48 },

        /* Base24 */
        { .r = 58, .g = 60, .b = 58 },
        { .r = 29, .g = 30, .b = 29 },
        { .r = 209, .g = 142, .b = 166 },
        { .r = 119, .g = 89, .b = 46 },
        { .r = 118, .g = 126, .b = 43 },
        { .r = 118, .g = 187, .b = 202 },
        { .r = 19, .g = 88, .b = 121 },
        { .r = 95, .g = 65, .b = 144 }
    },
    .system = 24
};

#endif  /* BASE24_japanesque_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_japanesque,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
