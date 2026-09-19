/**
 * Base24 Pastelón de Amarillos 
 *
 * @author Richard Martinez (https://sonofmartinus.com)
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

#ifndef BASE24_pastelon_de_amarillos_H__
#define BASE24_pastelon_de_amarillos_H__

/**
 * The Base24 Pastelón de Amarillos scheme.
 *
 * @author Richard Martinez (https://sonofmartinus.com)
 */
extern const tinted_scheme base24_pastelon_de_amarillos;

#endif  /* BASE24_pastelon_de_amarillos_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_pastelon_de_amarillos_IMPLEMENTATION_ONCE
#define BASE24_pastelon_de_amarillos_IMPLEMENTATION_ONCE

const tinted_scheme base24_pastelon_de_amarillos = {
    .name = "Pastelón de Amarillos",
    .base = {
        { .r = 255, .g = 244, .b = 214 },
        { .r = 242, .g = 208, .b = 131 },
        { .r = 214, .g = 155, .b = 69 },
        { .r = 128, .g = 97, .b = 107 },
        { .r = 104, .g = 70, .b = 83 },
        { .r = 67, .g = 44, .b = 59 },
        { .r = 47, .g = 28, .b = 46 },
        { .r = 28, .g = 15, .b = 32 },
        { .r = 166, .g = 61, .b = 74 },
        { .r = 155, .g = 91, .b = 25 },
        { .r = 132, .g = 102, .b = 0 },
        { .r = 50, .g = 112, .b = 86 },
        { .r = 39, .g = 110, .b = 108 },
        { .r = 54, .g = 95, .b = 145 },
        { .r = 120, .g = 74, .b = 120 },
        { .r = 112, .g = 64, .b = 53 },

        /* Base24 */
        { .r = 207, .g = 41, .b = 68 },
        { .r = 200, .g = 93, .b = 0 },
        { .r = 168, .g = 110, .b = 0 },
        { .r = 0, .g = 123, .b = 78 },
        { .r = 0, .g = 123, .b = 120 },
        { .r = 0, .g = 94, .b = 184 },
        { .r = 155, .g = 51, .b = 149 },
        { .r = 135, .g = 48, .b = 31 }
    },
    .system = 24
};

#endif  /* BASE24_pastelon_de_amarillos_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base24_pastelon_de_amarillos,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
