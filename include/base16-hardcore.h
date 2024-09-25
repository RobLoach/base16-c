/**
 * Base16 Hardcore 
 *
 * @author Chris Caller
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

#ifndef BASE16_hardcore_H__
#define BASE16_hardcore_H__

/**
 * The Base16 Hardcore scheme.
 *
 * @author Chris Caller
 */
extern const base16_scheme base16_hardcore;

#endif  /* BASE16_hardcore_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_hardcore_IMPLEMENTATION_ONCE
#define BASE16_hardcore_IMPLEMENTATION_ONCE

const base16_scheme base16_hardcore = {
    .name = "Hardcore",
    .base = {
        { .r = 33, .g = 33, .b = 33 },
        { .r = 48, .g = 48, .b = 48 },
        { .r = 53, .g = 53, .b = 53 },
        { .r = 74, .g = 74, .b = 74 },
        { .r = 112, .g = 112, .b = 112 },
        { .r = 205, .g = 205, .b = 205 },
        { .r = 229, .g = 229, .b = 229 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 249, .g = 38, .b = 114 },
        { .r = 253, .g = 151, .b = 31 },
        { .r = 230, .g = 219, .b = 116 },
        { .r = 166, .g = 226, .b = 46 },
        { .r = 112, .g = 131, .b = 135 },
        { .r = 102, .g = 217, .b = 239 },
        { .r = 158, .g = 111, .b = 254 },
        { .r = 232, .g = 184, .b = 130 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 33, .g = 33, .b = 33 },
        { .r = 33, .g = 33, .b = 33 },
        { .r = 249, .g = 38, .b = 114 },
        { .r = 230, .g = 219, .b = 116 },
        { .r = 166, .g = 226, .b = 46 },
        { .r = 112, .g = 131, .b = 135 },
        { .r = 102, .g = 217, .b = 239 },
        { .r = 158, .g = 111, .b = 254 }
    },
    .system = 16
};

#endif  /* BASE16_hardcore_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
