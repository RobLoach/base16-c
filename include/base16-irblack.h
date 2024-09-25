/**
 * Base16 IR Black 
 *
 * @author Timothée Poisot (http://timotheepoisot.fr)
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

#ifndef BASE16_COLOR_H__
#define BASE16_COLOR_H__

/**
 * A single color used for Base16 or Base24.
 */
typedef struct base16_color {
    unsigned char r; /** Red channel */
    unsigned char g; /** Green channel */
    unsigned char b; /** Blue channel */
} base16_color;

#endif /* BASE16_COLOR_H__ */

#ifndef BASE16_SCHEME_H__
#define BASE16_SCHEME_H__

/**
 * A Base16 Scheme.
 */
typedef struct base16_scheme {
    const char *name; /** The name of the scheme. */
    base16_color base[24]; /** An array of the base16 colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE16_irblack_H__
#define BASE16_irblack_H__

/**
 * The Base16 IR Black scheme.
 *
 * @author Timothée Poisot (http://timotheepoisot.fr)
 */
extern const base16_scheme base16_irblack;

#endif  /* BASE16_irblack_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_irblack_IMPLEMENTATION_ONCE
#define BASE16_irblack_IMPLEMENTATION_ONCE

const base16_scheme base16_irblack = {
    .name = "IR Black",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 36, .g = 36, .b = 34 },
        { .r = 72, .g = 72, .b = 68 },
        { .r = 108, .g = 108, .b = 102 },
        { .r = 145, .g = 143, .b = 136 },
        { .r = 181, .g = 179, .b = 170 },
        { .r = 217, .g = 215, .b = 204 },
        { .r = 253, .g = 251, .b = 238 },
        { .r = 255, .g = 108, .b = 96 },
        { .r = 233, .g = 192, .b = 98 },
        { .r = 255, .g = 255, .b = 182 },
        { .r = 168, .g = 255, .b = 96 },
        { .r = 198, .g = 197, .b = 254 },
        { .r = 150, .g = 203, .b = 254 },
        { .r = 255, .g = 115, .b = 253 },
        { .r = 177, .g = 138, .b = 61 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 255, .g = 108, .b = 96 },
        { .r = 255, .g = 255, .b = 182 },
        { .r = 168, .g = 255, .b = 96 },
        { .r = 198, .g = 197, .b = 254 },
        { .r = 150, .g = 203, .b = 254 },
        { .r = 255, .g = 115, .b = 253 }
    },
    .system = 16
};

#endif  /* BASE16_irblack_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
