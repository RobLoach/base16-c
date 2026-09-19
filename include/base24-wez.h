/**
 * Base24 Wez 
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

#ifndef BASE24_wez_H__
#define BASE24_wez_H__

/**
 * The Base24 Wez scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_wez;

#endif  /* BASE24_wez_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_wez_IMPLEMENTATION_ONCE
#define BASE24_wez_IMPLEMENTATION_ONCE

const tinted_scheme base24_wez = {
    .name = "Wez",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 114, .g = 114, .b = 114 },
        { .r = 144, .g = 144, .b = 144 },
        { .r = 174, .g = 174, .b = 174 },
        { .r = 204, .g = 204, .b = 204 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 204, .g = 85, .b = 85 },
        { .r = 205, .g = 205, .b = 85 },
        { .r = 85, .g = 85, .b = 255 },
        { .r = 85, .g = 204, .b = 85 },
        { .r = 122, .g = 202, .b = 202 },
        { .r = 84, .g = 85, .b = 203 },
        { .r = 204, .g = 85, .b = 204 },
        { .r = 102, .g = 42, .b = 42 },

        /* Base24 */
        { .r = 56, .g = 56, .b = 56 },
        { .r = 28, .g = 28, .b = 28 },
        { .r = 255, .g = 85, .b = 85 },
        { .r = 255, .g = 255, .b = 85 },
        { .r = 85, .g = 255, .b = 85 },
        { .r = 85, .g = 255, .b = 255 },
        { .r = 85, .g = 85, .b = 255 },
        { .r = 255, .g = 85, .b = 255 }
    },
    .system = 24
};

#endif  /* BASE24_wez_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_wez,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
