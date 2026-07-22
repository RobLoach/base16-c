/**
 * Base24 Cobalt Neon 
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
    base16_color base[24]; /** An array of the colors for the scheme. */
    unsigned char system; /** Which system the scheme was built for, either 16 or 24. */
} base16_scheme;

#endif  /* BASE16_SCHEME_H__ */

#ifndef BASE24_cobalt_neon_H__
#define BASE24_cobalt_neon_H__

/**
 * The Base24 Cobalt Neon scheme.
 *
 * @author FredHappyface (https://github.com/fredHappyface)
 */
extern const base16_scheme base24_cobalt_neon;

#endif  /* BASE24_cobalt_neon_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_cobalt_neon_IMPLEMENTATION_ONCE
#define BASE24_cobalt_neon_IMPLEMENTATION_ONCE

const base16_scheme base24_cobalt_neon = {
    .name = "Cobalt Neon",
    .base = {
        { .r = 20, .g = 40, .b = 56 },
        { .r = 20, .g = 38, .b = 48 },
        { .r = 255, .g = 246, .b = 136 },
        { .r = 238, .g = 202, .b = 146 },
        { .r = 221, .g = 158, .b = 156 },
        { .r = 204, .g = 114, .b = 166 },
        { .r = 186, .g = 69, .b = 177 },
        { .r = 143, .g = 245, .b = 134 },
        { .r = 255, .g = 35, .b = 32 },
        { .r = 233, .g = 231, .b = 92 },
        { .r = 60, .g = 125, .b = 210 },
        { .r = 58, .g = 165, .b = 255 },
        { .r = 143, .g = 245, .b = 134 },
        { .r = 143, .g = 245, .b = 134 },
        { .r = 120, .g = 26, .b = 160 },
        { .r = 127, .g = 17, .b = 16 },

        /* Base24 */
        { .r = 170, .g = 164, .b = 90 },
        { .r = 85, .g = 82, .b = 45 },
        { .r = 212, .g = 49, .b = 46 },
        { .r = 233, .g = 240, .b = 109 },
        { .r = 143, .g = 245, .b = 134 },
        { .r = 108, .g = 188, .b = 103 },
        { .r = 60, .g = 125, .b = 210 },
        { .r = 130, .g = 48, .b = 167 }
    },
    .system = 24
};

#endif  /* BASE24_cobalt_neon_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
