/**
 * Base16 Kissa Macchiato 
 *
 * @author rwendell (https://github.com/rwendell/kissa)
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

#ifndef BASE16_kissa_macchiato_H__
#define BASE16_kissa_macchiato_H__

/**
 * The Base16 Kissa Macchiato scheme.
 *
 * @author rwendell (https://github.com/rwendell/kissa)
 */
extern const base16_scheme base16_kissa_macchiato;

#endif  /* BASE16_kissa_macchiato_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE16_kissa_macchiato_IMPLEMENTATION_ONCE
#define BASE16_kissa_macchiato_IMPLEMENTATION_ONCE

const base16_scheme base16_kissa_macchiato = {
    .name = "Kissa Macchiato",
    .base = {
        { .r = 31, .g = 28, .b = 22 },
        { .r = 53, .g = 50, .b = 45 },
        { .r = 71, .g = 68, .b = 63 },
        { .r = 184, .g = 164, .b = 140 },
        { .r = 212, .g = 196, .b = 168 },
        { .r = 250, .g = 240, .b = 230 },
        { .r = 232, .g = 213, .b = 183 },
        { .r = 254, .g = 244, .b = 228 },
        { .r = 232, .g = 119, .b = 119 },
        { .r = 218, .g = 144, .b = 80 },
        { .r = 234, .g = 198, .b = 122 },
        { .r = 140, .g = 184, .b = 112 },
        { .r = 106, .g = 184, .b = 176 },
        { .r = 127, .g = 168, .b = 212 },
        { .r = 176, .g = 148, .b = 204 },
        { .r = 204, .g = 136, .b = 170 },

        /* Base24, mapped from https://github.com/tinted-theming/base24/blob/master/styling.md */
        { .r = 31, .g = 28, .b = 22 },
        { .r = 31, .g = 28, .b = 22 },
        { .r = 232, .g = 119, .b = 119 },
        { .r = 234, .g = 198, .b = 122 },
        { .r = 140, .g = 184, .b = 112 },
        { .r = 106, .g = 184, .b = 176 },
        { .r = 127, .g = 168, .b = 212 },
        { .r = 176, .g = 148, .b = 204 }
    },
    .system = 16
};

#endif  /* BASE16_kissa_macchiato_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
