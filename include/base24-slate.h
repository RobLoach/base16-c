/**
 * Base24 Slate 
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

#ifndef BASE24_slate_H__
#define BASE24_slate_H__

/**
 * The Base24 Slate scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_slate;

#endif  /* BASE24_slate_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_slate_IMPLEMENTATION_ONCE
#define BASE24_slate_IMPLEMENTATION_ONCE

const tinted_scheme base24_slate = {
    .name = "Slate",
    .base = {
        { .r = 33, .g = 33, .b = 33 },
        { .r = 33, .g = 33, .b = 33 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 192, .g = 241, .b = 248 },
        { .r = 129, .g = 226, .b = 240 },
        { .r = 66, .g = 211, .b = 232 },
        { .r = 2, .g = 196, .b = 224 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 225, .g = 167, .b = 191 },
        { .r = 196, .g = 201, .b = 191 },
        { .r = 121, .g = 175, .b = 210 },
        { .r = 128, .g = 215, .b = 120 },
        { .r = 20, .g = 171, .b = 156 },
        { .r = 37, .g = 74, .b = 73 },
        { .r = 163, .g = 128, .b = 211 },
        { .r = 112, .g = 83, .b = 95 },

        /* Base24 */
        { .r = 170, .g = 170, .b = 170 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 255, .g = 204, .b = 216 },
        { .r = 208, .g = 203, .b = 201 },
        { .r = 189, .g = 255, .b = 168 },
        { .r = 139, .g = 222, .b = 224 },
        { .r = 121, .g = 175, .b = 210 },
        { .r = 196, .g = 167, .b = 216 }
    },
    .system = 24
};

#endif  /* BASE24_slate_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_slate,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
