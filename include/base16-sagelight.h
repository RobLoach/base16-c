/**
 * Base16 Sagelight 
 *
 * @author Carter Veldhuizen
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

#ifndef BASE16_sagelight_H__
#define BASE16_sagelight_H__

/**
 * The Base16 Sagelight scheme.
 *
 * @author Carter Veldhuizen
 */
extern const base16_scheme base16_sagelight;

#endif  /* BASE16_sagelight_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_sagelight_IMPLEMENTATION_ONCE
#define BASE16_sagelight_IMPLEMENTATION_ONCE

const base16_scheme base16_sagelight = {
    .name = "Sagelight",
    .base = {
        { .r = 248, .g = 248, .b = 248 },
        { .r = 232, .g = 232, .b = 232 },
        { .r = 216, .g = 216, .b = 216 },
        { .r = 184, .g = 184, .b = 184 },
        { .r = 88, .g = 88, .b = 88 },
        { .r = 56, .g = 56, .b = 56 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 24, .g = 24, .b = 24 },
        { .r = 250, .g = 132, .b = 128 },
        { .r = 255, .g = 170, .b = 97 },
        { .r = 255, .g = 220, .b = 97 },
        { .r = 160, .g = 210, .b = 200 },
        { .r = 162, .g = 214, .b = 245 },
        { .r = 160, .g = 167, .b = 210 },
        { .r = 200, .g = 160, .b = 210 },
        { .r = 210, .g = 178, .b = 160 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 248, .g = 248, .b = 248 },
        { .r = 248, .g = 248, .b = 248 },
        { .r = 250, .g = 132, .b = 128 },
        { .r = 255, .g = 220, .b = 97 },
        { .r = 160, .g = 210, .b = 200 },
        { .r = 162, .g = 214, .b = 245 },
        { .r = 160, .g = 167, .b = 210 },
        { .r = 200, .g = 160, .b = 210 }
    },
    .system = 16
};

#endif  /* BASE16_sagelight_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
