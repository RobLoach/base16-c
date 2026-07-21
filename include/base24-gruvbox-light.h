/**
 * Base24 Gruvbox Light 
 *
 * @author Tinted Theming (https://github.com/tinted-theming), morhetz (https://github.com/morhetz/gruvbox)
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

#ifndef BASE24_gruvbox_light_H__
#define BASE24_gruvbox_light_H__

/**
 * The Base24 Gruvbox Light scheme.
 *
 * @author Tinted Theming (https://github.com/tinted-theming), morhetz (https://github.com/morhetz/gruvbox)
 */
extern const base16_scheme base24_gruvbox_light;

#endif  /* BASE24_gruvbox_light_H__ */

#if defined(BASE16_IMPLEMENTATION) && !defined(BASE16_HEADER_ONLY)
#ifndef BASE24_gruvbox_light_IMPLEMENTATION_ONCE
#define BASE24_gruvbox_light_IMPLEMENTATION_ONCE

const base16_scheme base24_gruvbox_light = {
    .name = "Gruvbox Light",
    .base = {
        { .r = 251, .g = 241, .b = 199 },
        { .r = 235, .g = 219, .b = 178 },
        { .r = 213, .g = 196, .b = 161 },
        { .r = 189, .g = 174, .b = 147 },
        { .r = 124, .g = 111, .b = 100 },
        { .r = 60, .g = 56, .b = 54 },
        { .r = 40, .g = 40, .b = 40 },
        { .r = 29, .g = 32, .b = 33 },
        { .r = 204, .g = 36, .b = 29 },
        { .r = 214, .g = 93, .b = 14 },
        { .r = 215, .g = 153, .b = 33 },
        { .r = 152, .g = 151, .b = 26 },
        { .r = 104, .g = 157, .b = 106 },
        { .r = 69, .g = 133, .b = 136 },
        { .r = 177, .g = 98, .b = 134 },
        { .r = 157, .g = 0, .b = 6 },

        /* Base24 */
        { .r = 249, .g = 246, .b = 215 },
        { .r = 251, .g = 249, .b = 228 },
        { .r = 157, .g = 0, .b = 6 },
        { .r = 181, .g = 118, .b = 20 },
        { .r = 121, .g = 116, .b = 14 },
        { .r = 66, .g = 123, .b = 88 },
        { .r = 7, .g = 102, .b = 120 },
        { .r = 143, .g = 63, .b = 113 }
    },
    .system = 24
};

#endif  /* BASE24_gruvbox_light_IMPLEMENTATION_ONCE */
#endif  /* BASE16_IMPLEMENTATION */
