/**
 * Base16 Arroz con Dulce Coconut cream, rice, cinnamon, clove, toasted sugar, and raisin tones inspired by Puerto Rican arroz con dulce.
 *
 * @author Richard Martinez
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

#ifndef BASE16_arroz_con_dulce_H__
#define BASE16_arroz_con_dulce_H__

/**
 * The Base16 Arroz con Dulce scheme.
 *
 * @author Richard Martinez
 */
extern const tinted_scheme base16_arroz_con_dulce;

#endif  /* BASE16_arroz_con_dulce_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_arroz_con_dulce_IMPLEMENTATION_ONCE
#define BASE16_arroz_con_dulce_IMPLEMENTATION_ONCE

const tinted_scheme base16_arroz_con_dulce = {
    .name = "Arroz con Dulce",
    .base = {
        { .r = 255, .g = 248, .b = 231 },
        { .r = 247, .g = 235, .b = 211 },
        { .r = 234, .g = 214, .b = 184 },
        { .r = 200, .g = 167, .b = 122 },
        { .r = 118, .g = 91, .b = 69 },
        { .r = 74, .g = 44, .b = 32 },
        { .r = 50, .g = 28, .b = 20 },
        { .r = 33, .g = 17, .b = 11 },
        { .r = 161, .g = 29, .b = 72 },
        { .r = 163, .g = 71, .b = 10 },
        { .r = 133, .g = 85, .b = 0 },
        { .r = 162, .g = 56, .b = 12 },
        { .r = 152, .g = 38, .b = 62 },
        { .r = 89, .g = 64, .b = 160 },
        { .r = 140, .g = 31, .b = 104 },
        { .r = 101, .g = 50, .b = 33 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 255, .g = 248, .b = 231 },
        { .r = 255, .g = 248, .b = 231 },
        { .r = 161, .g = 29, .b = 72 },
        { .r = 133, .g = 85, .b = 0 },
        { .r = 162, .g = 56, .b = 12 },
        { .r = 152, .g = 38, .b = 62 },
        { .r = 89, .g = 64, .b = 160 },
        { .r = 140, .g = 31, .b = 104 }
    },
    .system = 16
};

#endif  /* BASE16_arroz_con_dulce_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */
