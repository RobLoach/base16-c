/**
 * Base24 Smyck 
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

#ifndef BASE24_smyck_H__
#define BASE24_smyck_H__

/**
 * The Base24 Smyck scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_smyck;

#endif  /* BASE24_smyck_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_smyck_IMPLEMENTATION_ONCE
#define BASE24_smyck_IMPLEMENTATION_ONCE

const tinted_scheme base24_smyck = {
    .name = "Smyck",
    .base = {
        { .r = 27, .g = 27, .b = 27 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 122, .g = 122, .b = 122 },
        { .r = 131, .g = 131, .b = 131 },
        { .r = 141, .g = 141, .b = 141 },
        { .r = 150, .g = 150, .b = 150 },
        { .r = 160, .g = 160, .b = 160 },
        { .r = 247, .g = 247, .b = 247 },
        { .r = 183, .g = 65, .b = 49 },
        { .r = 196, .g = 164, .b = 0 },
        { .r = 141, .g = 207, .b = 240 },
        { .r = 125, .g = 169, .b = 0 },
        { .r = 32, .g = 115, .b = 131 },
        { .r = 98, .g = 163, .b = 196 },
        { .r = 185, .g = 138, .b = 204 },
        { .r = 91, .g = 32, .b = 24 },

        /* Base24 */
        { .r = 81, .g = 81, .b = 81 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 214, .g = 131, .b = 123 },
        { .r = 254, .g = 225, .b = 77 },
        { .r = 196, .g = 240, .b = 54 },
        { .r = 105, .g = 217, .b = 207 },
        { .r = 141, .g = 207, .b = 240 },
        { .r = 247, .g = 153, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_smyck_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_smyck,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
