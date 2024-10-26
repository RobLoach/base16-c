/**
 * Base16 Hopscotch 
 *
 * @author Jan T. Sott
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
    tinted_color base[24]; /** An array of the base16 colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} tinted_scheme;

#endif  /* TINTED_C_SCHEME_H__ */

#ifndef BASE16_hopscotch_H__
#define BASE16_hopscotch_H__

/**
 * The Base16 Hopscotch scheme.
 *
 * @author Jan T. Sott
 */
extern const tinted_scheme base16_hopscotch;

#endif  /* BASE16_hopscotch_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(TINTED_HEADER_ONLY)
#ifndef BASE16_hopscotch_IMPLEMENTATION_ONCE
#define BASE16_hopscotch_IMPLEMENTATION_ONCE

const tinted_scheme base16_hopscotch = {
    .name = "Hopscotch",
    .base = {
        { .r = 50, .g = 41, .b = 49 },
        { .r = 67, .g = 59, .b = 66 },
        { .r = 92, .g = 84, .b = 91 },
        { .r = 121, .g = 115, .b = 121 },
        { .r = 152, .g = 148, .b = 152 },
        { .r = 185, .g = 181, .b = 184 },
        { .r = 213, .g = 211, .b = 213 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 221, .g = 70, .b = 76 },
        { .r = 253, .g = 139, .b = 25 },
        { .r = 253, .g = 204, .b = 89 },
        { .r = 143, .g = 193, .b = 62 },
        { .r = 20, .g = 155, .b = 147 },
        { .r = 18, .g = 144, .b = 191 },
        { .r = 200, .g = 94, .b = 124 },
        { .r = 179, .g = 53, .b = 8 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 50, .g = 41, .b = 49 },
        { .r = 50, .g = 41, .b = 49 },
        { .r = 221, .g = 70, .b = 76 },
        { .r = 253, .g = 204, .b = 89 },
        { .r = 143, .g = 193, .b = 62 },
        { .r = 20, .g = 155, .b = 147 },
        { .r = 18, .g = 144, .b = 191 },
        { .r = 200, .g = 94, .b = 124 }
    },
    .system = 16
};

#endif  /* BASE16_hopscotch_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
