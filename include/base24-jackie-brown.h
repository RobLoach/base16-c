/**
 * Base24 Jackie Brown 
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

#ifndef BASE24_jackie_brown_H__
#define BASE24_jackie_brown_H__

/**
 * The Base24 Jackie Brown scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_jackie_brown;

#endif  /* BASE24_jackie_brown_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_jackie_brown_IMPLEMENTATION_ONCE
#define BASE24_jackie_brown_IMPLEMENTATION_ONCE

const tinted_scheme base24_jackie_brown = {
    .name = "Jackie Brown",
    .base = {
        { .r = 44, .g = 28, .b = 21 },
        { .r = 44, .g = 29, .b = 22 },
        { .r = 102, .g = 102, .b = 102 },
        { .r = 124, .g = 124, .b = 124 },
        { .r = 146, .g = 146, .b = 146 },
        { .r = 168, .g = 168, .b = 168 },
        { .r = 191, .g = 191, .b = 191 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 239, .g = 87, .b = 52 },
        { .r = 189, .g = 190, .b = 0 },
        { .r = 0, .g = 0, .b = 255 },
        { .r = 43, .g = 175, .b = 43 },
        { .r = 0, .g = 172, .b = 238 },
        { .r = 36, .g = 109, .b = 178 },
        { .r = 207, .g = 94, .b = 192 },
        { .r = 119, .g = 43, .b = 26 },

        /* Base24 */
        { .r = 68, .g = 68, .b = 68 },
        { .r = 34, .g = 34, .b = 34 },
        { .r = 229, .g = 0, .b = 0 },
        { .r = 229, .g = 229, .b = 0 },
        { .r = 134, .g = 168, .b = 62 },
        { .r = 0, .g = 229, .b = 229 },
        { .r = 0, .g = 0, .b = 255 },
        { .r = 229, .g = 0, .b = 229 }
    },
    .system = 24
};

#endif  /* BASE24_jackie_brown_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_jackie_brown,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
