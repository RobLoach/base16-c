/**
 * Base16 SAGA 
 *
 * @author https://github.com/SAGAtheme/SAGA
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

#ifndef BASE16_saga_H__
#define BASE16_saga_H__

/**
 * The Base16 SAGA scheme.
 *
 * @author https://github.com/SAGAtheme/SAGA
 */
extern const base16_scheme base16_saga;

#endif  /* BASE16_saga_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_saga_IMPLEMENTATION_ONCE
#define BASE16_saga_IMPLEMENTATION_ONCE

const base16_scheme base16_saga = {
    .name = "SAGA",
    .base = {
        { .r = 5, .g = 8, .b = 10 },
        { .r = 10, .g = 16, .b = 20 },
        { .r = 15, .g = 24, .b = 30 },
        { .r = 20, .g = 31, .b = 39 },
        { .r = 25, .g = 38, .b = 48 },
        { .r = 220, .g = 226, .b = 247 },
        { .r = 248, .g = 234, .b = 231 },
        { .r = 204, .g = 211, .b = 254 },
        { .r = 255, .g = 212, .b = 233 },
        { .r = 251, .g = 203, .b = 174 },
        { .r = 251, .g = 235, .b = 200 },
        { .r = 247, .g = 221, .b = 255 },
        { .r = 197, .g = 237, .b = 193 },
        { .r = 201, .g = 255, .b = 247 },
        { .r = 220, .g = 195, .b = 249 },
        { .r = 246, .g = 221, .b = 221 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 5, .g = 8, .b = 10 },
        { .r = 5, .g = 8, .b = 10 },
        { .r = 255, .g = 212, .b = 233 },
        { .r = 251, .g = 235, .b = 200 },
        { .r = 247, .g = 221, .b = 255 },
        { .r = 197, .g = 237, .b = 193 },
        { .r = 201, .g = 255, .b = 247 },
        { .r = 220, .g = 195, .b = 249 }
    },
    .system = 16
};

#endif  /* BASE16_saga_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
