/**
 * Base24 Pastelón de Amarillos Dark 
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

#ifndef BASE24_pastelon_de_amarillos_dark_H__
#define BASE24_pastelon_de_amarillos_dark_H__

/**
 * The Base24 Pastelón de Amarillos Dark scheme.
 *
 * @author Richard Martinez (https://sonofmartinus.com)
 */
extern const tinted_scheme base24_pastelon_de_amarillos_dark;

#endif  /* BASE24_pastelon_de_amarillos_dark_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE24_pastelon_de_amarillos_dark_IMPLEMENTATION_ONCE
#define BASE24_pastelon_de_amarillos_dark_IMPLEMENTATION_ONCE

const tinted_scheme base24_pastelon_de_amarillos_dark = {
    .name = "Pastelón de Amarillos Dark",
    .base = {
        { .r = 24, .g = 13, .b = 24 },
        { .r = 42, .g = 20, .b = 36 },
        { .r = 67, .g = 32, .b = 49 },
        { .r = 160, .g = 116, .b = 124 },
        { .r = 195, .g = 154, .b = 137 },
        { .r = 255, .g = 224, .b = 163 },
        { .r = 255, .g = 235, .b = 197 },
        { .r = 255, .g = 247, .b = 230 },
        { .r = 217, .g = 83, .b = 97 },
        { .r = 217, .g = 131, .b = 40 },
        { .r = 216, .g = 169, .b = 58 },
        { .r = 54, .g = 170, .b = 114 },
        { .r = 49, .g = 169, .b = 158 },
        { .r = 76, .g = 132, .b = 189 },
        { .r = 183, .g = 101, .b = 176 },
        { .r = 189, .g = 98, .b = 66 },

        /* Base24 */
        { .r = 255, .g = 110, .b = 121 },
        { .r = 255, .g = 159, .b = 55 },
        { .r = 255, .g = 208, .b = 82 },
        { .r = 67, .g = 217, .b = 141 },
        { .r = 62, .g = 210, .b = 195 },
        { .r = 100, .g = 171, .b = 244 },
        { .r = 229, .g = 129, .b = 220 },
        { .r = 237, .g = 125, .b = 81 }
    },
    .system = 24
};

#endif  /* BASE24_pastelon_de_amarillos_dark_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */
