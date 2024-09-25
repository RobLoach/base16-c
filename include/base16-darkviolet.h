/**
 * Base16 Dark Violet 
 *
 * @author ruler501 (https://github.com/ruler501/base16-darkviolet)
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

#ifndef BASE16_darkviolet_H__
#define BASE16_darkviolet_H__

/**
 * The Base16 Dark Violet scheme.
 *
 * @author ruler501 (https://github.com/ruler501/base16-darkviolet)
 */
extern const base16_scheme base16_darkviolet;

#endif  /* BASE16_darkviolet_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_darkviolet_IMPLEMENTATION_ONCE
#define BASE16_darkviolet_IMPLEMENTATION_ONCE

const base16_scheme base16_darkviolet = {
    .name = "Dark Violet",
    .base = {
        { .r = 0, .g = 0, .b = 0 },
        { .r = 35, .g = 26, .b = 64 },
        { .r = 67, .g = 45, .b = 89 },
        { .r = 89, .g = 51, .b = 128 },
        { .r = 0, .g = 255, .b = 0 },
        { .r = 176, .g = 138, .b = 230 },
        { .r = 144, .g = 69, .b = 230 },
        { .r = 163, .g = 102, .b = 255 },
        { .r = 168, .g = 46, .b = 230 },
        { .r = 187, .g = 102, .b = 204 },
        { .r = 242, .g = 157, .b = 242 },
        { .r = 69, .g = 149, .b = 230 },
        { .r = 64, .g = 223, .b = 255 },
        { .r = 65, .g = 54, .b = 217 },
        { .r = 126, .g = 92, .b = 230 },
        { .r = 168, .g = 134, .b = 191 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 0, .g = 0, .b = 0 },
        { .r = 0, .g = 0, .b = 0 },
        { .r = 168, .g = 46, .b = 230 },
        { .r = 242, .g = 157, .b = 242 },
        { .r = 69, .g = 149, .b = 230 },
        { .r = 64, .g = 223, .b = 255 },
        { .r = 65, .g = 54, .b = 217 },
        { .r = 126, .g = 92, .b = 230 }
    },
    .system = 16
};

#endif  /* BASE16_darkviolet_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
