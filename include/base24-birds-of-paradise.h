/**
 * Base24 Birds Of Paradise 
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

#ifndef BASE24_birds_of_paradise_H__
#define BASE24_birds_of_paradise_H__

/**
 * The Base24 Birds Of Paradise scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_birds_of_paradise;

#endif  /* BASE24_birds_of_paradise_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_birds_of_paradise_IMPLEMENTATION_ONCE
#define BASE24_birds_of_paradise_IMPLEMENTATION_ONCE

const tinted_scheme base24_birds_of_paradise = {
    .name = "Birds Of Paradise",
    .base = {
        { .r = 42, .g = 30, .b = 29 },
        { .r = 87, .g = 61, .b = 37 },
        { .r = 154, .g = 107, .b = 73 },
        { .r = 171, .g = 134, .b = 100 },
        { .r = 188, .g = 162, .b = 128 },
        { .r = 205, .g = 190, .b = 155 },
        { .r = 223, .g = 218, .b = 183 },
        { .r = 255, .g = 249, .b = 212 },
        { .r = 190, .g = 45, .b = 38 },
        { .r = 233, .g = 156, .b = 41 },
        { .r = 184, .g = 211, .b = 237 },
        { .r = 107, .g = 160, .b = 138 },
        { .r = 116, .g = 165, .b = 172 },
        { .r = 90, .g = 134, .b = 172 },
        { .r = 171, .g = 128, .b = 166 },
        { .r = 95, .g = 22, .b = 19 },

        /* Base24 */
        { .r = 102, .g = 71, .b = 48 },
        { .r = 51, .g = 35, .b = 24 },
        { .r = 232, .g = 69, .b = 38 },
        { .r = 208, .g = 208, .b = 79 },
        { .r = 148, .g = 215, .b = 186 },
        { .r = 146, .g = 206, .b = 214 },
        { .r = 184, .g = 211, .b = 237 },
        { .r = 208, .g = 157, .b = 202 }
    },
    .system = 24
};

#endif  /* BASE24_birds_of_paradise_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_birds_of_paradise,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
