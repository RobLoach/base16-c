/**
 * Base16 Shapeshifter 
 *
 * @author Tyler Benziger (http://tybenz.com)
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

#ifndef BASE16_shapeshifter_H__
#define BASE16_shapeshifter_H__

/**
 * The Base16 Shapeshifter scheme.
 *
 * @author Tyler Benziger (http://tybenz.com)
 */
extern const base16_scheme base16_shapeshifter;

#endif  /* BASE16_shapeshifter_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_shapeshifter_IMPLEMENTATION_ONCE
#define BASE16_shapeshifter_IMPLEMENTATION_ONCE

const base16_scheme base16_shapeshifter = {
    .name = "Shapeshifter",
    .base = {
        { .r = 249, .g = 249, .b = 249 },
        { .r = 224, .g = 224, .b = 224 },
        { .r = 171, .g = 171, .b = 171 },
        { .r = 85, .g = 85, .b = 85 },
        { .r = 52, .g = 52, .b = 52 },
        { .r = 16, .g = 32, .b = 21 },
        { .r = 4, .g = 4, .b = 4 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 233, .g = 47, .b = 47 },
        { .r = 224, .g = 148, .b = 72 },
        { .r = 221, .g = 221, .b = 19 },
        { .r = 14, .g = 216, .b = 57 },
        { .r = 35, .g = 237, .b = 218 },
        { .r = 59, .g = 72, .b = 227 },
        { .r = 249, .g = 150, .b = 226 },
        { .r = 105, .g = 84, .b = 45 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 249, .g = 249, .b = 249 },
        { .r = 249, .g = 249, .b = 249 },
        { .r = 233, .g = 47, .b = 47 },
        { .r = 221, .g = 221, .b = 19 },
        { .r = 14, .g = 216, .b = 57 },
        { .r = 35, .g = 237, .b = 218 },
        { .r = 59, .g = 72, .b = 227 },
        { .r = 249, .g = 150, .b = 226 }
    },
    .system = 16
};

#endif  /* BASE16_shapeshifter_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
