/**
 * Base16 Atlas 
 *
 * @author Alex Lende (https://ajlende.com)
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

#ifndef BASE16_atlas_H__
#define BASE16_atlas_H__

/**
 * The Base16 Atlas scheme.
 *
 * @author Alex Lende (https://ajlende.com)
 */
extern const base16_scheme base16_atlas;

#endif  /* BASE16_atlas_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_atlas_IMPLEMENTATION_ONCE
#define BASE16_atlas_IMPLEMENTATION_ONCE

const base16_scheme base16_atlas = {
    .name = "Atlas",
    .base = {
        { .r = 0, .g = 38, .b = 53 },
        { .r = 0, .g = 56, .b = 77 },
        { .r = 81, .g = 127, .b = 141 },
        { .r = 108, .g = 139, .b = 145 },
        { .r = 134, .g = 150, .b = 150 },
        { .r = 161, .g = 161, .b = 154 },
        { .r = 230, .g = 230, .b = 220 },
        { .r = 250, .g = 250, .b = 248 },
        { .r = 255, .g = 90, .b = 103 },
        { .r = 240, .g = 142, .b = 72 },
        { .r = 255, .g = 204, .b = 27 },
        { .r = 127, .g = 192, .b = 110 },
        { .r = 93, .g = 215, .b = 185 },
        { .r = 20, .g = 116, .b = 126 },
        { .r = 154, .g = 112, .b = 164 },
        { .r = 196, .g = 48, .b = 96 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 38, .b = 53 },
        { .r = 0, .g = 38, .b = 53 },
        { .r = 255, .g = 90, .b = 103 },
        { .r = 255, .g = 204, .b = 27 },
        { .r = 127, .g = 192, .b = 110 },
        { .r = 93, .g = 215, .b = 185 },
        { .r = 20, .g = 116, .b = 126 },
        { .r = 154, .g = 112, .b = 164 }
    },
    .system = 16
};

#endif  /* BASE16_atlas_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
