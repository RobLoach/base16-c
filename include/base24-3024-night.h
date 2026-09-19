/**
 * Base24 3024 Night 
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

#ifndef BASE24_3024_night_H__
#define BASE24_3024_night_H__

/**
 * The Base24 3024 Night scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_3024_night;

#endif  /* BASE24_3024_night_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_3024_night_IMPLEMENTATION_ONCE
#define BASE24_3024_night_IMPLEMENTATION_ONCE

const tinted_scheme base24_3024_night = {
    .name = "3024 Night",
    .base = {
        { .r = 9, .g = 3, .b = 0 },
        { .r = 9, .g = 3, .b = 0 },
        { .r = 92, .g = 88, .b = 85 },
        { .r = 110, .g = 106, .b = 104 },
        { .r = 128, .g = 125, .b = 123 },
        { .r = 146, .g = 143, .b = 142 },
        { .r = 165, .g = 162, .b = 162 },
        { .r = 247, .g = 247, .b = 247 },
        { .r = 219, .g = 45, .b = 32 },
        { .r = 253, .g = 237, .b = 2 },
        { .r = 128, .g = 125, .b = 124 },
        { .r = 1, .g = 162, .b = 82 },
        { .r = 181, .g = 228, .b = 244 },
        { .r = 1, .g = 160, .b = 228 },
        { .r = 161, .g = 106, .b = 148 },
        { .r = 109, .g = 22, .b = 16 },

        /* Base24 */
        { .r = 61, .g = 58, .b = 56 },
        { .r = 30, .g = 29, .b = 28 },
        { .r = 232, .g = 187, .b = 208 },
        { .r = 74, .g = 69, .b = 67 },
        { .r = 58, .g = 52, .b = 50 },
        { .r = 205, .g = 171, .b = 83 },
        { .r = 128, .g = 125, .b = 124 },
        { .r = 214, .g = 213, .b = 212 }
    },
    .system = 24
};

#endif  /* BASE24_3024_night_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_3024_night,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
