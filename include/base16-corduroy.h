/**
 * Base16 Corduroy Embrace vintage warmth, soft textures, and a touch of retro flair.
 *
 * @author taysatte (https://github.com/taysatte)
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

#ifndef BASE16_corduroy_H__
#define BASE16_corduroy_H__

/**
 * The Base16 Corduroy scheme.
 *
 * @author taysatte (https://github.com/taysatte)
 */
extern const tinted_scheme base16_corduroy;

#endif  /* BASE16_corduroy_H__ */

#if (defined(TINTED_IMPLEMENTATION) || defined(BASE16_IMPLEMENTATION)) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_corduroy_IMPLEMENTATION_ONCE
#define BASE16_corduroy_IMPLEMENTATION_ONCE

const tinted_scheme base16_corduroy = {
    .name = "Corduroy",
    .base = {
        { .r = 29, .g = 25, .b = 32 },
        { .r = 38, .g = 30, .b = 42 },
        { .r = 46, .g = 37, .b = 51 },
        { .r = 111, .g = 99, .b = 115 },
        { .r = 136, .g = 123, .b = 140 },
        { .r = 205, .g = 200, .b = 208 },
        { .r = 205, .g = 200, .b = 208 },
        { .r = 80, .g = 71, .b = 87 },
        { .r = 224, .g = 98, .b = 120 },
        { .r = 233, .g = 157, .b = 144 },
        { .r = 237, .g = 179, .b = 146 },
        { .r = 75, .g = 134, .b = 134 },
        { .r = 233, .g = 157, .b = 144 },
        { .r = 210, .g = 127, .b = 145 },
        { .r = 194, .g = 133, .b = 178 },
        { .r = 136, .g = 123, .b = 140 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 29, .g = 25, .b = 32 },
        { .r = 29, .g = 25, .b = 32 },
        { .r = 224, .g = 98, .b = 120 },
        { .r = 237, .g = 179, .b = 146 },
        { .r = 75, .g = 134, .b = 134 },
        { .r = 233, .g = 157, .b = 144 },
        { .r = 210, .g = 127, .b = 145 },
        { .r = 194, .g = 133, .b = 178 }
    },
    .system = 16
};

#endif  /* BASE16_corduroy_IMPLEMENTATION_ONCE */
#endif  /* TINTED_IMPLEMENTATION */
