/**
 * Base16 Hardhacker 
 *
 * @author fe2-Nyxar, based on the https://github.com/hardhackerlabs
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

#ifndef BASE16_hardhacker_H__
#define BASE16_hardhacker_H__

/**
 * The Base16 Hardhacker scheme.
 *
 * @author fe2-Nyxar, based on the https://github.com/hardhackerlabs
 */
extern const tinted_scheme base16_hardhacker;

#endif  /* BASE16_hardhacker_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_hardhacker_IMPLEMENTATION_ONCE
#define BASE16_hardhacker_IMPLEMENTATION_ONCE

const tinted_scheme base16_hardhacker = {
    .name = "Hardhacker",
    .base = {
        { .r = 33, .g = 30, .b = 42 },
        { .r = 44, .g = 39, .b = 55 },
        { .r = 63, .g = 57, .b = 81 },
        { .r = 110, .g = 103, .b = 128 },
        { .r = 138, .g = 130, .b = 158 },
        { .r = 228, .g = 222, .b = 233 },
        { .r = 242, .g = 232, .b = 240 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 233, .g = 101, .b = 165 },
        { .r = 244, .g = 184, .b = 112 },
        { .r = 235, .g = 222, .b = 118 },
        { .r = 177, .g = 242, .b = 167 },
        { .r = 179, .g = 244, .b = 243 },
        { .r = 149, .g = 166, .b = 244 },
        { .r = 255, .g = 121, .b = 198 },
        { .r = 189, .g = 147, .b = 249 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 33, .g = 30, .b = 42 },
        { .r = 33, .g = 30, .b = 42 },
        { .r = 233, .g = 101, .b = 165 },
        { .r = 235, .g = 222, .b = 118 },
        { .r = 177, .g = 242, .b = 167 },
        { .r = 179, .g = 244, .b = 243 },
        { .r = 149, .g = 166, .b = 244 },
        { .r = 255, .g = 121, .b = 198 }
    },
    .system = 16
};

#endif  /* BASE16_hardhacker_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */

#if defined(TINTED_SCHEMES_ARRAY_ENTRY)
/* Entry emitted when tinted.h re-includes this header to build tinted_schemes[]. */
&base16_hardhacker,
#endif  /* TINTED_SCHEMES_ARRAY_ENTRY */
