/**
 * Base24 Dracula based on https://github.com/dracula/draculatheme.com/blob/main/content/spec.mdx
 *
 * @author clach04 (https://github.com/clach04)
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

#ifndef BASE24_dracula_H__
#define BASE24_dracula_H__

/**
 * The Base24 Dracula scheme.
 *
 * @author clach04 (https://github.com/clach04)
 */
extern const base16_scheme base24_dracula;

#endif  /* BASE24_dracula_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_dracula_IMPLEMENTATION_ONCE
#define BASE24_dracula_IMPLEMENTATION_ONCE

const base16_scheme base24_dracula = {
    .name = "Dracula",
    .base = {
        { .r = 40, .g = 42, .b = 54 },
        { .r = 33, .g = 34, .b = 44 },
        { .r = 68, .g = 71, .b = 90 },
        { .r = 98, .g = 114, .b = 164 },
        { .r = 158, .g = 168, .b = 199 },
        { .r = 248, .g = 248, .b = 242 },
        { .r = 248, .g = 248, .b = 242 },
        { .r = 255, .g = 255, .b = 255 },
        { .r = 255, .g = 85, .b = 85 },
        { .r = 255, .g = 184, .b = 108 },
        { .r = 241, .g = 250, .b = 140 },
        { .r = 80, .g = 250, .b = 123 },
        { .r = 139, .g = 233, .b = 253 },
        { .r = 189, .g = 147, .b = 249 },
        { .r = 255, .g = 121, .b = 198 },
        { .r = 153, .g = 51, .b = 51 },

        /* Base24 */
        { .r = 30, .g = 32, .b = 41 },
        { .r = 22, .g = 23, .b = 29 },
        { .r = 255, .g = 110, .b = 110 },
        { .r = 255, .g = 255, .b = 165 },
        { .r = 105, .g = 255, .b = 148 },
        { .r = 164, .g = 255, .b = 255 },
        { .r = 214, .g = 172, .b = 255 },
        { .r = 255, .g = 146, .b = 223 }
    },
    .system = 24
};

#endif  /* BASE24_dracula_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
