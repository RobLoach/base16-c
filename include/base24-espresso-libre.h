/**
 * Base24 Espresso Libre 
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

#ifndef BASE24_espresso_libre_H__
#define BASE24_espresso_libre_H__

/**
 * The Base24 Espresso Libre scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const tinted_scheme base24_espresso_libre;

#endif  /* BASE24_espresso_libre_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_espresso_libre_IMPLEMENTATION_ONCE
#define BASE24_espresso_libre_IMPLEMENTATION_ONCE

const tinted_scheme base24_espresso_libre = {
    .name = "Espresso Libre",
    .base = {
        { .r = 42, .g = 33, .b = 28 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 84, .g = 87, .b = 83 },
        { .r = 115, .g = 119, .b = 114 },
        { .r = 147, .g = 151, .b = 145 },
        { .r = 179, .g = 183, .b = 176 },
        { .r = 211, .g = 215, .b = 207 },
        { .r = 237, .g = 237, .b = 236 },
        { .r = 204, .g = 0, .b = 0 },
        { .r = 239, .g = 228, .b = 58 },
        { .r = 67, .g = 168, .b = 237 },
        { .r = 26, .g = 146, .b = 28 },
        { .r = 5, .g = 152, .b = 154 },
        { .r = 0, .g = 102, .b = 255 },
        { .r = 197, .g = 101, .b = 107 },
        { .r = 102, .g = 0, .b = 0 },

        /* Base24 */
        { .r = 56, .g = 58, .b = 55 },
        { .r = 28, .g = 29, .b = 27 },
        { .r = 239, .g = 40, .b = 40 },
        { .r = 255, .g = 250, .b = 92 },
        { .r = 154, .g = 255, .b = 135 },
        { .r = 52, .g = 226, .b = 226 },
        { .r = 67, .g = 168, .b = 237 },
        { .r = 255, .g = 128, .b = 137 }
    },
    .system = 24
};

#endif  /* BASE24_espresso_libre_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_espresso_libre,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
